#include <iostream>
#include <vector>

using namespace std;
/*
��������
��vector�е����ݴ�ȡ����

����ԭ��
at(int idx); //��������ldix��ָ��λ��
operator[]; //��������lidx��ָ������
front();   //���������е�һ������Ԫ��
back();    //�������������һ������Ԫ��


*/



void test01()
{
    vector<int>v1;
    for(int i = 0;i < 10;i++)
    {
        v1.push_back(i);
    }

    //����[]����ʽ�����������е�Ԫ��
    for(int i = 0; i < v1.size();i++)
    {
        cout << v1[i] <<  " ";
    }
    cout << endl;
    //���ó�Ա����at������
    for(int i = 0; i < v1.size();i++)
    {
        cout << v1.at(i) << " ";

    }
    cout << endl;


    //��ȡ��һ��Ԫ��
    cout << "��һ��Ԫ��Ϊ��" << v1.front() << endl;

    //��ȡ���һ��Ԫ��
    cout << "���һ��Ԫ��Ϊ��" << v1.back() << endl;

}


int main()
{

    test01();

    return 0;
}
