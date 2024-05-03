//普通员工文件
#pragma once
#include <iostream>
#include "worker.h"

#include <bits/stdc++.h>
using namespace std;



class Employee :public Worker//继承公式 : 不是 :: ,::是作用域下
{
    public:
        //构造函数
        Employee(int id, string name, int dId);

        //显示个人信息
        virtual void showInfo();

        //获取岗位名称
        virtual string getDeptName();
};

//#endif // EMPLOYEE_H
