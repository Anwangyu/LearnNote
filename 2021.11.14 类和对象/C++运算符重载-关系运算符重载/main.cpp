#include <iostream>
#include <string>
using namespace std;

//重载关系运算符，可以让两个自定义类型对象进行对比操作

class Person
{
public:
    Person(string name , int age)
    {
        m_Name = name;
        m_Age = age;

    }
    //重载==号

    bool operator==(Person &p)//布尔代表真假
    {
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;

        }
        return false;
    }
//    bool operator!=(Person &p)
//    {
//        if(this->m_Name = name && this->m_Age = age)
//        {
//            return false;
//        }
//        return true;
//    }

    string m_Name;

    int m_Age;

private:

};
void test01()
{
    Person p1("Tom", 18);

    Person p2("Jerry", 18);

    if(p1 == p2)
    {
        cout<< "p1和p2相等" << endl;
    }
    else
    {
        cout << "p1和P2不相等" << endl;
    }
}
int main()
{

    test01();

    return 0;
}
