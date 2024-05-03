#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;



/*
功能描述：
实现关系对比


template<class T> bool eaual_to<T> //等于
template<class T> bool not_equal_to<T> //不等于
template<class T> bool greater<T> //大于
template<class T> bool greater_equal<T> //大于等于
template<class T> bool less<T> //小于
template<class T> bool less_equal //小于等于

*/

class MyCompare
{
public:
    bool operator()(int v1 ,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    //降序
    sort(v.begin(),v.end(),MyCompare());
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "*-------------*" << endl;
    sort(v.begin(),v.end(),greater<int>());//内建函数对象 类似于上写的仿函数  大于的使用  如写从小排序只需要改变一下即可
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;


}

int main()
{
    test01();

    return 0;
}
