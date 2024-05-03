#include <iostream>

#include <string>
using namespace std;


//类模板的作用：
 //建立一个通用类，类中的成员 数据类型可以不具体制定，用一个虚拟的类型来代表

//语法

 //template<typename T>
 //类
 //函数模板和类模板的区别是一个是在template下跟的是函数一个跟的是类

 //类模板
 template<class NameType,class AgeType>
 class Person
 {
 public:
     Person(NameType name,AgeType age)
     {
         this->m_Name = name;
         this->m_Age = age;
     }

void showPerson()
{
     cout << "Name:" << this->m_Name << "\nAge:" << this->m_Age << endl;
}

     NameType m_Name;
     AgeType m_Age;


 };

 void text01()
 {
     Person <string,int> p1("孙悟空",999);
     p1.showPerson();
 }



int main()
{
    text01();


    return 0;
}
