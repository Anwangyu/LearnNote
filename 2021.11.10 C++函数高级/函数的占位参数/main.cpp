#include <iostream>

using namespace std;
//C++的形参列表里可以有占位参数，用来占位，调用函数时须填补该位置
//语法: 返回值类型 函数名 (){}
//占位参数 还可以有默认参数（上） 与默认函数的默认值类似
void func(int a, int )
{
  cout << "函数调用" << endl;
}
int main()
{
    func(10,10);

    return 0;
}
