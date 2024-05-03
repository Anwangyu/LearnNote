#include <iostream>
#include <stdlib.h>
//栈区需要注意的是 不要返回局部变量的地址   栈区的数据由编译器管理开辟和释放

using namespace std;
int *func()//若加入形参 形参也会放在栈区，在（）里边输入数据类型+符号即可
{
    int a = 10;//局部变量 存放在栈区，栈区的数据在函数执行完后自动释放
    return & a; //返回局部变量的地址
}



int main()
{
    //接受func 函数的返回值
   int *p = func();
   cout << *p << endl; //第一次执行 是系统的保留

   cout << *p << endl;//第二次不再保留
   system("pause");
    return 0;
}
