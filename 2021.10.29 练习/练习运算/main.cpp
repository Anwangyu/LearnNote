#include<iostream>//标准输入输出流文件
#include<iomanip>//小数保留的头文件  如：使用setprecision()函数
#include<math.h>//包含了 M_PI=3.1415926....


using namespace std;
/*加法运算


int main()
{
    long long a,b;
   cin>>a>>b;
   cout<<a+b<<endl;
    return 0;
}
*/

 /*{第一种保留小数写法(不论哪一种写法都要求有头文件)
    cout << setiosflags(ios::fixed) << setprecision(2);
    第二种保留小数写法
    cout.setf(ios::fixed);
    cout<<setprecision(2);
    第三种保留小数写法
    cout << fixed << setprecision(2);
------------------------------------
    科学计数法
    0.01=1e-2
    100=1e2
    先看e前的数字，然后e后的数字代表的是后面几个0
    eg:
      2.3e2 = 230
      -1.3e2=-130
------------------------------------
    C语言中
    %.2f\n中的“.2”即保留两位小数
    不设定保留几位小数，则默认六位
      }
*/
/*
int main()
{
    int T;
    cin >> T;
    if (T == 1)
    {
        cout << "I love Luogu!" << endl;
    }
    else if (T == 2)
    {
        cout << 2 + 4 << " " <<10 - 2 - 4 ;
    }
    else if (T == 3)
    {
        cout << 14/4 << " \n" << 4*(14/4) << " \n" << 14%4 << endl;
    }
    else if (T == 4)
    {
        cout << fixed << setprecision(3) << 500.0/3;
    }
     else if (T == 5)
    {
        cout << (220+260)/(20+12) << endl;
    }
    else if (T == 6)
    {
        //cout << sqrt(6*6+9*9);
        cout << sqrt(pow(6,2)+pow(9,2));
    }
    else if (T == 7)
    {
        cout << 100 + 10 << "\n" << 100 + 10 - 20 << "\n" << 100+ 10 -20 -90 << endl;
    }
    else if (T == 8)
    {
        int r = 5;
        cout << M_PI*r*2 << "\n" << M_PI*pow(r,2) << "\n" << 4/3*1.0*M_PI*pow(r,3);
    }
    else if (T == 9)
    {
      cout<<22<<endl;
    }
    else if (T == 10)
    {
        cout<<9<<endl;

    }
    else if (T == 11)
    {
        cout<<100.0/(8-5)<<endl;

    }
    else if (T == 12)
    {
        cout <<(int)('M'-'A')+1 <<endl<<(char)(18+'A'-1);
    }
    else if (T == 13)
    {
        double const pi=3.141593;
        cout<<(int)(pow(4/3*pi*(4*4*4+10*10*10),1.0*1/3));
    }
    else if (T == 14)
    {
        cout<<50<<endl;
    }
    return 0;
}
*/
//int main()
//{
//    double a,b,c,S,P;
//    cout << "请输入三角形a,b,c的值\n" << endl;
//    cin >>a>>b>>c;
//
//    P = (a+b+c)/2;
//    S=sqrt(P*(P-a)*(P-b)*(P-c));
//
//    cout << "P=" << P << "       S=" << S << endl;
//
//    return 0;
//}
//
