#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

/*
���
����bool���͵ķº�����Ϊν��
���operator()����һ����������ô��һԪν��
���operator()����������������ô�ж�Ԫν��
*/

struct GreaterFive
{
    bool operator()(int val)
    {
        return val > 5;
    }
};

void test01()
{
    vector<int>v;
    for(int i = 0; i < 10;i++)
    {
        v.push_back(i);
    }

    //������������û�д���5������
    vector<int>::iterator  it = find_if(v.begin(),v.end(),GreaterFive());//�����ĺ�������
    if(it == v.end())
    {
        cout << "δ�ҵ�" <<endl;
    }
    else
    {
        cout << "�ҵ�" << *it << endl;
    }
}

int main()
{
    test01();

    return 0;
}
