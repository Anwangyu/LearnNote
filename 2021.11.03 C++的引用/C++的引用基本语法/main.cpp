#include <iostream>

using namespace std;

int main()
{
    int a = 10;//����ʱ��ǰ������Ҫһ��;
    // �﷨�� �������� &���� = ԭ��
    int &b = a;
    cout << a << endl;
    cout << b << endl;
   //�����������
    b = 100;
    cout << b << endl;
    cout << a << endl;



    return 0;
}
