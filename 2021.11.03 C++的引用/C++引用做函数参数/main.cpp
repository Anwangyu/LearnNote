#include <iostream>

using namespace std;
//������ ��������ʱ�������������õļ������β�����ʵ��
//���Լ�ָ���޸�ʵ��

//��������
//ֵ����
void mySwap01(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
    cout << "Swapa=" << a << endl;
    cout << "Swapb=" <<b<< endl;
}
//��ַ����
void mySwap02(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
//���ô���
void mySwap03(int &a, int &b)
{
    int temp=a;
    a=b;
    b=temp;
}

int main()
{
    int a = 10;
    int b = 20;
    //mySwap01(a,b);
    //mySwap02(&a,&b); //�β�����ʵ��
   mySwap03(a,b);
    cout << "a=" << a << endl;
    cout << "b=" <<b<< endl;





    return 0;
}
