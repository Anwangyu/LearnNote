#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

using namespace std;


/*
�㷨���
find  ����Ԫ��
find_if ������������Ԫ��
adjacent_find ���������ظ�Ԫ��
binary_search ��Ԫ���ҷ�
count ͳ��Ԫ�ظ���
count_if ������ͳ��Ԫ�ظ���


����������
����ָ��Ԫ�أ��ҵ�����ָ��Ԫ�صĵ��������Ҳ������ؽ���������end()

����ԭ��
find(iterator beg,iterator end,value);
��ֵ����Ԫ�أ��ҵ�����ָ��λ�õ��������Ҳ������ؽ�������λ�õ�����
beg��ʼ������
end����������
value���ҵ�Ԫ��

*/

//����������������
void test01()
{
    vector<int>v;
    for(int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    //���������� �Ƿ���5���Ԫ��
    vector<int>::iterator it = find(v.begin(),v.end(),50);//�����ҵ���� ���᷵��һ��������
    if(it == v.end())
    {
        cout << "δ�ҵ�" << endl;
    }
    else
    {
        cout << "�ҵ�" << *it << endl;
    }
}
class Person
{
public:
    Person(string name,int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    //����== �ײ�find֪����ζԱ�Person��������
    bool operator == (const Person & p)
    {
        if(this->m_Name == p.m_Name && this->m_Age == p.m_Age)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    string m_Name;
    int m_Age;
};
//�����Զ�����������

void test02()
{
    vector<Person>v;

    //��������
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",30);
    Person p4("ddd",40);

    //����������
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);

    Person pp("bbb",20);

    vector<Person>::iterator it = find(v.begin(),v.end(),pp);
    if(it == v.end())
    {
        cout << "û���ҵ�" << endl;
    }
    else
    {
        cout << "�ҵ�Ԫ�� ������" << it->m_Name << "  ����:" << it->m_Age <<endl;
    }

}

int main()
{

    test01();

    test02();

    return 0;
}
