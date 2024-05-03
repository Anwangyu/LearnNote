#include <iostream>

using namespace std;
//C++中，函数的形参列表中的形参是可以有默认值的。
//语法： 返回值类型 函数名 (参数 = 默认值){}

int func(int a, int b = 20, int c = 30)//调用 //默认值
{
    return a+b+c;
}

//存在注意事项

//如果某个位置有了默认参数，那么从这个位置到后都必须有默认参数
//即从左到右，都必须有默认参数;

//函数声明有默认参数，函数实现就不能有默认参数
//举例
 //int func2(int a=10, int b=20);//函数声明  “;”

 /*int func2(int a, int b) //实现参数
 {
    return a+b;
 }
  */

int main()
{
    cout << func(10) << endl;
//传入值，在传入值和默认值同时存在时候优先传入值

    return 0;
}
