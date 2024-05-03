#include <iostream>

#include <map>

using namespace std;


/*
����������
��Map�������в��������Լ�ͳ������

����ԭ�ͣ�
find(key) //����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set.end();
count(key); //ͳ��key��Ԫ�ظ���

*/

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin(); it != m.end();it++)
    {
        cout << "key = " << it->first << "value =" << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));

    map<int,int>::iterator pos = m.find(3);

    if(pos != m.end())
    {
        cout << "�鵽��Ԫ��key ="  << (*pos).first << "value=" << pos->second << endl;
    }
    else
    {
        cout << "δ�ҵ�" << endl;
    }

    //ͳ��  map�������ظ�  counttͳ�ƶ���  ���Ҫô��0Ҫô��1
    // multimap��count ͳ�ƿ��ܴ���1
    int num = m.count(3);
    cout << "num=" << num << endl;

}


int main()
{
    test01();



    return 0;
}
