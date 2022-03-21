#include <iostream>

int main()
{
    // Type Object Value !!

// Variable

// Declaration(선언)
//int myInteger;
//int result;


//// Definition, Assignment(정의, 대입)
//myInteger = 0; //1이라는 값을 myInteger안에 대입


//result = myInteger; // object에서 값을 꺼내올 수 있기 때문에 가능함.

//// Initialize 초기화 - 선언과 동시에 정의(대입)를 하는 것
//int myInteger = 1;

// 수식 : expression (연산자가 있는 식)
//3 + 5
//3 - 5

//3 : left operand 피연산자 / left value
//+ - * / : operator 연산기호 연산자
//5 : right operand 피연산자 / right value

// statement  - ;으로 끝나는 문장
// expression - 연산자가 있는 수식, 계산식(표현식)

// operator, operand
// 
//                  left-value vs right-value
// 사전적 의미      왼쪽 값       오른쪽 값
// 숨은 의미        객체          값

// = operator : assign operator(대입 연산자) 오른쪽 값을 왼쪽 object에 대입
// object = value
// 이름을 붙여놓으면 object가 됨

// Type
// int / unsigned int


    int myInteger = 1;
    float myFloat = 1.0f; // 1.f 허용, 1f 허용 안함!!
    bool myBool = true;
    char myCharacter = 'a';

    std::cout << sizeof(char) << std::endl;

    return 0;
}