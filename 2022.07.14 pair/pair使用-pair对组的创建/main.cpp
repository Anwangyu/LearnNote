#include <iostream>
#include <string>
using namespace std;

/*
���ܣ�
�ɶԳ��ֵ����ݣ����ö�����Է�����������

���ִ�����ʽ��
pair<type,type>p(value1,value2);
pair<type,type>p = make_pair(value1,value2);
*/

void test01()
{
    pair<string,int>p(string("Tom"),20);
    cout << "������" << p.first << "����:" << p.second << endl;

    //�ڶ���
    pair<string,int>p2= make_pair("Jerry",30);
    cout << "������" << p2.first << "����:" << p2.second << endl;
}

int main()
{


   test01();

    return 0;
}
