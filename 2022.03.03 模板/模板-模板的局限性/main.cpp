#include <iostream>
#include <cstdlib>
using namespace std;

//局限性: 模板的通用性并不是万能的，有些特定的类型要做具体化方式做特殊实现

//学习模板是为了在STL中能够运用系统提供的模板

class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    //姓名
    string m_Name;
    //年龄
    string m_Age;
};
//对比两个数据是否相等
template<class T>
bool myCompare(T &a, T &b)
{
    if(a == b)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//利用具体化的Person的版本来实现代码，具体化会优先调用
template<> bool myCompare(Person &p1,Person &p2)
{
    if(p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
    {
        return true;
    }
    else
    {
        return false;

    }
}
void text01()
{
    int a = 10;
    int b = 20;

    bool ret = myCompare(a,b);

    if(ret)
    {
        cout << "a == b" << endl;
    }
    else
    {
        cout << "a != b" <<endl;
    }
}

void text02()
{
    Person p1("Tom",10);
    Person p2("Tom",10);

    bool ret = myCompare(p1,p2);

    if(ret)
    {
        cout << "p1 == p2" << endl;
    }
    else
    {
        cout << "p1 != p2" << endl;
    }

}

int main()
{
    //text01();

    text02();

    system("pause");


}
