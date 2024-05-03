#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

/*
�㷨���
set_intersection   �����������Ľ���  ����������Ҫ����������
set_union     �����������Ĳ���
set_difference  �����������Ĳ


��������
�����������Ľ���

����ԭ�ͣ�
set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)

���������ϵĽ���


*/

void myPrint(int val)
{
    cout << val << " ";
}


void test01()
{
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }


    vector<int>vTarget;
    //Ŀ��������Ҫ��ǰ���ٿռ�
    //������� ����������С����

//���ٿռ�ȡС������size����

    vTarget.resize(min(v1.size(),v2.size()));//ȡСֵ

    //��ȡ����
    vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());

    for_each(vTarget.begin(),itEnd,myPrint);//�����ϱ߽����ĵ�����
    cout << endl;


}


int main()
{
    test01();



    return 0;
}
