#include <iostream>

#include <string>

using namespace std;

//��ģ���뺯��ģ��������Ҫ������
 //1.��ģ��û���Զ������Ƶ���ʹ�÷�ʽ
 //2.��ģ����ģ������б��п�����Ĭ�ϲ���

//��ģ��
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
    //��������Perosn p("�����",1000);  �޷����Զ������Ƶ�

    Person<string,int>p("�����",1000);//ֻ������ʾָ������

    p.showPerson();

}

//2.����ģ�岻����  ���п�����
void text02()
{
    Person<string>p("��˽�",999);//��ģ���п���ָ������
    p.showPerson();

}


int main()
{
    text01();
    text02();

    return 0;
}
