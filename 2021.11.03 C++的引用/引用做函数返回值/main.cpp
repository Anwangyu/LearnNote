#include <iostream>

using namespace std;
//函数的调用可以作为左值
int& test02()
{
    static int a = 10;//静态变量，存放在全局区，
    //全局区上的数据在程序结束后系统自动释放。
    return a;
}

int main()
{
    int &ref2 = test02();
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    ref2 = 100;//别名
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    test02() = 200;//作为左值存在//原名
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    return 0;
}
