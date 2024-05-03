#include <iostream>

#include <set>
using namespace std;


/*
功能描述：
对set容器进行查找数据以及统计数据

函数原型：
find(key) 查找key是否存在，若存在，返回该键的元素的迭代器；若不存在，返回set end()
count(key); 统计Key的元素个数

*/

void printSet()
{

}

void test01()
{

    set<int>s1;
    //插入
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30);

    if(pos != s1.end())
    {
        cout << "找到元素" << *pos << endl;
    }
    else
        {
        cout <<"未找到" <<  endl;
        }

    //查找

}

//统计
void test02()
{
        set<int>s2;
    //插入
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);

    //统计30个数

    //对于set而言 统计结果要么是0 或者为1
    int num = s2.count(30);
    cout << "num=" << num << endl;

}

int main()
{
    //test01();
test02();

    return 0;
}
