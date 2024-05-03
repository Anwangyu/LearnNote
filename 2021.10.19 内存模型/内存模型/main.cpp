#include <iostream>
#include <stdlib.h>
using namespace std;
//括号外的全局变量
int g_m = 10;
int g_n = 10;


//const修饰的全局变量  全局常量
int c_g_m=10;
int c_g_n=10;

int main()
{



  //全局区


  //全局变量



  //全局变量，静态变量，常量



  //局部变量
  int m = 10;
  int n = 10;
  cout <<"局部m的地址为：" << (int)&m << endl;
  cout <<"局部n的地址为：" << (int)&n << endl;




  //括号外的全局变量的取址
  cout <<"全局m的地址为：" << (int)&g_m << endl;
  cout <<"全局n的地址为：" << (int)&g_n << endl;


  //静态变量  （在普通变量前面加static）
  static int s_m = 10;
  static int s_n= 10;
  cout << "静态变量s_m的地址为：" << (int)&s_m << endl;
  cout << "静态变量s_n的地址为：" << (int)&s_n << endl;

  //常量
  //字符串常量
  cout << "字符串常量的地址为：" <<(int)&"Hello world" << endl;

  // const修饰的变量
  //const 修饰的全局变量  ，const修饰的局部变量

  cout <<"全局常量c_g_m的地址为："<<(int)&c_g_m <<endl;
  cout <<"全局常量c_g_n的地址为："<<(int)&c_g_n <<endl;




  int c_l_m = 10;
  int c_l_n = 10;

  cout <<"局部变量c_l_m的地址为："<<(int)&c_l_m<<endl;
  cout <<"局部变量c_l_n的地址为："<<(int)&c_l_n<<endl;








    system("pause");
    //return 0;
}
