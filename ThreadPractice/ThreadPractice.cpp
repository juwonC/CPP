#include <iostream>
#include <thread>

void PrintInt()
{
    for (int i = 0; i < 500; ++i)
    {
        std::cout << "Job1 : " << i << std::endl;
    }
}

void PrintAscii()
{
    for (int repeat = 0; repeat < 5; ++repeat)
    {
        for (int i = 33; i < 126; ++i)
        {
            std::cout << "Job2 : " << (char)(i) << std::endl;
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