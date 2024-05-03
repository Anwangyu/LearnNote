//2.10 计算器，用户输入运算数和四则运算符，输出结果
#include <iostream>
#include <stdio.h>//标准输入头文件 用于Scanf输入 赋值运算
#include <cstdlib>

using namespace std; //与 字符串 cout 相关


int main()
{
   float a,b; //浮点型单精度

     char c; //用于指'\'

     cout << ("请输入您要计算的运算（仅提供四则运算）") << endl ;

     scanf ("%f%c%f",&a,&c,&b);
    //while(1)
        //{
         switch(c)
    {

       case '+': printf("%f\n",a+b); //用于输出浮点型单精度的的格式符%,%f浮点数
       break;

       case '-': printf("%f\n",a-b);
       break;

       case '*': printf("%f\n",a*b);
       break;

       case '/': printf("%f\n",a/b);
       break;

       default:
           cout << "无法识别您输入的运算" << endl;

              return 0;
    }
          system("pause");


        //}循环计算？

    }




