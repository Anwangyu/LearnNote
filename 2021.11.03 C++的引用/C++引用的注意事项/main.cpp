#include <iostream>

using namespace std;

//����ǰ�����ʼ��
//����һ����ʼ���󣬲����Ըı䣨һ���ַ�һ��ʹ�������ø��Ĺ������󲻿����ٴθ��ı�����


int main()
{
    int a = 10;
    int &b = a;

    // int &b; ���õĴ�������ʼ��
    int c = 20;
    //b = c;�Ѿ����Ĺ�b�ı��� b�����ٸ�����
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
