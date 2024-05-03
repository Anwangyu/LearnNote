#include <iostream>

using namespace std;

//案例描述：
//  利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
//  排序规则从大到小，排序算法为选择排序
//  分别利用char数组和int数组进行测试

//实现通用 对数组进行排序的函数
//规则 从大到小  算法 选择  测试 char 数组、int数组
//交换的函数模板


//交换函数模板
template<class T>
void mySwap(T&a, T&b)
{
    T temp = a;
    a = b;
    b = temp;
}


//排序算法
template<class T>
void mySort(T arr[],int len)
{
    for(int i = 0;i < len;i++)
    {
        int max = i;//认定最大值的下标
        for (int j = i + 1; j < len;j++)
        {
            //认定的最大值 比遍历出的数值要小，说明J下标的元素才是真正的最大值
            if(arr[max] < arr[j])
            {
                max = j;//更新最大值下标
            }
        }
        if(max != i)
        {
            //交换max和i元素
             mySwap(arr[max],arr[i]);
        }
    }
}

//提供打印数组模板
template<class T>
void printArray(T arr[],int len)
{
    for(int i =0;i < len; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void text01()
{

    //测试char数组
    char charArr[] ="badcfe";

    cout << "sizeof(charArr)=" << sizeof(charArr) << endl;
    cout << "sizeof(char)=" << sizeof(char) << endl;

    int num = sizeof(charArr)/sizeof(char);
    mySort(charArr,num);

    printArray(charArr,num);

}

void text02()
{
    //测试Int 数组
    int intArr[] = { 7,5,6,8,2,1,3,4,9,};

    cout << "sizeof(intArr)=" << sizeof(intArr) <<endl;
    cout << "sizeof(int)   =" << sizeof(int) << endl;
    int num = sizeof(intArr)/sizeof(int);

    mySort(intArr,num);

    printArray(intArr,num);
}
int main()
{
    text01();
    //text02();
    return 0;
}
