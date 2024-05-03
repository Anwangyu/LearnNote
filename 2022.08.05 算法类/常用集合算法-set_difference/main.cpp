#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
/*
����������
���������ϵĲ  (���ǽ����Ĳ��� v1��v2ǰ��������ͬ�Ŀ���)

����ԭ�ͣ�
set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
���������ϵĲ
ע���������ϱ�������������

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
    //����������  ��������û�н��� ȡ���������д��size��ΪĿ�������Ŀ��ٿռ�
    vTarget.resize(max(v1.size(),v2.size()));

    cout << "v1��v2�ĲΪ��" << endl;

    vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;


    cout << "v2��v1�ĲΪ��" << endl;

    itEnd = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
}

int main()
{
    test01();


    return 0;
}
