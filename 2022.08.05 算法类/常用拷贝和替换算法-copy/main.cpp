#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*
copy  容器内指定范围的元素拷贝到 另一容器中
replace  将容器内指定范围的旧元素修改为新元素
replace_if  容器内指定范围满足条件的元素替换为新元素
swap  互换两个容器的元素


功能描述
容器内指定范围的元素拷贝到另一个容器中

函数原型
copy(iterator beg,iterator end,iterator dest);
按值查找元素，返回指定位置迭代器，找不到返回结束迭代器位置
dest 目标容器起始迭代器

*/
void myPrint(int val)
{
    cout << val << " ";
}


void test01()
{
    vector<int>v1;
    for(int i = 0;i<10;i++)
    {
        v1.push_back(i);
    }

    vector<int>v2;
    //目标容器提前开辟空间
    v2.resize(v1.size());


    copy(v1.begin(),v1.end(),v2.begin());
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;

}

int main()
{
    test01();


    return 0;
}
