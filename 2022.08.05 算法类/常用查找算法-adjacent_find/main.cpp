#include <iostream>
#include <algorithm>//�㷨ͷ�ļ�

#include <vector>

using namespace std;


/*
����������
���������ظ�Ԫ��

����ԭ��:
adjacent_find(iterator beg,iterator end);
���������ظ�Ԫ�أ���������Ԫ�صĵ�һ��λ�õĵ�����

*/

void test01()
{
    vector<int>v;

    v.push_back(0);
    v.push_back(2);
    v.push_back(3);
    v.push_back(0);
    v.push_back(3);
    v.push_back(4);
    v.push_back(3);
    v.push_back(3);
    v.push_back(1);

    vector<int>::iterator pos = adjacent_find(v.begin(),v.end());//posλ�ý���
    if(pos == v.end())
    {
        cout << "δ�ҵ������ظ�Ԫ��" << endl;
    }
    else
    {
        cout << "�ҵ������ظ�Ԫ�� " << *pos << endl;
    }

}

int main()
{
    test01();


    return 0;
}
