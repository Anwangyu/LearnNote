#include <iostream>

using namespace std;
#include <typeinfo>

//����ģ��̳еĸ�����һ����ģ��ʱ��������������ʱ��Ҫָ����������T������
//�����ָ�����������޷�������������ڴ�
//��������ָ����������T�����ͣ�����Ҳ��Ҫ��Ϊ��ģ��


template<class T>
class Base
{

    T m;

};


class Son :public Base<int>//����ָ��һ������,����֪��������T������
{


};


void text01()
{
    Son s1;
}

//��������ָ��������T���ͣ�����Ҳ��Ҫ����ģ��
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
    Son2()
    {
        cout << "T1������Ϊ��" << typeid(T1).name() << endl;
        cout << "T2������Ϊ��" << typeid(T2).name() << endl;
    }


  T1 obj;



};

void text02()
{
    Son2<int,char>S2;
}

int main()
{
    text01();
    text02();


    return 0;
}
