#include <iostream>
#include <string>

using namespace std;
//�ŵ�1 �������г�Ա��������Ϊ˽�У������Լ����ƶ�дȨ��
//�ŵ�2 ������дȨ�ޣ����ǿ��Լ�����ݵ���Ч��
class Person
{
public:
    //�������ÿɶ���д
    //��������
    void setName(string name)
    {
        m_Name = name;
    }
    //��ȡ����
    string getName()
    {
        return m_Name;
    }
    //��������
    int getAge()
    {
        //m_Age = 0;//��ʼ��0��
        return m_Age;
    }
    void setAge(int age)
    {
        if(age < 0 || age > 150)
        {
            m_Age = 0;
            cout<<"��������"<<endl;
            return ;
        }
        m_Age = age;
    }

    //�������� ֻд
    void setLover(string lover)
    {
        m_Lover = lover;
    }



private:
    //����
    string m_Name;
    //����
    int m_Age;
    //����
    string m_Lover;
};
int main()
{
    Person p;
    p.setName("����");
    cout <<"����:"<< p.getName() <<endl;
    p.setAge(21);
    cout <<"����:"<< p.getAge() <<endl;

    p.setLover("ʯԭ");
    //cout <<"����Ϊ��"<<p.getLover()<< endl; ���ɷ��� ֻдȨ��

    return 0;
}
