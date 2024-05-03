#include <iostream>

using namespace std;

//访问子类同名成员 直接访问即可
//访问父类同名成员 需要加作用域

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base下func()的调用" << endl;
    }

    void func(int a)//重载
    {
        cout << "Base下func(int a)的调用" << endl;
    }
    int m_A;//属性
};

class Son :public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son下func()的调用" << endl;
    }

    int m_A;
};
//同名属性处理
void test01()
{
    Son s;
    cout << "Son下 m_A =" << s.m_A << endl;
    //如果通过子类对象 访问到父类中同名成员  需要加作用域
    cout << "Base下 m_A =" << s.Base::m_A << endl;//加入父类的作用域
}

//同名成员函数处理
void test02()
{
    Son s;
    s.func();//直接调用  调用是子类中的同名成员

    //如何调用到父类中同名成员函数
    s.Base::func();
    //如果子类中出现和父类同名的成员函数，子类的同名成员回隐藏掉父类中所有同名成员函数
    //如果想访问到父类中被隐藏的同名成员函数。需要加作用域

    s.Base::func(100);
}
//子类对象可以直接访问到子类同名成员
//子类对象加作用域可以访问到父类同名成员
//当子类与父类拥有同名的成员函数，子类会隐藏父类中同名成员函数，加作用域可以访问到父类中同名函数
int main()
{
    //test01();
    test02();

    return 0;
}
