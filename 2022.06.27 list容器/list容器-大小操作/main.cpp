#include <iostream>
#include <list>

using namespace std;

/*
����������
��list�����Ĵ�С���в���

����ԭ�ͣ�
size(); //���������е�Ԫ�ظ���
empty(); //�ж������Ƿ�Ϊ��
resize(num);//����ָ�������ĳ���Ϊnum,�������䳤������Ĭ��ֵ����µ�λ��
            //���������̣���ĩβ�����������ȵ�Ԫ��ɾ��
resize(num,elem); //����ָ�������ĳ���Ϊnum���������䳤������elemֵ�����λ��
                  //���������̣���ĩβ�����������ȵ�Ԫ�ر�ɾ��

*/

void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it !=L.end();it++)
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


    printList(L1);

    //�ж������Ƿ�Ϊkon
    if(L1.empty())
    {
        cout << "L1Ϊ��" << endl;
    }
    else
    {
        cout << "L1��Ϊ��" << endl;
        cout << "L1��Ԫ�ظ���Ϊ��" << L1.size() <<endl;

    }
    //����ָ����С
    L1.resize(10,1000);
    printList(L1);

    L1.resize(2);
    printList(L1);

}

int main()
{
    test01();


    return 0;
}
