#include <iostream>
#include <string>

using namespace std;

//通过全局函数打印Person信息

//提前让编译器知道person类的存在

template<class T1,class T2>
class Person;

//类外实现 模板函数   类中要同样有模板函数的声明
template<class T1,class T2>
void printPerson2(Person <T1,T2> p)
{
    cout << "类外实现-姓名:" << p.m_Name << "类外实现-年龄：" << p.m_Age << endl;
}



//全局函数类内实现-直接在类内声明友元即可
//全局函数类外实现-需要提前让编译器知道全局函数的存在

template<class T1,class T2>
class Person
{
    //全局函数 类内实现
    friend void printPerson(Person <T1,T2> p)
    {
        cout << "姓名:" << p.m_Name << "年龄：" << p.m_Age << endl;
    }

    //全局函数 类外实现
    //加一个空模板的参数列表
    //如果全局函数 是类外实现  需要编译器提前知道这个函数的存在  此时可将类外 实现的函数提前即放在最上边
    friend void printPerson2<>(Person <T1,T2> p);//只能写声明



public:
    Person(T1 name, T2 age)
    {
        this->m_Name = name;
        this->m_Age  = age;

    }

private:


    T1 m_Name;
    T2 m_Age;

};

//1.全局函数在 类内实现
void test01()
{
    Person<string,int>p("Tom",20);

    printPerson(p);
}


//2.全局函数在类外实现
void test02()
{
    Person<string,int>p("Jerry",18);

    printPerson(p);
}

int main()
{
    test01();

    test02();

    return 0;
}
