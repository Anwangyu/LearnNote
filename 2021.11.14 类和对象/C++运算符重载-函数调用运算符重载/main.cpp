#include <iostream>
#include <string>
using namespace std;

//�������������()Ҳ��������
//�������غ�ʹ�õķ����ǳ������ĵ���,��˳�Ϊ�º���
//�º���û�й̶�д�����ǳ����

//�����������������
//��ӡ�����
class MyPrint
{
public:

    //���غ������������
    void operator()(string test)
    {
        cout << test << endl;
    }



private:

};
    void MyPrint02(string test)
{
    cout << test << endl;
}

void test01()
{
    MyPrint myPrint;

    myPrint("WORLD");//ʹ�������ǳ����ƺ������ã����Ϊ�º���

    MyPrint02("Hello");
}

//�º����ǳ����û�й̶�д��
//�ӷ���

class MyAdd
{
public:
    int operator()(int num1 , int num2)
    {
        return num1 + num2;
    }

};

void test02()
{
    MyAdd myadd;
    int ret = myadd(100,100);
    cout << "ret = " << ret << endl;

    //������������
    cout << MyAdd()(100,100) << endl;
}
int main()
{
    //test01();
    test02();

    return 0;
}
