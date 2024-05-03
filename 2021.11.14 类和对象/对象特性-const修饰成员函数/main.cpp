#include <iostream>

using namespace std;
/* 常函数：
 成员函数后加const后我们称为这个函数为常函数
 常函数内不可以修改成员属性
 成员属性声明时加上关键字 mutable，在常函数中依然可以修改
   常对象：
  声明对象前加const称该对象为常对象
  常对象只能调用常函数
*/
class Person
{
public:
    //this指针的本质 是指针常量 指针的指向是不可以修改的
    // const (值) Person* const (指向)  this;
    Person()
    {

    }
    //在成员函数后加const，修饰的是this 指向，让指针指向的值也不可以修改
    void showPerson() const
    {
        this->m_B = 100;
        //this->m_A = 100;
        //this = NULL； this指针不可以修改指针的指向的
    }

    void func()
    {
        //int m_A = 100;
    }

    int m_A;
    mutable int m_B;//特殊变量，即使在常函数中，也可以修改这个值,加上关键字mutable，上述const所修饰在左值便可以修改
};
void test01()
{
    Person p;
    p.showPerson();
}

//常对象

void test02()
{
    const Person p;//在对象前加上const,变为常对象
    //需要一个默认构造函数 在类中

    //p.m_A = 100;
    p.m_B = 100;//特殊的值，在常对象下也可以修改


    //常对象只能调用常函数
    p.showPerson();
    //p.func();   常对象不可以调用普通成员函数，因为普通成员函数可以修改属性


}

int main()
{
    //test01();
    test02();

    return 0;
}
