#include <iostream>
#include <list>

using namespace std;


/*
����������
��List���������ݽ��д�ȡ

����ԭ�ͣ�
front();//���ص�һ��Ԫ��
back(); //�������һ��Ԫ��

*/


void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it != L.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //��������[]��ʽ����List�����е�Ԫ�� L1[0]
    //��������at��ʽ����  L1.at(0)

    //list������һ�������������������Կռ�洢���ݣ�������Ҳ�ǲ�֧���������

    cout << " ��һ��Ԫ��Ϊ��" << L1.front() << endl;
    cout << " ���һ��Ԫ��Ϊ��" << L1.back() << endl;

}
int main()
{
    test01();

    return 0;
}
