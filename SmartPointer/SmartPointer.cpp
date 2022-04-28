#include <iostream>

class MyClass
{
public:
    ~MyClass()
    {
        std::cout << "DELETED" << std::endl;
    }
};

class Song
{
public:
    int mTrackNo;
    std::string mTitle;

    Song(int trackNo, std::string title) : mTrackNo{ trackNo }, mTitle{ title }
    {
    }
};

class Image
{
public:
    Image()
    {
        std::cout << "[+Image]" << std::endl;
    }
    ~Image()
    {
        std::cout << "[-Image]" << std::endl;
    }
};

class Bug
{
    std::shared_ptr<Image> mspImage;

public:
    Bug(std::shared_ptr<Image> image) : mspImage{ image }
    {
        std::cout << "[+Bug]" << std::endl;
    }

    ~Bug()
    {
        std::cout << "[-Bug]" << std::endl;
    }
};

int main()
{
    //std::unique_ptr<MyClass> sp{ new MyClass };
    //std::unique_ptr<MyClass> sp{ std::make_unique<MyClass>() };

    std::unique_ptr<Song> spSong{ std::make_unique<Song>(1, "BGM") };

    std::cout << spSong->mTrackNo << " : " << spSong->mTitle << std::endl;

    std::cout << std::endl;

    spSong.reset();

    std::shared_ptr<Image> spImage{ std::make_shared<Image>() };

    std::cout << spImage.use_count() << std::endl;

    {
        auto spBug1 = std::make_unique<Bug>(spImage);
        std::cout << spImage.use_count() << std::endl;
        {
            auto spBug2 = std::make_unique<Bug>(spImage);
            std::cout << spImage.use_count() << std::endl;
            {
                auto spBug3 = std::make_unique<Bug>(spImage);
                std::cout << spImage.use_count() << std::endl;
            }
            std::cout << spImage.use_count() << std::endl;
        }
        std::cout << spImage.use_count() << std::endl;
    }
    std::cout << spImage.use_count() << std::endl;

}

//Smart Pointer
//    자동으로 포인터 해제(delete)
//
//release()
//현재 포인터 해제
//    delete
//
//reset()
//새로운 포인터 지정
//    delete
//    p = nullptr;
//
//get()
//    현재 포인터 반환

//Ownership
//std::unique_ptr
//    객체의 소유권을 가짐 (1:1)
//    복사 X (복사생성자, 복사대입 불가), 이동은 가능
//
//std::shared_ptr
//    객체의 소유권을 공유 (1:n)
//    하나의 객체를 여럿이 공유
//
//std::weak_ptr
//    shared_ptr과 같은데 소유권을 주장하지 않음 (1:n)
//    use_count를 증가 시키지 않음