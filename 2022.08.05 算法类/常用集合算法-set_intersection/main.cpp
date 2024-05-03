#include <iostream>
#include <vector>

#include <algorithm>

using namespace std;

/*
算法简介
set_intersection   求两个容器的交集  两个集合需要是有序序列
set_union     求两个容器的并集
set_difference  求两个容器的差集


功能描述
求两个容器的交集

函数原型：
set_intersection(iterator beg1,iterator end1,iterator beg2,iterator end2,iterator dest)

求两个集合的交集


*/

void myPrint(int val)
{
    cout << val << " ";
}


void test01()
{
    vector<int>v1;
    vector<int>v2;
    for(int i=0;i < 10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+5);
    }


    vector<int>vTarget;
    //目标容器需要提前开辟空间
    //特殊情况 大容器包含小容器

//开辟空间取小容器的size即可

    vTarget.resize(min(v1.size(),v2.size()));//取小值

    //获取交集
    vector<int>::iterator itEnd = set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vTarget.begin());

    for_each(vTarget.begin(),itEnd,myPrint);//利用上边结束的迭代器
    cout << endl;


}


int main()
{
    test01();



    return 0;
}
