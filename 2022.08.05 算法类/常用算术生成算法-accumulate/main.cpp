#include <iostream>
#include <vector>


#include <numeric>
using namespace std;

/*
算术生成算法属于小型算法，使用时包含的头文件为#include<numeric>

算法简介：
accumulate  计算容器元素累计总和
fill        向容器中添加元素

功能描述：
计算区间内容器元素累计总和

函数原型：
accumulate(iterator beg,iterator end,value);
计算容器元素累计总和

*/

void test01()
{
    vector<int>v;
    for(int i = 0; i <= 100;i++)
    {
        v.push_back(i);
    }
//参数3  是起始累加值  后边的0即是
    int total = accumulate(v.begin(),v.end(),0);

    cout << "total=" << total << endl;
}

int main()
{

    test01();

    return 0;
}
