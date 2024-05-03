#include <iostream>

#include <map>

using namespace std;


/*
功能描述：
对Map容器进行查找数据以及统计数据

函数原型：
find(key) //查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set.end();
count(key); //统计key的元素个数

*/

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin(); it != m.end();it++)
    {
        cout << "key = " << it->first << "value =" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);

    if(pos != m.end())
    {
        cout << "查到了元素key ="  << (*pos).first << "value=" << pos->second << endl;
    }
    else
    {
        cout << "未找到" << endl;
    }

    //统计  map不允许重复  countt统计而言  结果要么是0要么是1
    // multimap的count 统计可能大于1
    int num = m.count(3);
    cout << "num=" << num << endl;

}


int main()
{
    test01();



    return 0;
}
