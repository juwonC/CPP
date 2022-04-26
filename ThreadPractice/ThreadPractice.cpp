#include <iostream>
#include <thread>
#include <mutex>

std::mutex gMutex;

void PrintInt()
{
    int i{};
    while (i < 500)
    {
        if (gMutex.try_lock())
        {
            std::cout << "Job1 : " << i << std::endl;
            ++i;
            gMutex.unlock();
        }
        else
        {

        }
    }
}

void PrintAscii()
{
    for (int repeat = 0; repeat < 5; ++repeat)
    {
        int i{ 33 };
        while (i < 126)
        {
            if (gMutex.try_lock())
            {
                std::cout << "Job2 : " << (char)(i) << std::endl;
                ++i;
                gMutex.unlock();
            }
            else
            {

            }
        }
    }
}

int main()
{
    std::thread job1(PrintInt);
    std::thread job2(PrintAscii);

    job1.join();
    job2.join();

    std::cout << "--- All work has been completed ---" << std::endl;
}