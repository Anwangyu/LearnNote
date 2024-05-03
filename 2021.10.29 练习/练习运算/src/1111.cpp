//给二元一次方程组求解(带过程)
#include<iostream>
using namespace std;
int main()
{
	double a,b,c,d,e,f,x,y;
	cout<<"欢迎使用yuanwow二元一次方程标准求解程序\n{ax+by+c=0\n dx+ey+f=0\n循环小数请输入8位以上\n请依次输入a,b,c,d,e,f\n";
	cin>>a>>b>>c>>d>>e>>f;
	y=(double)((-f*1.0+d*c*1.0/a)*1.0/(-d*b*1.0/a+e*1.0));
	x=(double)((-c*1.0-b*y*1.0)*1.0/a);
	cout<<"==========消元法求解==========\n{"<<a<<"x+"<<b<<"y+"<<c<<"=0  ①\n "<<d<<"x+"<<e<<"y+"<<f<<"=0  ②\n由①得:x=("<<-c<<"+"<<-b<<"y)/"<<a<<"  ③\n把③代入②得:\n"<<d<<"(("<<-c<<"+"<<-b<<"y)/"<<a<<")+"<<e<<"y+"<<f<<"=0\ny="<<y<<"\n把y="<<y<<"代入①得:\nx="<<x<<"\n∴方程组的解为:{x="<<x<<"\n               y="<<y<<"\n";
	return 0;
}
