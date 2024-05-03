#include <iostream>
#include <string>

using namespace std;
//插入和删除
//函数原型：
//string& insert(int pos, const char* s);  //插入字符串
//string& insert(int pos, const string& str); //插入字符串
//string& insert(int pos, int n, char c); //在指定位置插入N个字符串c
//string& erase(int pos , int n = npos); //删除从Pos开始的N个字符

void test01()
{
    string str = "hello";

    //插入
    str.insert(1,"1117");//代表从第一个位置开始起



    cout << "str = " << str << endl;


    //删除
    str.erase(1,4);
    cout << "str = " << str << endl;

}

int main()
{
    test01();




    return 0;
}
