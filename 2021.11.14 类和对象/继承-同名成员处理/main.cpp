#include <iostream>

using namespace std;

//��������ͬ����Ա ֱ�ӷ��ʼ���
//���ʸ���ͬ����Ա ��Ҫ��������

class Base
{
public:
    Base()
    {
        m_A = 100;
    }

    void func()
    {
        cout << "Base��func()�ĵ���" << endl;
    }

    void func(int a)//����
    {
        cout << "Base��func(int a)�ĵ���" << endl;
    }
    int m_A;//����
};

class Son :public Base
{
public:
    Son()
    {
        m_A = 200;
    }

    void func()
    {
        cout << "Son��func()�ĵ���" << endl;
    }

    int m_A;
};
//ͬ�����Դ���
void test01()
{
    Son s;
    cout << "Son�� m_A =" << s.m_A << endl;
    //���ͨ��������� ���ʵ�������ͬ����Ա  ��Ҫ��������
    cout << "Base�� m_A =" << s.Base::m_A << endl;//���븸���������
}

//ͬ����Ա��������
void test02()
{
    Son s;
    s.func();//ֱ�ӵ���  �����������е�ͬ����Ա

    //��ε��õ�������ͬ����Ա����
    s.Base::func();
    //��������г��ֺ͸���ͬ���ĳ�Ա�����������ͬ����Ա�����ص�����������ͬ����Ա����
    //�������ʵ������б����ص�ͬ����Ա��������Ҫ��������

    s.Base::func(100);
}
//����������ֱ�ӷ��ʵ�����ͬ����Ա
//����������������Է��ʵ�����ͬ����Ա
//�������븸��ӵ��ͬ���ĳ�Ա��������������ظ�����ͬ����Ա����������������Է��ʵ�������ͬ������
int main()
{
    //test01();
    test02();

    return 0;
}
