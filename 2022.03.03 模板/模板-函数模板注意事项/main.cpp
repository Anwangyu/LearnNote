#include <iostream>

using namespace std;

//ע�����

template<class T>//typname�����滻��class
void mySwap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;

}



// 1.�Զ������Ƶ��������Ƶ���һ�µ���������T�ſ���ʹ��

void text01()
{
    int a = 10;
    int b = 20;
    char c = 'c';

    mySwap(a,b);
    //mySwap(a,c);//�����ԭ�����Ƶ�����һ�µ�T����
    cout << "a=" << a << endl;
    cout << "b=" << b << endl;
}
// 2.ģ�����Ҫȷ����T���������ͣ��ſ���ʹ��

template<class T>
void func()
{
    cout << "func�����ĵ���" << endl;
}

void text02()
{
    func<int>();
}

int main()
{
    //text01();
    text02();
    return 0;
}
