#include <iostream>
#include <string>

using namespace std;

/*
���
���غ���������ò��������࣬����󳣳�Ϊ��������
��������ʹ������ʱ����Ϊ���ƺ������ã�Ҳ�зº���

����
��������  �º���  ��һ���� ����һ������

�ص㣺
����������ʹ��ʱ����������ͨ�����������ã������ֲ����������ַ���ֵ
�������󳬳���ͨ�����ĸ����������������Լ���״̬
�������������Ϊ��������
*/

class MyAdd
{
public:
    int operator()(int v1,int v2)
    {
        return v1 + v2;
    }


};

//����������ʹ��ʱ����������ͨ�����������ã������в����������з���ֵ
void test01()
{
    MyAdd myAdd;
    cout << myAdd(10,10) << endl;
}

//�������󳬳���ͨ�����ĸ����������������Լ���״̬
class MyPrint
{
public:
    MyPrint()
    {
        this->count=0;
    }
    void operator()(string test)
    {
        cout << test << endl;
        this->count++;
    }

    int count;//�ڲ��Լ���״̬


};

void test02()
{
    MyPrint myPrint;
    myPrint("hello world");
    myPrint("hello world");

    cout << "myprint�ĵ��ô���Ϊ��" << myPrint.count << endl;
}
//�������������Ϊ��������
void doPrint(MyPrint & mp,string test)
{
    mp(test);

}

void test03()
{
    MyPrint myPrint;
    doPrint(myPrint, "hello C++");
}

int main()
{
    //test01();
    //test02();
    test03();

    return 0;
}
