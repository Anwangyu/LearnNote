#include <iostream>
#include <set>

using namespace std;

/*
功能：
统计set容器大小以及交换set容器

函数原型：
size(); //返回容器中元素的数目
empty(); //判断容器是否为空
swap(st); //交换两个集合容器
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

    //插入数据
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    printSet(s1);

    //判断是否为空
    if(s1.empty())
    {
        cout << "容器为空" << endl;
    }
    else
    {
        cout << "容器不为空"  << endl;
        cout << "s1的大小：" << s1.size() << endl;
    }



}

void test02()
{
    set<int>s1;

    //插入数据
    s1.insert(10);
    s1.insert(30);
    s1.insert(20);
    s1.insert(40);

    set<int>s2;

    //插入数据
    s2.insert(100);
    s2.insert(300);
    s2.insert(200);
    s2.insert(400);

    cout << "交换前：" << endl;
    printSet(s1);
    printSet(s2);



    cout << "交换后：" << endl;
    s1.swap(s2);
    printSet(s1);
    printSet(s2);


}

int main()
{
//    test01();
    test02();

    return 0;
}
