#include <iostream>

using namespace std;
/*1.�������֣��вι�����޲ι���
  2.�����ͷ֣���ͨ����Ϳ�������
  ���ֵ��÷�ʽ��
  ���ŷ�
  ��ʾ��
  ��ʽת����
  */
  //���캯���ķ��༰����
  //����
  // ���ղ�������   �޲ι��죨Ĭ�Ϲ��죩���вι��죨��
  // �������ͷ���   ��ͨ����  ��������
  class Person
  {
  public:
      //���캯��
      Person()
      {
          cout<<"Person���޲ι��캯������"<<endl;
      }
      Person(int a)//����
      {
          age = a;
          cout<<"Person���вι��캯������"<<endl;
      }
      //�������캯��
      Perosn(const Person& p)
      {
          //������������ϵ��������ԣ�������������
          age = p.age;
          cout <<"Person�Ŀ������캯���ĵ���"<< endl;
      }

      ~Person()
      {
          cout<<"Person�����������ĵ���"<<endl;
      }
      int age;

  };
  //����

  void test01()
  {
      //1.���ŷ�
      //Person p1;//Ĭ�Ϲ��캯������
      //Person p2(10);//�вι��캯��
      //Person p3(p2);//�������캯��
      //cout <<"P2������Ϊ��"<< p2.age << endl;
      //cout <<"P3������Ϊ��"<< p2.age << endl;

      //ע������1
      //����Ĭ�Ϲ��캯����ʱ�򣬲�Ҫ��()
      //��Ϊ�������д��룬����������Ϊ��һ������������
      //Person p1();



      //2.��ʾ��
      //Person p1;
      //Person p2 = Person (10);//�����вι���
      //Person p3 = Person (p2);///////////

      //Person (10);//��������  �ص㣺��ǰ�н�����ϵͳ������������������
      //cout <<"aaaaa"<<endl;

      //ע������2
      //��Ҫ���ÿ������캯��  ��ʼ����������  ����������ΪPerson (p3) ===Person p3;      Person (p3);
      //Person(p3);


      //3.��ʽת����
      Person p4 = 10;//�൱��д��Person p4 = Person (10);
      Person p5 = p4;


  }
int main()
{
    test01();

    return 0;
}
