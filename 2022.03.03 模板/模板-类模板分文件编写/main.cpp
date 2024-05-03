#include <iostream>
#include <string>

using namespace std;

//直接包含源文件
#include "person.h"//（报错）.hpp



//类模板中成员函数创建时机是在调用阶段，导致分文件编写时链接不到

//解决方式：
//直接包含.cpp源文件
//将声明和实现写到同一个文件中，并更改后缀名为.hpp，hpp是约定的名称，并不是强制

//template<class T1,class T2>
//class Person
//{
//public:
//
//    Person(T1 name,T2 age);
//
//    void showPerson();
//
//    T1 m_Name;
//    T2 m_Age;
//
//};


//template<class T1,class T2>
//Person<T1,T2>::Person(T1 name,T2 age)
//{
//    this->m_Name = name;
//    this->m_Age = age;
//}
//
//
//template<class T1,class T2>
//void Person<T1,T2>::showPerson()
//{
//    cout << "姓名：" << this->m_Name << " 年龄：" << this->m_Age << endl;
//
//}

void test01()
{
    Person<string,int>p("Jerry",18);
    p.showPerson();
}



int main()
{
    test01();



    return 0;
}
