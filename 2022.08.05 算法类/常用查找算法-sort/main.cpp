#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

/*
算法简介：
sort 对容器内元素进行排序
random_shuffle 洗牌 指定范围内的元素随机调整次序
merge 容器元素合并，并存储到另一容器中
reverse 反转指定范围的元素


功能描述：
对容器内元素进行排序

函数原型：
sort(iterator beg,iterator end,_Pred);
按值查找元素 找到返回指定位置的迭代器 找不到返回结束位置迭代器位置

_Pred谓词

*/
void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v;


    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);

    sort(v.begin(),v.end());
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;

    //改为降序
    sort(v.begin(),v.end(),greater<int>());//大于greater  内建函数对象 //头文件 function
    for_each(v.begin(),v.end(),myPrint);
    cout << endl;


}


int main()
{
    test01();
    //test02();


    return 0;
}


