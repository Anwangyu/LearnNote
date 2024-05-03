#include <iostream>

#include <vector>
#include <algorithm>

using namespace std;
/*
功能描述；:
呼唤两个容器的元素  同种类型的容器

函数原型：
swap(container c1,container c2);
互换两个容器的元素
c1容器1
c2容器2

*/

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v1;
    vector<int>v2;

    for(int i =0;i<10;i++)
    {
        v1.push_back(i);
        v2.push_back(i+100);
    }

    cout << "交换前：" << endl;
    for_each(v1.begin(),v1.end(),myPrint);
    cout << endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;

    cout << "-------------------" << endl;
    cout << "交换后：" << endl;
    swap(v1,v2);
    for_each(v1.begin(),v1.end(),myPrint);
    cout << endl;
    for_each(v2.begin(),v2.end(),myPrint);
    cout << endl;

}


int main()
{
    test01();


    return 0;
}
