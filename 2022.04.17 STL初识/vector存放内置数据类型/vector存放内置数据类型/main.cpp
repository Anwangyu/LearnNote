#include <iostream>
#include <vector>

#include <algorithm> //��׼�㷨ͷ�ļ�

using namespace std;


//�㷨��for_each
//������vector
//��������vector<int>::iterator


//vector���������������


void myPrint(int val)
{
    cout << val << endl;
}




void test01()
{
    //������һ��vector������������
    vector<int> v;//����  ʹ��ǰ����ͷ�ļ�

    //�������в�������
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //ͨ�������������������е�����
    /*vector<int>::iterator itBegin = v.begin();//��ʼ������  ָ�������е�һ��Ԫ��
    vector<int>::iterator itEnd = v.end();//����������  ָ�����������һ��Ԫ�ص���һ��λ��


    //��һ�ֱ�����ʽ
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;
        itBegin++;
    }*/


    //�ڶ��ֱ�����ʽ
    /*for(vector<int>::iterator it = v.begin(); it != v.end(); it++)//����ѭ��
    {
        cout << *it << endl;
    }*/

    //�����ֱ�����ʽ  ����STL�ṩ�����㷨
    for_each(v.begin(), v.end(),  myPrint);//������һ��forѭ��


}

int main()
{
    test01();

    return 0;
}
