#include <iostream>
#include <functional>
#include <vector>
#include <algorithm>

using namespace std;



/*
����������
ʵ�ֹ�ϵ�Ա�


template<class T> bool eaual_to<T> //����
template<class T> bool not_equal_to<T> //������
template<class T> bool greater<T> //����
template<class T> bool greater_equal<T> //���ڵ���
template<class T> bool less<T> //С��
template<class T> bool less_equal //С�ڵ���

*/

class MyCompare
{
public:
    bool operator()(int v1 ,int v2)
    {
        return v1 > v2;
    }
};

void test01()
{
    vector<int>v;

    v.push_back(10);
    v.push_back(30);
    v.push_back(40);
    v.push_back(20);
    v.push_back(50);

    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;


    //����
    sort(v.begin(),v.end(),MyCompare());
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    cout << "*-------------*" << endl;
    sort(v.begin(),v.end(),greater<int>());//�ڽ��������� ��������д�ķº���  ���ڵ�ʹ��  ��д��С����ֻ��Ҫ�ı�һ�¼���
    for(vector<int>::iterator it = v.begin();it != v.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;


}

int main()
{
    test01();

    return 0;
}
