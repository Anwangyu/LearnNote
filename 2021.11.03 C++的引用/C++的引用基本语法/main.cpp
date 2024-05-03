#include <iostream>

using namespace std;

int main()
{
    int a = 10;//引用时候前后类型要一样;
    // 语法： 数据类型 &别名 = 原名
    int &b = a;
    cout << a << endl;
    cout << b << endl;
   //给变量起别名
    b = 100;
    cout << b << endl;
    cout << a << endl;



    return 0;
}
