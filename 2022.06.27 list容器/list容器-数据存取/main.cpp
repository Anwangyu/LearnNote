#include <iostream>
#include <list>

using namespace std;


/*
功能描述：
对List容器中数据进行存取

函数原型：
front();//返回第一个元素
back(); //返回最后一个元素

*/


void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it != L.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int>L1;
    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    //不可以用[]方式访问List容器中的元素 L1[0]
    //不可以用at方式访问  L1.at(0)

    //list本质是一个链表，不是用连续线性空间存储数据，迭代器也是不支持随机访问

    cout << " 第一个元素为：" << L1.front() << endl;
    cout << " 最后一个元素为：" << L1.back() << endl;

}
int main()
{
    test01();

    return 0;
}
