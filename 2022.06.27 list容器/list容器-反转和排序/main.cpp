#include <iostream>
#include <list>


using namespace std;
bool myCompare(int v1, int v2);

/*
��������:
�������е�Ԫ�ط�ת���Լ��������е����ݽ�������

����ԭ�ͣ�
reverse(); //��ת����    reserve()  ||�׻�
sort();//��������
*/

void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    //��ת
    list<int>L1;

    L1.push_back(20);
    L1.push_back(60);
    L1.push_back(10);
    L1.push_back(30);
    L1.push_back(50);
    L1.push_back(40);

    printList(L1);

    //��ת��
    L1.reverse();
    printList(L1);
}

//����
void test02()
{
        list<int>L1;

    L1.push_back(20);
    L1.push_back(60);
    L1.push_back(10);
    L1.push_back(30);
    L1.push_back(50);
    L1.push_back(40);

    printList(L1);
    //����


    //���в�֧��������ʵ��������������������ñ�׼�㷨
    //��֧��������ʵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
    //sort(beg��end)


    L1.sort();//Ĭ��������� ��С����
    cout << "�����" << endl;
    printList(L1);

    L1.sort(myCompare);
    cout << "��������" << endl;
    printList(L1);


}
//��������
bool myCompare(int v1, int v2)
{
    //����  ��һ�������ڵڶ�����
    return v1 > v2;

}



int main()
{
    //test01();
    test02();

    return 0;
}
