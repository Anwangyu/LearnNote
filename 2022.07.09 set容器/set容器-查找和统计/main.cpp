#include <iostream>

#include <set>
using namespace std;


/*
����������
��set�������в��������Լ�ͳ������

����ԭ�ͣ�
find(key) ����key�Ƿ���ڣ������ڣ����ظü���Ԫ�صĵ��������������ڣ�����set end()
count(key); ͳ��Key��Ԫ�ظ���

*/

void printSet()
{

}

void test01()
{

    set<int>s1;
    //����
    s1.insert(10);
    s1.insert(20);
    s1.insert(30);
    s1.insert(40);

    set<int>::iterator pos = s1.find(30);

    if(pos != s1.end())
    {
        cout << "�ҵ�Ԫ��" << *pos << endl;
    }
    else
        {
        cout <<"δ�ҵ�" <<  endl;
        }

    //����

}

//ͳ��
void test02()
{
        set<int>s2;
    //����
    s2.insert(10);
    s2.insert(20);
    s2.insert(30);
    s2.insert(40);

    //ͳ��30����

    //����set���� ͳ�ƽ��Ҫô��0 ����Ϊ1
    int num = s2.count(30);
    cout << "num=" << num << endl;

}

int main()
{
    //test01();
test02();

    return 0;
}
