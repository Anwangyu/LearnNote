#include <iostream>
#include <string>
using namespace std;

/*
功能：
成对出现的数据，利用对组可以返回两个数据

两种创建方式：
pair<type,type>p(value1,value2);
pair<type,type>p = make_pair(value1,value2);
*/

void test01()
{
    pair<string,int>p(string("Tom"),20);
    cout << "姓名：" << p.first << "年龄:" << p.second << endl;

    //第二种
    pair<string,int>p2= make_pair("Jerry",30);
    cout << "姓名：" << p2.first << "年龄:" << p2.second << endl;
}

int main()
{


   test01();

    return 0;
}
