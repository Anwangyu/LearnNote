#include <iostream>

using namespace std;

//�﷨:����:�̳з�ʽ ���࣬�̳з�ʽ ����2
//��̳п��ܻ�������������ͬ����Ա���֣���Ҫ������������

class Base1
{
public:
    Base1()
    {
        m_A = 100;
    }
    int m_A;//��ʼ������

};

class Base2
{
public:
    Base2()
    {
        m_A = 200;
    }
    int m_A;//��ʼ������
};
//����
//�﷨: class ���� :�̳з�ʽ ����1, �̳з�ʽ ����2...

class Son:public Base1, public Base2
{
public:
    Son()
    {
        m_C = 300;
        m_D = 400;
    }
    int m_C;
    int m_D;
};

void test01()
{
    Son s;

    cout << "size of Son = " << sizeof(s) << endl;
//�������г���ͬ����Ա����Ҫ������������
    cout << "Base1m_A= " << s.Base1::m_A << endl;
    cout << "Base2m_A= " << s.Base2::m_A << endl;
}
int main()
{
    test01();

    return 0;
}
