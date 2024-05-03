#include <iostream>
#include <list>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name,int age,int height)
    {
        m_Name = name;
        m_Age  = age;
        m_Height = height;
    }

    string m_Name;
    int m_Age;
    int m_Height;


};

//指定排序规则
bool comparePerson(Person &p1,Person &p2)
{
    //按照年龄做一个升序
    if(p1.m_Age == p2.m_Age)
    {
        return p1.m_Height > p2.m_Height; //年龄相同的情况下按照身高做一个降序
    }
    else
        {
            return p1.m_Age < p2.m_Age;
        }



}

void test01()
{

    list <Person>L;//创建容器

    //数据
    Person p1("李  白",25,175);
    Person p2("陶渊明",35,170);
    Person p3("老  子",40,176);
    Person p4("庄  子",40,165);
    Person p5("周树人",28,175);
    Person p6("白居易",32,171);

    //向容器中将数据插入
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for(list<Person>::iterator it = L.begin();it != L.end();it++)
    {
        cout << "姓名：" << (*it).m_Name << "  年龄：" << it->m_Age << "  身高：" << it->m_Height << endl;
    }

    //排序
    cout << "------------------------------" <<  endl;
    cout << "排序后：" << endl;

    L.sort(comparePerson);
    for(list<Person>::iterator it = L.begin();it != L.end();it++)
    {
        cout << "姓名：" << (*it).m_Name << "  年龄：" << it->m_Age << "  身高：" << it->m_Height << endl;
    }


}

int main()
{
    test01();


    return 0;
}
