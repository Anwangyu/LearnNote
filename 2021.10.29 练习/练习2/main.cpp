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
//            cout <<"a����"<< endl;
//        }
//        else
//        {
//            cout<<"c����" <<  endl;
//        }
//    }
//    else
//    {
//        if( b > c )
//        {
//            cout <<"b����" << endl;
//        }
//        else
//        {
//            cout <<"c����" << endl;
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
	int temp;                                 //���ڻ�����Ҫ����������
	cout << "������ʮ�����֣�" << endl;
	for (i = 0; i < 10; i++) {
		cin >> n[i];
	}
	for (i = 0; i < 9;i++) {                  //������9��
		for (j = 0; j < 9 - i;j++) {      //��ÿһ������10-i�������Ƚ�
			if (n[j] > n[j + 1]) {
				temp = n[j];
				n[j] = n[j + 1];
				n[j + 1] = temp;
			}
		}
	}
	cout << "�����������ǣ�" << endl;
	for (i = 0; i < 10; i++)
	{
	    cout << n[i] << ' ';
	}
	cout << endl;
    system("pause");
	return 0;
}
