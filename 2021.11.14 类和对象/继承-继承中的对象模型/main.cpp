#include <iostream>

using namespace std;

class Base
{
public:
    int m_A;
protected:
    int m_B;
private:
    int m_C;
};

class Son : public Base
{
public:
    int m_D;
};

//���ÿ�����Ա������ʾ���߲鿴����ģ��
//��ת�̷�  F:
//��ת�ļ�·�� cd ����·����
//�鿴����
// cl/d1 reportSingleClassLayout���� �ļ���

void test01()
{
    //���������зǾ�̬��Ա���Զ��ᱻ����̳���ȥ
    //������˽�г�Ա���� �Ǳ����������� ��  ���Ǳ��̳���ȥ��
    cout << "Size of Son = " << sizeof(Son) << endl;
}
int main()
{
   test01();
    return 0;
}
