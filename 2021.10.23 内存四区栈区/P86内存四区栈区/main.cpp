#include <iostream>
#include <stdlib.h>
//ջ����Ҫע����� ��Ҫ���ؾֲ������ĵ�ַ   ջ���������ɱ����������ٺ��ͷ�

using namespace std;
int *func()//�������β� �β�Ҳ�����ջ�����ڣ������������������+���ż���
{
    int a = 10;//�ֲ����� �����ջ����ջ���������ں���ִ������Զ��ͷ�
    return & a; //���ؾֲ������ĵ�ַ
}



int main()
{
    //����func �����ķ���ֵ
   int *p = func();
   cout << *p << endl; //��һ��ִ�� ��ϵͳ�ı���

   cout << *p << endl;//�ڶ��β��ٱ���
   system("pause");
    return 0;
}
