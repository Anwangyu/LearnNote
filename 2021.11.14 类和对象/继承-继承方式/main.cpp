#include <iostream>

using namespace std;
//�̳��﷨:class ���� : �̳з�ʽ  ����
/*�̳з�ʽ����
 1.�����̳�
 2.�����̳�
 3.˽�м̳�
*/

//�����̳�
class Base1
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son1 : public Base1//
{
public:
    void func()
    {
        m_A = 10;//�����й���Ȩ�� ��Ա����������Ȼ�ǹ���Ȩ��
        m_B = 10;//�����б���Ȩ�޵ĳ�Ա������������Ȼ�Ǳ���Ȩ��
//        m_C = 10;������˽�е�Ȩ�� �������в����Է���

    }
};
void test01()
{
    Son1 s1;
    s1.m_A = 100;
//    s1.m_B = 100;  ����Ȩ������  ���ڿ��Է��� ���ⲻ���Է���
}
//�����̳�

class Base2
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son2 : protected Base2
{
public:
    void func()
    {
        m_A = 100; //�����еĹ�����Ա�������б�Ϊ����Ȩ��
        m_B = 100; //�����б�����Ա  �������в���
        //m_C = 100; �����е�˽�г�Ա  ������ʲ���
    }
} ;
void test02()
{
    Son2 s1;
    //s1.m_A = 100; //��Son2��  ��Ϊ����Ȩ��  ������ʲ���
    // m_Bͬ��
}

class Base3
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son3 : private Base3
{
public:
    void func()
    {
        m_A = 100; //�����й�����Ա �������б�Ϊ˽�г�Ա
        m_B = 100; //�����б�����Ա �������б�Ϊ ˽�г�Ա
        //m_C = 100; ������˽�г�Ա������ʲ���
    }
};

void test03()
{
    //Son3 s1;
    //s3.m_A = 100;//��Son3��  ��Ϊ˽�г�Ա ������ʲ���
    //s3.m_B = 100;//��Son3��  ��Ϊ˽�г�Ա ������ʲ���
}
class GrandSon3 : public Son3
{
public:
    void func()
    {
//        m_A = 100;//����Son3�� m_A��Ϊ ˽�� ��ʹ�Ƕ���Ҳ�޷�����
//        m_B = 100;
    }
};


int main()
{

    return 0;
}
