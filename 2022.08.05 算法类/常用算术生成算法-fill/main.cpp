#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

/*
功能描述：
向容器中填充指定的元素

函数原型：

fill(iterator beg,iterator end,value);
向容器中填充元素

value填充的值

利用fill可以将容器内元素填充为指定的值


*/

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v;
    v.resize(10);

    //后期重新填充
    fill(v.begin(),v.end(),100);
    for_each(v.begin(),v.end(),myPrint);


}

int main()
{

    test01();

    return 0;
}
