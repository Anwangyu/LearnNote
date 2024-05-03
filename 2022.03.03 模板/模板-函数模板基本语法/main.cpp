#include <iostream>

using namespace std;

//C++��һ�ֱ��˼���Ϊ���ͱ�̣���Ҫ���õļ�������ģ��
//C++�ṩ����ģ����ƣ�����ģ�����ģ��

//����ģ������ã�
//����һ��ͨ�ú������亯������ֵ���ͺ��β����Ϳ��Բ������ƶ�����һ�����������������

//�﷨�� template<typename T>
//������������

//���ͣ�
// template---��������ģ��
// typename---���������ķ�����һ���������ͣ�������class����
// T---ͨ�õ��������ͣ����ƿ����滻��ͨ��Ϊ��д��ĸ

//ģ���Ŀ����Ϊ����߸����ԣ������Ͳ�����

//����ģ��--------------
//�������ͽ�������
void swapInt(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

//�������������ͺ���
void swapDouble(double &a,double &b)
{
    double temp = a;
    a = b;
    b = temp;
}

//ģ��
template<typename T>//����һ��ģ�壬��֪��������������н����ŵ�T��Ҫ����T��ͨ����������
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

void text01()
{
    int a = 10;
    int b = 20;

//    swapInt(a,b);
//���ú���ģ�彻��
// ���ַ�ʽ��ʹ�ú���ģ��
//1.�Զ������Ƶ�
    //mySwap(a,b);

//2.��ʾָ������
    mySwap<int>(a,b);

    cout << "a=" << a << endl;
    cout << "b=" << b << endl;

    double c = 1.1;
    double d = 2.2;
    swapDouble(c,d);
    cout << "c=" << c << endl;
    cout << "d=" << d << endl;


}

int main()
{
    text01();

    return 0;
}
