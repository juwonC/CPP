#include <iostream>

int main()
{
    //int x = 10;
//int y = 20;

//std::cout << x << " : " << &x << std::endl;
//std::cout << y << " : " << &y << std::endl;
//// &x, &y 주소를 나타냄


// 1.
// <<, >> 연산자 중에 하나다!

//char myCharacter;
//
//std::cout << "알파벳을 입력하고 엔터키를 누르세요!" << std::endl;

//std::cin >> myCharacter;

//std::cout << "입력하신 알파벳은 : " << myCharacter << "입니다.";
//// 숫자 1을 넣으면 문자 '1' 이 출력됨
//// abcd 입력하면 a 하나만 가져감(cin을 두번하면 b를 가져감)
//
//// 2.

//float realNumber;

//std::cout << "실수를 입력하고 엔터키를 누르세요!" << std::endl;

//std::cin >> realNumber;

//std::cout << "입력하신 실수는 : " << realNumber << "입니다.";
//// 1.1f 입력 후 출력될때는 리터럴f가 표시가 안됨

//// 3.
//
//// literal : true, false
//// 0이면 거짓, 0이 아니면 참!!

//bool trueOrFalse;

//std::cout << "bool 타입을 입력하고 엔터키를 누르세요!" << std::endl;

//std::cin >> trueOrFalse;

//if (trueOrFalse == 0)
//{
//    std::cout << "입력하신 bool 타입은 False 입니다.";
//}
//else
//{
//    std::cout << "입력하신 bool 타입은 True 입니다.";
//}
// 입력 값과 리터럴은 다르고 별개다!!
// 리터럴이 작동하는 곳은 코드 안이다!!

/*int myNumber = 2147483647;

std::cout << myNumber << std::endl;

myNumber = myNumber + 1;

std::cout << myNumber << std::endl;*/

// 오버플로우 -> 흘러넘쳐서 음수로 바뀜(부호비트가 1로 바뀌면 음수로 바뀌기 때문)

/*unsigned int myNumber = 0;

std::cout << myNumber << std::endl;

myNumber = myNumber - 1;

std::cout << myNumber << std::endl;*/

// 언더플로우 - 가진 수 중 가장 작은 수에서 1을 뺐는데 가장 큰 수가 나옴

    int number3;
    int my_number;
    int highScore;

    // 사용 안됨(표준 아님)
    int $dollar;
    int 3number = 1;
    int class = 3; // keyword는 파란색으로 표시됨
    int new = 3;
    int volatile = 3;
    int friend = 3;



    return 0;
}