#include <iostream>

using namespace std;
//���ã�ͨ�����ص����������ʵ���Լ�����������  ++

//���ص��������

//�Զ�������

class MyInteger
{
public:
    MyInteger()
    {
        m_Num = 0;
    }

private:

    int m_Num;


};
//�������������
ostream& operator <<(ostream& cout , MyInteger myint)
{
    cout << myint.m_Num;
    return cout;
}
void test01()
{
    MyInteger myint;
    cout << myint << endl;


}

int main()
{
    test01();
    return 0;
}
