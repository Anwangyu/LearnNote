#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
copy  ������ָ����Χ��Ԫ�ؿ����� ��һ������
replace  ��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��
replace_if  ������ָ����Χ����������Ԫ���滻Ϊ��Ԫ��
swap  ��������������Ԫ��


��������
������ָ����Χ��Ԫ�ؿ�������һ��������

����ԭ��
copy(iterator beg,iterator end,iterator dest);
��ֵ����Ԫ�أ�����ָ��λ�õ��������Ҳ������ؽ���������λ��
dest Ŀ��������ʼ������

*/
void myPrint(int val)
{
    cout << val << " ";
}


void test01()
{
    vector<int>v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }

    vector<int>v2;
    //Ŀ��������ǰ���ٿռ�
    v2.resize(v1.size());


    copy(v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;

}

int main()
{
    test01();


    return 0;
}
