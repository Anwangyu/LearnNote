#include <iostream>

using namespace std;

//�̳���ͬ����̬��Ա����

class Base
{
public:

    static int m_A;//����׶η����ڴ�   ���ж�����ͬһ������  �������������ʼ��

    static void func()
    {
        cout << "Base-static void func()" << endl;
    }
};
int Base::m_A = 100;

class Son:public Base
{
public:

    static int m_A;

    static void func()
    {
        cout << "Son-static void func()" << endl;
    }

};
int Son::m_A = 200;

//ͬ����̬��Ա����
void test01()
{
    //ͨ����������������
    cout << "ͨ���������" << endl;
    Son s;
    cout << "Son�µ�m_A=" << s.m_A << endl;
    cout << "Base�µ�m_A=" << s.Base::m_A << endl;

    //ͨ��������������

    cout << "ͨ����������" << endl;
    cout << "Son��m_A" << Son::m_A << endl;
    //��һ��::����ͨ��������ʽ����  �ڶ���::������ʸ�����������
    cout << "Base�µ�m_A=" << Son::Base::m_A << endl;


}

//ͬ����̬��Ա����

void test02()
{
    //ͨ���������
    Son s;
    s.func();
    s.Base::func();

    //ͨ����������

    Son::func();
    Son::Base::func();

    //������ֺ͸���ͬ����̬��Ա������Ҳ�����ظ���������ͬ����Ա����
    //�������ʸ����б�����ͬ����Ա����Ҫ��������

}


int main()
{

    //test01();
    test02();

    return 0;
}
