#include <iostream>

using namespace std;

//���ã���������Զ�����������   <<
class Person
{
    friend ostream &operator<<(ostream &cout ,Person &p );
    //friend void test01();
public:
    Person(int a, int b )
    {
        m_A = a;
        m_B = b;
    }
private:
    //���ó�Ա�������� ���������  p.operator<<(cout) �� p << cout
    //�������ó�Ա��������<<���������Ϊ�޷�ʵ��cout�����

    int m_A;
    int m_B;
};
//����ȫ�ֺ�������<<�����
ostream &operator<<(ostream &cout ,Person &p )//���� operator << (cout , p) �� cout << p
 //���� ��cout �� ostream ��������� ��׼���������  ȫ��ֻ��һ��
 {
     cout << "m_A=" << p.m_A << "\nm_B=" << p.m_B ;
     return cout;
 }
void test01()
{
    Person p(10,10);
//    p.m_A = 10;
//    p.m_B = 10;

    cout << p << endl;
}
int main()
{
    test01();

    return 0;
}
