#include <iostream>

using namespace std;
//作用是 函数传参时，可以利用引用的技术让形参修饰实参
//可以简化指针修改实参

//交换函数
//值传递
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapa=" << a << endl;
    cout << "Swapb=" <<b<< endl;
}
//地址传递
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//引用传递
void mySwap03(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a = 10;
    int b = 20;
    //mySwap01(a,b);
    //mySwap02(&a,&b); //形参修饰实参
   mySwap03(a,b);
    cout << "a=" << a << endl;
    cout << "b=" <<b<< endl;





    return 0;
}
