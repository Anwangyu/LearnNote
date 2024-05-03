#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
/*
����������
���������ϵĲ���

����ԭ�ͣ�
set_union(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);

���������ϵĲ���
ע�⣺�������ϱ�������������


*/

void myPrint(int val)
{
    cout << val << " ";
}
void test01()
{
    vector<int>v1;
    vector<int>v2;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }

    vector<int>vTarget;
    //Ŀ���������ٿռ�
    //��������������������û�н�����������������������size���
    vTarget.resize(v1.size()+v2.size());

    vector<int>::iterator itEnd = set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);


    }

int main()
{
   test01();
    return 0;
}
