#include <iostream>

using namespace std;

int main()
{
    int num = 100;

    do
    {
        int a = 0; //��λ
        int b = 0; //ʮλ
        int c = 0; //��λ
        int m = 0; //ǧλ

        a = num % 10;
        b = num / 10 % 10;
        c = num / 100 % 10;
        m = num / 1000;// ǧλ����ˮ�ɻ���; ��λ����ˮ�ɻ���ȥ����m���Լ�����c���ĳ��������Ϊ/10

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
//            cout << "ˮ�ɻ���Ϊ��%d" << i << endl;
//        }
//    }
//
//    return 0;
//}
