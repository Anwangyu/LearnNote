#include <iostream>

using namespace std;
//�� �����ʱ�����԰����Ժ���Ϊ���ڲ�ͬ��Ȩ���£����Կ���
//����Ȩ��������
/*1.public     ����Ȩ�ޣ����ڿ��Է���  ��������Է���  ��
  2.protected  ����Ȩ�ޣ����ڿ��Է���  �����ⲻ���Է��ʣ�
  3.private    ˽��Ȩ�ޣ����ڿ��Է���  �����ⲻ���Է��ʣ�
*/

class Person
{
    public://����Ȩ��
    string m_Name;

protected://����Ȩ��
    string m_Car;
private://˽��Ȩ��
    string m_Password;


public:
    void func()
    {
        m_Name = "����";
        m_Car  = "������";
        m_Password = 123456 ;
    }
};

int main()
{
    Person p1;//�������
    p1.m_Name = "����";
    //����Ȩ�� �����޷�����p1.m_Car
    //˽��Ȩ�����������޷�����p1.m_Password
    p1.func();
    return 0;
}
