#include <iostream>
//�������ؾ�����Ҫ��Ĭ�ϲ������������ע�����
using namespace std;
//������Ϊ���ص�����
//����������������Ĭ�ϲ���
void func(int &a)
{
    cout << "func(int &a)����" << endl;
}
void func(const int &a)
{
    cout << "func(const int &a)����" << endl;
}
//2.������������Ĭ�ϲ���
void func2(int a)
{
    cout << "func2(int a)�ĵ���" <<endl;
}
void func2(int a, int b)
{
    cout << "func2(int a, int b)�ĵ���" <<endl;
}

int main()
{
//    int a = 10;
//    func(a);
    //  func(10);
       func2(10);

    return 0;
}
