//��ͨԱ���ļ�
#pragma once
#include <iostream>
#include "worker.h"

#include <bits/stdc++.h>
using namespace std;



class Employee :public Worker//�̳й�ʽ : ���� :: ,::����������
{
    public:
        //���캯��
        Employee(int id, string name, int dId);

        //��ʾ������Ϣ
        virtual void showInfo();

        //��ȡ��λ����
        virtual string getDeptName();
};

//#endif // EMPLOYEE_H
