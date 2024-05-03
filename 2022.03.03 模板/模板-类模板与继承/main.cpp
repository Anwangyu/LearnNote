#include <iostream>

using namespace std;
#include <typeinfo>

//当类模板继承的父类是一个类模板时，子类在声明的时候，要指定出父类中T的类型
//如果不指定，编译器无法给予子类分配内存
//如果想灵活指定出父类中T的类型，子类也需要变为类模板


template<class T>
class Base
{

    T m;

};


class Son :public Base<int>//必须指定一个类型,必须知道父类中T的类型
{


};


void text01()
{
    Son s1;
}

//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1,class T2>
class Son2 :public Base<T2>
{
public:
    Son2()
    {
        cout << "T1的类型为：" << typeid(T1).name() << endl;
        cout << "T2的类型为：" << typeid(T2).name() << endl;
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
