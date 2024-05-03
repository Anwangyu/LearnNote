#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

/*
功能描述：
洗牌 指定范围内的元素随机调整次序

函数原型：
random_shuffle(iterator beg,iterator end);
//指定范围内的元素随机调整次序
beg开始迭代器
end结束迭代器

*/


//class myPrint
//{
//public:
//    void operator()
//};

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    srand((unsigned int)time(NULL));//真实 的随机数  随机数种子

    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    //利用洗牌算法 打乱顺序
    random_shuffle(v.begin(),v.end());

    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{

   test01();


    return 0;
}
