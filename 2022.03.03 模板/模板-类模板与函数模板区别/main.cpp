#include <iostream>

#include <string>

using namespace std;

//类模板与函数模板区别主要有两点
 //1.类模板没有自动类型推导的使用方式
 //2.类模板在模板参数列表中可以有默认参数

//类模板
template<class NameType,class AgeType = int>
class Person
{
public:
    Person(NameType name,AgeType age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }
    void showPerson()
    {
        cout << "name:" << this->m_Name << "age:" << this->m_Age <<endl;
    }

    NameType m_Name;
    AgeType m_Age;


};

//1.
void text01()
{
    //错误案例：Perosn p("孙悟空",1000);  无法用自动类型推导

    Person<string,int>p("孙悟空",1000);//只能用显示指定类型

    p.showPerson();

}

//2.函数模板不能用  类中可以用
void text02()
{
    Person<string>p("猪八戒",999);//在模板中可以指定出来
    p.showPerson();

}


int main()
{
    text01();
    text02();

    return 0;
}
