#include <iostream>
#include <vector>

using namespace std;

//功能
//对vector容器的容量和大小操作
//
//函数原型：
//empty();   //判断容器是否为空
//capacity(); //容器的容量
//size();//返回容器中元素的个数
//resize(int num); //重新指定容器的长度为num，若容器变长，则以默认值填充新位置
//                 //如果容器变短，则末尾超出容器长度的元素被删除
//resize(int num,elem);//重新指定容器的长度为num，若容器变长，则以elem值填充新位置
//                   //如果容器变短，则末尾超出容器长度的元素被删除

void printVector(vector<int>&v)
{
    for(vector<int>::iterator it=v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for(int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);


    if(v1.empty()) //为真 代表容器为空
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空" << endl;
        cout << "v1的容量为：" << v1.capacity() << endl;
        cout << "v1的大小为：" << v1.size() << endl;
    }

    //重新指定大小
    v1.resize(15);  //利用重载版本可以指定默认填充值  例如（15，100）
    printVector(v1);//如果重新指定的比原来的长 默认用0来填充后面的数

    //
    v1.resize(5);
    printVector(v1);//若重新指定的短了 后边的自动删除多余的部分

}

int main()
{

    test01();
    return 0;
}


//总结 接口
//判断是否为空   empty
//返回元素个数 size
//返回容器容量 capacity
//重新指定大小 resize
