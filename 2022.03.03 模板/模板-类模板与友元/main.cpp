#include <iostream>
#include <string>

using namespace std;

//ͨ��ȫ�ֺ�����ӡPerson��Ϣ

//��ǰ�ñ�����֪��person��Ĵ���

template<class T1,class T2>
class Person;

//����ʵ�� ģ�庯��   ����Ҫͬ����ģ�庯��������
template<class T1,class T2>
void printPerson2(Person <T1,T2> p)
{
    cout << "����ʵ��-����:" << p.m_Name << "����ʵ��-���䣺" << p.m_Age << endl;
}



//ȫ�ֺ�������ʵ��-ֱ��������������Ԫ����
//ȫ�ֺ�������ʵ��-��Ҫ��ǰ�ñ�����֪��ȫ�ֺ����Ĵ���

template<class T1,class T2>
class Person
{
    //ȫ�ֺ��� ����ʵ��
    friend void printPerson(Person <T1,T2> p)
    {
        cout << "����:" << p.m_Name << "���䣺" << p.m_Age << endl;
    }

    //ȫ�ֺ��� ����ʵ��
    //��һ����ģ��Ĳ����б�
    //���ȫ�ֺ��� ������ʵ��  ��Ҫ��������ǰ֪����������Ĵ���  ��ʱ�ɽ����� ʵ�ֵĺ�����ǰ���������ϱ�
    friend void printPerson2<>(Person <T1,T2> p);//ֻ��д����



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

//1.ȫ�ֺ����� ����ʵ��
void test01()
{
    Person<string,int>p("Tom",20);

    printPerson(p);
}


//2.ȫ�ֺ���������ʵ��
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
