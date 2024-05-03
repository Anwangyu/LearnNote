#include <iostream>

using namespace std;

//普通函数与函数模板区别：
//       1普通函数调用时可以发生自动类型转换（隐式类型转换）
//       2函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
//       3如果利用显示指定类型的方式，可以发生隐式类型转换


//普通函数
int myAdd01(int a,int b)
{
    return a + b;
}

//函数模板
template<class T >
T myAdd02(T a, T b)
{
    return a + b;
}


//使用函数模板时，如果用自动类型推导，不会发生自动类型转换，即隐式类型转换
void test01()
{
    int a = 10;
    int b = 20;


    char c = 'c';//  c=99,  进行了隐式转换

    cout << myAdd01(a,c) <<endl;

    //自动类型推导(无法推导出一致的类型)(不会发生隐式类型的转换)
    cout << myAdd02(a,b) << endl;

    //显示指定类型(要进行声明)（会发生隐式类型的转换）
    cout << myAdd02<int>(a,c)<< endl;


}


int main()
{
    test01();


    return 0;
}
