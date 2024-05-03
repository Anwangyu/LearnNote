#include <iostream>

using namespace std;
/*1.按参数分：有参构造和无参构造
  2.按类型分：普通构造和拷贝构造
  三种调用方式：
  括号法
  显示法
  隐式转换法
  */
  //构造函数的分类及调用
  //分类
  // 按照参数分类   无参构造（默认构造）和有参构造（）
  // 按照类型分类   普通构造  拷贝构造
  class Person
  {
  public:
      //构造函数
      Person()
      {
          cout<<"Person的无参构造函数调用"<<endl;
      }
      Person(int a)//参数
      {
          age = a;
          cout<<"Person的有参构造函数调用"<<endl;
      }
      //拷贝构造函数
      Perosn(const Person& p)
      {
          //将传入的人身上的所有属性，拷贝到其身上
          age = p.age;
          cout <<"Person的拷贝构造函数的调用"<< endl;
      }

      ~Person()
      {
          cout<<"Person的析构函数的调用"<<endl;
      }
      int age;

  };
  //调用

  void test01()
  {
      //1.括号法
      //Person p1;//默认构造函数调用
      //Person p2(10);//有参构造函数
      //Person p3(p2);//拷贝构造函数
      //cout <<"P2的年龄为："<< p2.age << endl;
      //cout <<"P3的年龄为："<< p2.age << endl;

      //注意事项1
      //调用默认构造函数的时候，不要加()
      //因为下面这行代码，编译器会认为是一个函数的声明
      //Person p1();



      //2.显示法
      //Person p1;
      //Person p2 = Person (10);//调用有参构造
      //Person p3 = Person (p2);///////////

      //Person (10);//匿名对象  特点：当前行结束后，系统会立即回收匿名对象
      //cout <<"aaaaa"<<endl;

      //注意事项2
      //不要利用拷贝构造函数  初始化匿名对象  编译器会认为Person (p3) ===Person p3;      Person (p3);
      //Person(p3);


      //3.隐式转换法
      Person p4 = 10;//相当于写了Person p4 = Person (10);
      Person p5 = p4;


  }
int main()
{
    test01();

    return 0;
}
