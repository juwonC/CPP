#include <iostream>
#include <string>
using namespace std;

void TestPrint(std::string& str)
{
    cout << str.size() << " : " << str << endl;
}

int main()
{
    std::string empty;
    TestPrint(empty);

    string sized(10, '1');
    TestPrint(sized);

    string s1("test");
    cout << s1[0] << s1[1] << endl;

    string s2(s1);
    string s3 = s1 + s2;
    TestPrint(s3);

    s3 += s3;
    s3[0] = 'T';
    TestPrint(s3);

    empty = s3;
    TestPrint(empty);

    empty = empty;
    TestPrint(empty);
}