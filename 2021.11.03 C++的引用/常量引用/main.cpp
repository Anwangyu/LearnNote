#include <iostream>

using namespace std;
//打印数据函数
void showValue (const int & val)
{
    cout << "val=" << val <<endl;
}
int main()
{
    const int& ref = 10;
    cout << ref <<endl;
    //ref = 100;加入const后变成不可修改的变量

    //常量引用
    //使用：用来修饰形参，防止误操作
    int a = 1000  ;
    showValue(a);
    cout << "a="  << a << endl;
    return 0;
}
