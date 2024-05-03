#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
����������
������������һ��������

����ԭ�ͣ�
transform(iterator beg1, iterator end1,iterator beg2,_func);
//beg1 Դ������ʼ������
end1 Դ��������������
beg2Ŀ��������ʼ������
_func �������ߺ�������


*/

class Transform
{
public:
    int operator()(int v)
    {
        return v;
    }
};

class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};


void test01()
{
    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    vector<int>vTarget;//Ŀ������
    //Ҫ���ٿռ�
    vTarget.resize(v.size());

    transform(v.begin(),v.end(),vTarget.begin(),Transform());

    for_each(vTarget.begin(),vTarget.end(),MyPrint());
    cout << endl;
}



int main()
{
    test01();
    return 0;
}
