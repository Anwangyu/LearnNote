#include <iostream>
#include <vector>


#include <numeric>
using namespace std;

/*
���������㷨����С���㷨��ʹ��ʱ������ͷ�ļ�Ϊ#include<numeric>

�㷨��飺
accumulate  ��������Ԫ���ۼ��ܺ�
fill        �����������Ԫ��

����������
��������������Ԫ���ۼ��ܺ�

����ԭ�ͣ�
accumulate(iterator beg,iterator end,value);
��������Ԫ���ۼ��ܺ�

*/

void test01()
{
    vector<int>v;
    for(int i = 0; i <= 100;i++)
    {
        v.push_back(i);
    }
//����3  ����ʼ�ۼ�ֵ  ��ߵ�0����
    int total = accumulate(v.begin(),v.end(),0);

    cout << "total=" << total << endl;
}

int main()
{

    test01();

    return 0;
}
