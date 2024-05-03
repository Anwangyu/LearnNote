#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
功能：
查找指定元素是否存在

函数原型：
bool binary_search(iterator beg,iterator end,value);
查找指定的元素 查到返回true否则false
注意 在无序序列中不可用

value 查找的元素


*/

void test01()
{
    vector<int>v;
    for(int i = 0;i <10; i++)
    {
        v.push_back(i);
    }
    //查找是否包含9的元素
    //如果是无序的序列 结果未知

    bool ret = binary_search(v.begin(),v.end(),9);
    if(ret)
    {
        cout << "找到了元素" << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }
}
int main()
{
    test01();

    return 0;
}
