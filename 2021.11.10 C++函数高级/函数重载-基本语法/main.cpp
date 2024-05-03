#include <iostream>

using namespace std;
//函数名可以相同，提高复用性

/*函数重载满足条件：
 同一个作用域下
 函数名称相同
 函数参数类型不同 或者 个数不同 或者顺序不同 */


 void func()
 {
     cout << "func 的调用 " <<endl;
 }
 void func(int a)
 {
     cout << "func(int a) 的调用 " <<endl;
 }
 void func(double a)
 {
     cout << "func (double) 的调用 " <<endl;
 }
 void func(int a, double b )
 {
     cout << "func(int a, double b) 的调用 " <<endl;
 }
 void func( double b, int a )
 {
     cout << "func(double b, int a) 的调用 " <<endl;
 }


 //函数的返回值不可以作为函数重载的条件

int main()
{
    //func();
    //func(10);
    //func(3.14);
      func(10,3.14);



    return 0;
}
