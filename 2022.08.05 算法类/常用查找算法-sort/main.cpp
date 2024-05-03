#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/*
�㷨��飺
sort ��������Ԫ�ؽ�������
random_shuffle ϴ�� ָ����Χ�ڵ�Ԫ�������������
merge ����Ԫ�غϲ������洢����һ������
reverse ��תָ����Χ��Ԫ��


����������
��������Ԫ�ؽ�������

����ԭ�ͣ�
sort(iterator beg,iterator end,_Pred);
��ֵ����Ԫ�� �ҵ�����ָ��λ�õĵ����� �Ҳ������ؽ���λ�õ�����λ��

_Predν��

*/
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v;


    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);

    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

    //��Ϊ����
    sort(v.begin(),v.end(),greater<int>());//����greater  �ڽ��������� //ͷ�ļ� function
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;


}


int main()
{
    test01();
    //test02();


    return 0;
}


