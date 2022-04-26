#include <iostream>
#include <thread>
#include <mutex>
#include <future>

//std::mutex gMutex;

//void PrintInt()
//{
//    int i{};
//    while (i < 500)
//    {
//        if (gMutex.try_lock())
//        {
//            std::cout << "Job1 : " << i << std::endl;
//            ++i;
//            gMutex.unlock();
//        }
//        else
//        {
//
//        }
//    }
//}
//
//void PrintAscii()
//{
//    for (int repeat = 0; repeat < 5; ++repeat)
//    {
//        int i{ 33 };
//        while (i < 126)
//        {
//            if (gMutex.try_lock())
//            {
//                std::cout << "Job2 : " << (char)(i) << std::endl;
//                ++i;
//                gMutex.unlock();
//            }
//            else
//            {
//
//            }
//        }
//    }
//}

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
    //std::thread job1(PrintInt);
    //std::thread job2(PrintAscii);

    //job1.join();
    //job2.join();



    std::future<void> async1 = std::async(PrintInt);
    std::future<void> async2 = std::async(PrintAscii);

    std::cout << "--- All work has been completed ---" << std::endl;

    async1.get();
    std::cout << "PrintInt completed" << std::endl;

    async2.get();
    std::cout << "PrintAscii completed" << std::endl;
}