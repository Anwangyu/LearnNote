#include <iostream>

using namespace std;
//��ӡ���ݺ���
void showValue (const int & val)
{
    cout << "val=" << val <<endl;
}
int main()
{
    const int& ref = 10;
    cout << ref <<endl;
    //ref = 100;����const���ɲ����޸ĵı���

    //��������
    //ʹ�ã����������βΣ���ֹ�����
    int a = 1000  ;
    showValue(a);
    cout << "a="  << a << endl;
    return 0;
}
