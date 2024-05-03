//#include<iostream>
//using namespace std;
//int main()
//{
//    int a=0;
//    int b=0;
//    int c=0;
//
//    cin >> a >> b >> c;
//
//    if( a > b )
//    {
//        if( a > c)
//        {
//            cout <<"a最重"<< endl;
//        }
//        else
//        {
//            cout<<"c最重" <<  endl;
//        }
//    }
//    else
//    {
//        if( b > c )
//        {
//            cout <<"b最重" << endl;
//        }
//        else
//        {
//            cout <<"c最重" << endl;
//        }
//    }
//    return 0;
//}

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
using namespace std;

int main() {
	int n[10];
	int i, j;
	int temp;                                 //用于缓存需要交换的数字
	cout << "请输入十个数字！" << endl;
	for (i = 0; i < 10; i++) {
		cin >> n[i];
	}
	for (i = 0; i < 9;i++) {                  //共进行9步
		for (j = 0; j < 9 - i;j++) {      //在每一步进行10-i次两两比较
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	cout << "排序后的数据是：" << endl;
	for (i = 0; i < 10; i++)
	{
	    cout << n[i] << ' ';
	}
	cout << endl;
    system("pause");
	return 0;
}
