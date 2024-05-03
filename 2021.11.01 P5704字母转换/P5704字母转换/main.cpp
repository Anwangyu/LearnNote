#include<iostream>
using namespace std;
int main()
{
	char a;             //创建字符型变量
	cin>>a;             //小写输入
	cout<<char(a-32);   //注意要用char进行强制转换，否则输出的就是整数类型的了
   return 0;
}
/*#include<iostream>
#include<cstdio>
using namespace std;
int main() {
	char a; //定义一个字符
	cin>>a; //输入
	cout<<(char)(a-('a'-'A'));
   //由于字符存储的是ASCII码，所以先用一个字符小写-大写做例子，再用a-这个差，强制类型转换，得出此值
	return 0;
}*/
