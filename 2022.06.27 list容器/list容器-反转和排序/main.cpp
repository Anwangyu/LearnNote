#include <iostream>
#include <list>


using namespace std;
bool myCompare(int v1, int v2);

/*
功能描述:
将容器中的元素反转，以及将容器中的数据进行排序

函数原型：
reverse(); //反转链表    reserve()  ||易混
sort();//链表排序
*/

void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    //反转
    list<int>L1;

    L1.push_back(20);
    L1.push_back(60);
    L1.push_back(10);
    L1.push_back(30);
    L1.push_back(50);
    L1.push_back(40);

    printList(L1);

    //反转后
    L1.reverse();
    printList(L1);
}

//排序
void test02()
{
        list<int>L1;

    L1.push_back(20);
    L1.push_back(60);
    L1.push_back(10);
    L1.push_back(30);
    L1.push_back(50);
    L1.push_back(40);

    printList(L1);
    //排序


    //所有不支持随机访问迭代器的容器，不可以用标准算法
    //不支持随机访问迭代器的容器，内部会提供对应的一些算法
    //sort(beg，end)


    L1.sort();//默认排序规则 从小到大
    cout << "排序后：" << endl;
    printList(L1);

    L1.sort(myCompare);
    cout << "降序排序：" << endl;
    printList(L1);


}
//降序排序
bool myCompare(int v1, int v2)
{
    //降序  第一个数大于第二个数
    return v1 > v2;

}



int main()
{
    //test01();
    test02();

    return 0;
}
