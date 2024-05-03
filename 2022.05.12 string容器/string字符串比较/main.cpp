#include <iostream>

using namespace std;


//字符串比较是按照ASCII码进行对比
//两个字符串相等 则返回  0
//第一个大于第二个 返回 1  否则 -1

//函数原型：
//int compare(const string &s) const;//与字符串s比较
//int compare(const char*s);//与字符串s比较


void test01()
{
    string str1 = "hell";
    string str2 = "hello";

    if(str1.compare(str2) == 0)
    {
        cout << "str1 = str2" << endl;
    }
    else if(str1.compare(str2) > 0)
    {
        cout << "str1 > str2" << endl;
    }
    else
    {
        cout << "str1 < str2" << endl;
    }

}


int main()
{

    test01();



    return 0;
}
