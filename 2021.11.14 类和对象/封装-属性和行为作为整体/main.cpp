#include <iostream>
//#include <stdlib.h>
//#include <bits/stdc++.h>;
using namespace std;

//C++����������������Ϊ����װ���̳С���̬
//C++��Ϊ���������Ϊ���󣬶������������Ժ���Ϊ

//��װ�����壺
//�����Ժ���Ϊ��Ϊһ�����壬���������е�����
//�����Ժ���Ϊ����Ȩ�޿���

//����һ
//��������ʱ�����Ժ���Ϊд��һ�𣬱�������
//�﷨�� class ����{  ����Ȩ�ޣ� ����/��Ϊ};

//Բ���ܳ������Բ��
//  2*PI*�뾶

const double PI = 3.14;

class Circle
{
    //����Ȩ��
    public: //����Ȩ��
    //����
    int m_r;
    //��Ϊ
    //��ȡԲ���ܳ�
     double calculateZC()
     {
         return 2*PI*m_r;
     }
};

int main()
{
    //ͨ��Բ�࣬���������Բ������
    Circle c1;
    //��Բ���� �� ���Ը�ֵ
    c1.m_r = 10;

    cout<< "Բ���ܳ�Ϊ��" << c1.calculateZC() <<endl;


    //system("pause");
    return 0;
}
