#include <iostream>
#include <set>

using namespace std;

/*
简介：所有元素都会在插入时自动被排序

本质：set/multiset属于关联式容器，底层结构是用二叉树实现

set和multiset的区别
set不允许容器中有重复的元素
multiset允许容器中有重复的元素

功能:
创建set容器以及赋值

构造：
set<T>st;  默认构造函数
set(const set &st);  拷贝构造函数

赋值：
set& operator=(const set &st) 重载等号操作符
*/
void printSet(set<int>&s)
{
    for(set<int>::iterator it = s.begin();it != s.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s1;
    //插入数据只有insert
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    s1.insert(5);
    //遍历容器
    //特点：所有元素插入的时候 自动排序
    //      不允许重复元素  即使插入也无显示
    printSet(s1);

    //拷贝构造
    set<int>s2(s1);
    printSet(s2);

    //赋值
    set<int>s3;
    s3 = s2;
    printSet(s3);


}
int main()
{
    test01();

    return 0;
}
