#include <iostream>
#include <deque>

//��׼�㷨ͷ�ļ�******
#include <algorithm>

using namespace std;
/*
����������
�����㷨ʵ�ֶ�deque������������
����ԭ�ͣ�
sort(iterator beg,iterator end) //��beg��end������Ԫ�ؽ�������


*/
void printDeque(const deque<int>&d)
{
    for(deque<int>::const_iterator it = d.begin();it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;

}

void test01()
{
    deque<int>d;
    d.push_back(10);
    d.push_back(20);
    d.push_back(30);
    d.push_front(100);
    d.push_front(200);
    d.push_front(300);
    printDeque(d);

    //����ð������ ѡ������

    //����  //Ĭ������ ����  ��С����
    //����֧��������ʵĵ�����������������������sort�㷨ֱ�Ӷ����������
    //vector����Ҳ�������� sort��������
    sort(d.begin(),d.end());
    cout << "�����" <<  endl;
    printDeque(d);
}

int main()
{
    test01();

    return 0;
}
