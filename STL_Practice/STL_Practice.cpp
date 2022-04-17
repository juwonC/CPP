#include <iostream>
#include <sstream>
#include <string>
#include <bitset>
#include <vector>

using namespace std;

//void TestPrint(std::string& str)
//{
//    cout << str.size() << " : " << str << endl;
//}

int main()
{
    //std::string empty;
    //TestPrint(empty);

    //string sized(10, '1');
    //TestPrint(sized);

    //string s1("test");
    //cout << s1[0] << s1[1] << endl;

    //string s2(s1);
    //string s3 = s1 + s2;
    //TestPrint(s3);

    //s3 += s3;
    //s3[0] = 'T';
    //TestPrint(s3);

    //empty = s3;
    //TestPrint(empty);

    //empty = empty;
    //TestPrint(empty);

    //==========================================================================

    //int number{ 123 };
    //std::string str{ " " };

    //str = std::to_string(number);
    //number = std::stoi(str);

    //cout << str << " - " << number << endl;

    //float num{ 1.1f };
    //str = std::to_string(num);
    //num = std::stof(str);
    //cout << str << " - " << num << endl;

    //std::locale::global(std::locale("kor")); //"UTF-8") );
    //std::cout << "Set locale to " << std::locale().name() << std::endl;

    //wchar_t c1 = L'A';
    //std::wstring string = L"가나다";
    //wcout << c1 << " " << string << endl;

    //==========================================================================

    //int number{ 1 };
    //char name[]{ "cha" };
    //float average{ 89.5f };
    //char output[100]{};

    //// C Style
    ////sprintf_s(output, sizeof(output),
    ////    "%d번 학생 %s는 평균 %.1f 입니다.",
    ////    number, name, average);

    //// C++ Style
    //snprintf(output, sizeof(output),
    //    "%d번 학생 %s는 평균 %.1f 입니다.",
    //    number, name, average);

    //std::string str{ output };

    //cout << str << endl;

    //std::ostringstream oss;
    //oss << number << "번 학생 " << name
    //    << "는 평균 " << average <<
    //    " 입니다." << std::endl;

    //std::string buffer = oss.str();

    //cout << buffer << endl;

    //==========================================================================

    //int myInt{ 123 };
    //float myFloat{ 3.141592f };
    //bool myBool{ true };

    //std::cout << myBool << std::endl;
    //std::cout << std::boolalpha << myBool << std::endl;
    //std::cout << std::dec << myInt << std::endl;
    //std::cout << std::hex << myInt << std::endl;
    //std::cout << std::oct << myInt << std::endl;
    //std::cout << std::bitset<8>(myInt).to_string() << std::endl;
    //std::cout.precision(5);
    //std::cout << myFloat << std::endl;
    //std::cout.width(5);
    //std::cout << myInt << std::endl;
    //std::cout.fill('0');
    //std::cout.width(5);
    //std::cout << myInt << std::endl;

    //==========================================================================

    //std::vector<int> v{ 1,2,3,4,5 };
    //std::vector<string> names{ "kim", "lee", "choi" };
    //v[0] = 5;
    //cout << v[0] << v[3] << endl;
    //cout << v[5] << endl; // runtime error

    //vector<int> v1(5);

    //for (int i = 0; i < v.size(); ++i)
    //{
    //    cout << v[i] << " ";
    //}

    //for (int i : v)
    //{
    //    cout << i << " ";
    //}


    //vector<int> v{};
    //cout << "숫자를 공백으로 구분하여 입력하세요!" << endl
    //    << "입력 종료는 숫자가 아닌 문자를 입력하세요!" << endl;

    //for (int value; std::cin >> value;)
    //{
    //    v.push_back(value);
    //}

    //int sum{};
    //for (int element : v)
    //{
    //    sum += element;
    //}

    //float average = static_cast<float>(sum) / v.size();

    //cout << "합 : " << sum << endl;
    //cout << "평균 : " << average << endl;

    //vector<int> v1{3}; 값이 3인 원소 한 개 벡터
    //vector<int> v2(3); 기본값 0, 크기가 3인 벡터


    std::vector<int> v{ 1, 2, 3 };
    std::vector<int>::iterator itr = v.begin();

    //while (itr != v.end())
    //{
    //    std::cout << *itr << " ";
    //    itr++;
    //}

    //for (std::vector<int>::iterator itr = v.begin(); itr != v.end(); ++itr)
    //{
    //    std::cout << *itr << " ";
    //}

    //for (auto itr = v.begin(); itr != v.end(); ++itr)
    //{
    //    std::cout << *itr << " ";
    //}

    for (const int value : v)
    {
        cout << value << " ";
    }

    for (int& value : v)
    {
        value = value * value;
        cout << value << " ";
    }

    
}