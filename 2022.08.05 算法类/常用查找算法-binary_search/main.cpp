#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
���ܣ�
����ָ��Ԫ���Ƿ����

����ԭ�ͣ�
bool binary_search(iterator beg,iterator end,value);
����ָ����Ԫ�� �鵽����true����false
ע�� �����������в�����

value ���ҵ�Ԫ��


*/

void test01()
{
    vector<int>v;
    for(int i = 0;i <10; i++)
    {
        v.push_back(i);
    }
    //�����Ƿ����9��Ԫ��
    //�������������� ���δ֪

    bool ret = binary_search(v.begin(),v.end(),9);
    if(ret)
    {
        cout << "�ҵ���Ԫ��" << endl;
    }
    else
    {
        cout << "δ�ҵ�" << endl;
    }
}
int main()
{
    test01();

    return 0;
}
