#include <iostream>

using namespace std;

int main()
{
    int num = 100;

    do
    {
        int a = 0; //个位
        int b = 0; //十位
        int c = 0; //百位
        int m = 0; //千位

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100 % 10;
        m = num / 1000;// 千位数的水仙花数; 百位数的水仙花数去掉“m”以及将“c”的除法运算改为/10

         if(a*a*a*a + b*b*b*b + c*c*c*c + m*m*m*m == num)
        {
                cout << num << endl;

        }

             num++;

    }while( num < 10000);

    return 0;
}








//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//    int i = 100;
//    for (; i < 1000; i++)
//    {
//        int a = i % 10;
//        int b = i / 10 % 10;
//        int c = i % 100;
//
//
//        if (i == a * a * a + b * b * b + c * c * c)
//        {
//            cout << "水仙花数为：%d" << i << endl;
//        }
//    }
//
//    return 0;
//}
