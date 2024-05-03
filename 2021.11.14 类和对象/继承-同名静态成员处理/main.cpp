#include <iostream>

using namespace std;

//继承中同名静态成员处理

class Base
{
public:

    static int m_A;//编译阶段分配内存   所有对象共享同一份数据  类内声明类外初始化

    static void func()
    {
        cout << "Base-static void func()" << endl;
    }
};
int Base::m_A = 100;

class Son:public Base
{
public:

    static int m_A;

    static void func()
    {
        cout << "Son-static void func()" << endl;
    }

};
int Son::m_A = 200;

//同名静态成员属性
void test01()
{
    //通过对象来访问数据
    cout << "通过对象访问" << endl;
    Son s;
    cout << "Son下的m_A=" << s.m_A << endl;
    cout << "Base下的m_A=" << s.Base::m_A << endl;

    //通过类名访问数据

    cout << "通过类名访问" << endl;
    cout << "Son下m_A" << Son::m_A << endl;
    //第一个::代表通过类名方式访问  第二个::代表访问父类作用域下
    cout << "Base下的m_A=" << Son::Base::m_A << endl;


}

//同名静态成员函数

void test02()
{
    //通过对象访问
    Son s;
    s.func();
    s.Base::func();

    //通过类名访问

    Son::func();
    Son::Base::func();

    //子类出现和父类同名静态成员函数，也会隐藏父类中所有同名成员函数
    //如果想访问父类中被隐藏同名成员，需要加作用域

}


int main()
{

    //test01();
    test02();

    return 0;
}
