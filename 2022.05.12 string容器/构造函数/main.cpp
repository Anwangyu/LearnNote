#include <iostream>

using namespace std;
#include <string>

//char*是一个指针
//string是一个类 类内部封装了char*，管理这个字符串，是一个char*的容器


//特点：
//string 类内部封装 了很多成员方法

//原型
//string();
//string(const char* s);
//string(const string& str);
//string(int n, char c);

//string的构造函数


void test01()
{
    string s1;//默认构造

    const char * str = "hello world";

    string s2(str);
    cout << "s2 = " << s2 << endl;

    string s3(s2);
    cout << "s3 = " << s3 << endl;

    string s4(5,'a');
    cout << "s4 = " << s4 << endl;
}

int main()
{

    test01();


    return 0;
}
