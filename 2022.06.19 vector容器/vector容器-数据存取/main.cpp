#include <iostream>
#include <vector>

using namespace std;
/*
功能描述
对vector中的数据存取操作

函数原型
at(int idx); //返回索引ldix所指的位置
operator[]; //返回索引lidx所指的数据
front();   //返回容器中第一个数据元素
back();    //返回容器中最后一个数据元素


*/



void test01()
{
    vector<int>v1;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }

    //利用[]的形式来访问数组中的元素
    for(int i = 0; i < v1.size();i++)
    {
        cout << v1[i] <<  " ";
    }
    cout << endl;
    //利用成员函数at来访问
    for(int i = 0; i < v1.size();i++)
    {
        cout << v1.at(i) << " ";

    }
    cout << endl;


    //获取第一个元素
    cout << "第一个元素为：" << v1.front() << endl;

    //获取最后一个元素
    cout << "最后一个元素为：" << v1.back() << endl;

}


int main()
{

    test01();

    return 0;
}
