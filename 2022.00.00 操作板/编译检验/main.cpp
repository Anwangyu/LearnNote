//给二元一次方程组求解(带过程)
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int x,y;

	x=(int)(30.0*y - 240);
	x=(int)(6.0*y - 60);

	cout <<" x=\n" << x << " y=\n" << y << endl;
	//cout<<a<<"x+"<<b<<"y+"<<c<<"=0  ①\n "<<d<<"x+"<<e<<"y+"<<f<<"=0  ②\n由①得:x=("<<-c<<"+"<<-b<<"y)/"<<a<<"  ③\n把③代入②得:\n"<<d<<"(("<<-c<<"+"<<-b<<"y)/"<<a<<")+"<<e<<"y+"<<f<<"=0\ny="<<y<<"\n把y="<<y<<"代入①得:\nx="<<x<<"\n∴方程组的解为:{x="<<x<<"\n               y="<<y<<"\n";
	return 0;
}
