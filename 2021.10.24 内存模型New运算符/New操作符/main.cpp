#include <iostream>

using namespace std;

// New ��������
 int * func()
 {
     //����������������   New������   ���������͵�����
     int * p = new  int (10) ;
     return p;
 }

 void test01()//�������� ����Ա�����ͷ�  delete �ͷ�����
 {
     int *p = func();
     cout << *p << endl;
     cout << *p << endl;
     cout << *p << endl;
    //delete p ;
    //cout <<*p<<endl;
    //�����ڴ汻�ͷ�  ���ʻ���ɷǷ�����
 }

 void test02()
 {
     //����10���������͵�����
     int *arr = new int[10];
     for(int i = 0;i < 10; i++)
     {
         arr[i] = i +100; //��10�����ݸ�ֵ
     }
      for (int i = 0;i<10; i++)
      {
          cout << arr[i] <<endl;
      }

      //�ͷ������������
      delete []arr;
 }


int main()
{
    test02();
    test01();

    return 0;
}
