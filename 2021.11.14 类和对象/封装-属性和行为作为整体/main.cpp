#include <iostream>
//#include <stdlib.h>
//#include <bits/stdc++.h>;
using namespace std;

//C++面向对象的三大特性为：封装、继承、多态
//C++认为万事万物皆为对象，对象上有其属性和行为

//封装的意义：
//将属性和行为作为一个整体，表现生活中的事务
//将属性和行为加以权限控制

//意义一
//在设计类的时候，属性和行为写在一起，表现事物
//语法： class 类名{  访问权限： 属性/行为};

//圆的周长，设计圆类
//  2*PI*半径

const double PI = 3.14;

class Circle
{
    //访问权限
    public: //公共权限
    //属性
    int m_r;
    //行为
    //获取圆的周长
     double calculateZC()
     {
         return 2*PI*m_r;
     }
};

int main()
{
    //通过圆类，创建具体的圆（对象）
    Circle c1;
    //给圆对象 的 属性赋值
    c1.m_r = 10;

    cout<< "圆的周长为：" << c1.calculateZC() <<endl;


    //system("pause");
    return 0;
}
