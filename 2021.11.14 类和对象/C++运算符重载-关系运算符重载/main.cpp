#include <iostream>
#include <string>
using namespace std;

//���ع�ϵ������������������Զ������Ͷ�����жԱȲ���

class Person
{
public:
    Person(string name , int age)
    {
        m_Name = name;
        m_Age = age;

    }
    //����==��

    bool operator==(Person &p)//�����������
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
        cout<< "p1��p2���" << endl;
    }
    else
    {
        cout << "p1��P2�����" << endl;
    }
}
int main()
{

    test01();

    return 0;
}
