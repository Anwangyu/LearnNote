#include <iostream>

using namespace std;


/*���ù�������:
1.�������ģ�����ͨ����������ʵ�֣����ȵ�����ͨ����
2.����ͨ����ģ������б���ǿ�Ƶ��ú���ģ��
3.����ģ��Ҳ���Է�������
4.�������ģ����Բ������õ�ƥ�䣬���ȵ��ú���ģ��
*/


//��ͨ�����뺯��ģ����ù���
void myPrint(int a, int b)
//��������  û��ʵ��

{
    cout << "���õ���ͨ����" << endl;
}


template<class T>
void myPrint(T a, T b)
{
    cout << "���õ�ģ��" << endl;
}

template<class T>
void myPrint(T a, T b,T c)
{
    cout << "�������ص�ģ��" << endl;
}

void text01()
{
    int a = 10;
    int b = 20;

    //myPrint(a,b);//���ȵ�����ͨ����

    //ͨ����ģ��Ĳ����б� ǿ�Ƶ��ú���ģ��
    //myPrint<>(a,b);
    //myPrint(a,b,100);

    //�������ģ��������õ�ƥ�� ���ȵ��ú���ģ��
    char c1 = 'a';
    char c2 = 'b';

    myPrint(c1,c2);


}

int main()
{
    text01();


    return 0;
}
