#include <iostream>
#include <vector>
#include <algorithm>


using namespace std;
/*
功能描述：
求两个集合的差集  (不是交集的部分 v1和v2前后两个不同的看法)

函数原型：
set_difference(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest);
求两个集合的差集
注意两个集合必须是有序序列

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
    //目标容器开辟空间
    //最特殊的情况  两个容器没有交集 取两个容器中大的size作为目标容器的开辟空间
    vTarget.resize(max(v1.size(),v2.size()));

    cout << "v1和v2的差集为：" << endl;

    vector<int>::iterator itEnd = set_difference(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
    cout << endl;


    cout << "v2和v1的差集为：" << endl;

    itEnd = set_difference(v2.begin(),v2.end(),v1.begin(),v1.end(),vTarget.begin());
    for_each(vTarget.begin(),itEnd,myPrint);
}

int main()
{
    test01();


    return 0;
}
