#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*

功能描述：
将容器内指定范围的旧元素修改为新元素

函数原型：
replace(iterator beg,iterator end,oldvalue,newvalue);

旧元素和新元素
*/

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }

};

void test01()
{
    vector<int>v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);

    cout << "替换前：" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;

    //将20替换为2000
    replace(v.begin(),v.end(),20,2000);
    cout << "替换后：" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;

}

int main()
{

    test01();

    return 0;
}
