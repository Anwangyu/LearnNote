#include <iostream>

using namespace std;
//������������ͬ����߸�����

/*������������������
 ͬһ����������
 ����������ͬ
 �����������Ͳ�ͬ ���� ������ͬ ����˳��ͬ */


 void func()
 {
     cout << "func �ĵ��� " <<endl;
 }
 void func(int a)
 {
     cout << "func(int a) �ĵ��� " <<endl;
 }
 void func(double a)
 {
     cout << "func (double) �ĵ��� " <<endl;
 }
 void func(int a, double b )
 {
     cout << "func(int a, double b) �ĵ��� " <<endl;
 }
 void func( double b, int a )
 {
     cout << "func(double b, int a) �ĵ��� " <<endl;
 }


 //�����ķ���ֵ��������Ϊ�������ص�����

int main()
{
    //func();
    //func(10);
    //func(3.14);
      func(10,3.14);



    return 0;
}
