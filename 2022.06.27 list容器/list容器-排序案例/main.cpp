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

//ָ���������
bool comparePerson(Person &p1,Person &p2)
{
    //����������һ������
    if(p1.m_Age == p2.m_Age)
    {
        return p1.m_Height > p2.m_Height; //������ͬ������°��������һ������
    }
    else
        {
            return p1.m_Age < p2.m_Age;
        }



}

void test01()
{

    list <Person>L;//��������

    //����
    Person p1("��  ��",25,175);
    Person p2("��Ԩ��",35,170);
    Person p3("��  ��",40,176);
    Person p4("ׯ  ��",40,165);
    Person p5("������",28,175);
    Person p6("�׾���",32,171);

    //�������н����ݲ���
    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for(list<Person>::iterator it = L.begin();it != L.end();it++)
    {
        cout << "������" << (*it).m_Name << "  ���䣺" << it->m_Age << "  ��ߣ�" << it->m_Height << endl;
    }

    //����
    cout << "------------------------------" <<  endl;
    cout << "�����" << endl;

    L.sort(comparePerson);
    for(list<Person>::iterator it = L.begin();it != L.end();it++)
    {
        cout << "������" << (*it).m_Name << "  ���䣺" << it->m_Age << "  ��ߣ�" << it->m_Height << endl;
    }


}

int main()
{
    test01();


    return 0;
}
