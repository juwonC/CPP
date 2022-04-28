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

int main()
{
    //std::unique_ptr<MyClass> sp{ new MyClass };
    std::unique_ptr<MyClass> sp{ std::make_unique<MyClass>() };

    std::unique_ptr<Song> spSong{ std::make_unique<Song>(1, "BGM") };

    std::cout << spSong->mTrackNo << " : " << spSong->mTitle << std::endl;

}

//Ownership
//std::unique_ptr
//    객체의 소유권을 가짐 (1:1)
//    복사 X (복사생성자, 복사대입 불가), 이동은 가능