#include <iostream>

#include <string>
using namespace std;


//��ģ������ã�
 //����һ��ͨ���࣬���еĳ�Ա �������Ϳ��Բ������ƶ�����һ�����������������

//�﷨

 //template<typename T>
 //��
 //����ģ�����ģ���������һ������template�¸����Ǻ���һ����������

 //��ģ��
 template<class NameType,class AgeType>
 class Person
 {
 public:
     Person(NameType name,AgeType age)
     {
         this->m_Name = name;
         this->m_Age = age;
     }

void showPerson()
{
     cout << "Name:" << this->m_Name << "\nAge:" << this->m_Age << endl;
}

     NameType m_Name;
     AgeType m_Age;


 };

 void text01()
 {
     Person <string,int> p1("�����",999);
     p1.showPerson();
 }



int main()
{
    text01();


    return 0;
}
