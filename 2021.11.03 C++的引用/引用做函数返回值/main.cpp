#include <iostream>

using namespace std;
//�����ĵ��ÿ�����Ϊ��ֵ
int& test02()
{
    static int a = 10;//��̬�����������ȫ������
    //ȫ�����ϵ������ڳ��������ϵͳ�Զ��ͷš�
    return a;
}

int main()
{
    int &ref2 = test02();
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    ref2 = 100;//����
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    test02() = 200;//��Ϊ��ֵ����//ԭ��
    cout << "ref2=" << ref2 << endl;
    cout << "ref2=" << ref2 << endl;
    return 0;
}
