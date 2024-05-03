#include <iostream>

using namespace std;

//语法:子类:继承方式 父类，继承方式 父类2
//多继承可能会引发父类中有同名成员出现，需要加作用域区分

class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
    int m_A;//初始化数据

};

class Base2
{
public:
    Base2()
    {
        m_A = 200;
    }
    int m_A;//初始化数据
};
//子类
//语法: class 子类 :继承方式 父类1, 继承方式 父类2...

class Son:public Base1, public Base2
{
public:
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
    int m_C;
    int m_D;
};

void test01()
{
    Son s;

    cout << "size of Son = " << sizeof(s) << endl;
//当父类中出现同名成员，需要加作用域区分
    cout << "Base1m_A= " << s.Base1::m_A << endl;
    cout << "Base2m_A= " << s.Base2::m_A << endl;
}
int main()
{
    test01();

    return 0;
}
