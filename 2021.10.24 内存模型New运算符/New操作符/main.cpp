#include <iostream>

using namespace std;

// New 数据类型
 int * func()
 {
     //堆区创建整型数据   New返回是   该数据类型的整形
     int * p = new  int (10) ;
     return p;
 }

 void test01()//堆区数据 程序员管理释放  delete 释放数据
 {
     int *p = func();
     cout << *p << endl;
     cout << *p << endl;
     cout << *p << endl;
    //delete p ;
    //cout <<*p<<endl;
    //数据内存被释放  访问会造成非法操作
 }

 void test02()
 {
     //创建10给数据类型的数组
     int *arr = new int[10];
     for(int i = 0;i < 10; i++)
     {
         arr[i] = i +100; //对10给数据赋值
     }
      for (int i = 0;i<10; i++)
      {
          cout << arr[i] <<endl;
      }

      //释放数组加中括号
      delete []arr;
 }


int main()
{
    test02();
    test01();

    return 0;
}
