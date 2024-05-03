#include <iostream>
#include <typeinfo>
#include <string>
using namespace std;

// ��ģ��ʵ�����������������εķ�ʽ

//һ�������ִ��뷽ʽ
//1.ָ����������� ---ֱ����ʾ�������������
//2.����ģ�廯     ---�������еĲ�����Ϊģ����д���
//3.������ģ�廯   ---������������� ģ�廯���д���


//��ģ��
template<class T1,class T2 = int>
class Person
{
public:

    Person(T1 name,T2 age)
    {
        this->m_Age = age;
        this->m_Name = name;
    }

    void showPerosn()
    {
        cout << "name:" << this->m_Name << "age:" << this->m_Age << endl;
    }

    T1 m_Name;
    T2 m_Age;

};

//1.ָ���������ͣ����ã�
void printPerson1(Person<string>&p)
{
    p.showPerosn();
}

void text01()
{
    Person<string>p("�����",100);
    //p.showPerosn();
    printPerson1(p);
}

//2.����ģ�廯
template<class T1,class T2>
void printPerson2(Person<T1,T2> &p)
{
    p.showPerosn();
    cout << "T1������Ϊ��" << typeid(T2).name() << endl;
    cout << "T2������Ϊ��" << typeid(T2).name() << endl;

}

void text02()
{
    Person<string,int>p("��˽�",90);
    printPerson2(p);
}


//3.������ģ�廯
template<class T>
void printPerson3(T &p)
{
    p.showPerosn();
    cout << "T����������Ϊ��" << typeid(T).name() << endl;
}

void text03()
{
    Person<string,int>p("��ɮ",30);
    printPerson3(p);
}
int main()
{
    //text01();
    //text02();
    text03();
    return 0;
}
