#include <iostream>

using namespace std;
/* ��������
 ��Ա�������const�����ǳ�Ϊ�������Ϊ������
 �������ڲ������޸ĳ�Ա����
 ��Ա��������ʱ���Ϲؼ��� mutable���ڳ���������Ȼ�����޸�
   ������
  ��������ǰ��const�Ƹö���Ϊ������
  ������ֻ�ܵ��ó�����
*/
class Person
{
public:
    //thisָ��ı��� ��ָ�볣�� ָ���ָ���ǲ������޸ĵ�
    // const (ֵ) Person* const (ָ��)  this;
    Person()
    {

    }
    //�ڳ�Ա�������const�����ε���this ָ����ָ��ָ���ֵҲ�������޸�
    void showPerson() const
    {
        this->m_B = 100;
        //this->m_A = 100;
        //this = NULL�� thisָ�벻�����޸�ָ���ָ���
    }

    void func()
    {
        //int m_A = 100;
    }

    int m_A;
    mutable int m_B;//�����������ʹ�ڳ������У�Ҳ�����޸����ֵ,���Ϲؼ���mutable������const����������ֵ������޸�
};
void test01()
{
    Person p;
    p.showPerson();
}

//������

void test02()
{
    const Person p;//�ڶ���ǰ����const,��Ϊ������
    //��Ҫһ��Ĭ�Ϲ��캯�� ������

    //p.m_A = 100;
    p.m_B = 100;//�����ֵ���ڳ�������Ҳ�����޸�


    //������ֻ�ܵ��ó�����
    p.showPerson();
    //p.func();   �����󲻿��Ե�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����


}

int main()
{
    //test01();
    test02();

    return 0;
}
