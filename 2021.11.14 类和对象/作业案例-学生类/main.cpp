#include <iostream>
#include <string>//ʹ��string������ʹ�õ�ͷ�ļ�
using namespace std;
//��
//���е����Ժ���Ϊ������ͳһ��Ϊ ��Ա
//���� ��Ա���� ��Ա���� ����˵�� �е�
//��Ϊ ��Ա���� ��Ա����  ָ���е���Ϊ
//����
class Student
{
    public:

    string m_Name;
    //��ȡһ��ѧ��������
    int m_Id;//ѧ��

    void showStudent()
    {
        cout << " ������" << m_Name << " ѧ�ţ�" << m_Id << endl;
    }
    //��������ֵ
   void setName(string name)
   {
    m_Name = name;
   }
   //��ѧ�Ÿ�ֵ
   void setId(int id)
   {
       m_Id = id;
   }

};

int main()
{
    //���������ѧ��
    //ʵ����
    Student s1;
    //��S1����������Ը�ֵ����
    s1.setName("����");
    s1.setId(1) ;

    //չʾ��Ϣ ���ú���
    s1.showStudent();
    //ѧ������
    Student s2;
    s2.m_Name = "����";
    s2.m_Id = 2;
    s2.showStudent();
    return 0;
}
