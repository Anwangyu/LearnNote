#include <iostream>
//函数重载尽量不要加默认参数，如果加了注意错误
using namespace std;
//引用作为重载的条件
//函数重载碰到函数默认参数
void func(int &a)
{
    cout << "func(int &a)调用" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)调用" << endl;
}
//2.函数重载碰到默认参数
void func2(int a)
{
    cout << "func2(int a)的调用" <<endl;
}
void func2(int a, int b)
{
    cout << "func2(int a, int b)的调用" <<endl;
}

int main()
{
//    int a = 10;
//    func(a);
    //  func(10);
       func2(10);

    return 0;
}
