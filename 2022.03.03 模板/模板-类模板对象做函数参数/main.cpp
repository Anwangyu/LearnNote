#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// 类模板实例化出对象，向函数传参的方式

//一共有三种传入方式
//1.指定传入的类型 ---直接显示对象的数据类型
//2.参数模板化     ---将对象中的参数变为模板进行传递
//3.整个类模板化   ---将这个对象类型 模板化进行传递


//类模板
template<class T1,class T2 = int>
class Person
{
public:

    Person(T1 name,T2 age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }

    void showPerosn()
    {
        cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;

};

//1.指定传入类型（常用）
void printPerson1(Person<string>&p)
{
    p.showPerosn();
}

void text01()
{
    Person<string>p("孙悟空",100);
    //p.showPerosn();
    printPerson1(p);
}

//2.参数模板化
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p)
{
    p.showPerosn();
    cout << "T1的类型为：" << typeid(T2).name() << endl;
    cout << "T2的类型为：" << typeid(T2).name() << endl;

}

void text02()
{
    Person<string,int>p("猪八戒",90);
    printPerson2(p);
}


//3.整个类模板化
template<class T>
void printPerson3(T &p)
{
    p.showPerosn();
    cout << "T的数据类型为：" << typeid(T).name() << endl;
}

void text03()
{
    Person<string,int>p("唐僧",30);
    printPerson3(p);
}
int main()
{
    //text01();
    //text02();
    text03();
    return 0;
}
