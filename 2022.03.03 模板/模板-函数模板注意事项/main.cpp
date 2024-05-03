#include <iostream>

using namespace std;

//注意事项：

template<class T>//typname可以替换成class
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

}



// 1.自动类型推导，必须推导出一致的数据类型T才可以使用

void text01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    mySwap(a,b);
    //mySwap(a,c);//错误的原因是推导不出一致的T类型
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
// 2.模板必须要确定出T的数据类型，才可以使用

template<class T>
void func()
{
    cout << "func函数的调用" << endl;
}

void text02()
{
    func<int>();
}

int main()
{
    //text01();
    text02();
    return 0;
}
