#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/*
����������
�����������ָ����Ԫ��

����ԭ�ͣ�

fill(iterator beg,iterator end,value);
�����������Ԫ��

value����ֵ

����fill���Խ�������Ԫ�����Ϊָ����ֵ


*/

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v;
    v.resize(10);

    //�����������
    fill(v.begin(),v.end(),100);
    for_each(v.begin(),v.end(),myPrint);


}

int main()
{

    test01();

    return 0;
}
