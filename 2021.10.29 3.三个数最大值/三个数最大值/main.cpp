#include <iostream>

using namespace std;

int main()
{
    //第一种方法
/* int a,b,c;
   cin >> a >> b >> c;
   if(a>b&&a>c)
   {
       cout << "最大值为："<< a <<endl;
   }
   if(b>a&&b>c)
   {
       cout << "最大值为："<< b <<endl;
   }
   if(c>a&&c>b)
   {
       cout << "最大值为："<< c <<endl;
   } */

 //第二种方法
 /*int a,b,c;
   cin >> a >> b >> c;
   int max = a;
   if(b>max)
     max = b;
   if(c>max)
     max = c;
   cout <<"最大值为:"<< max << endl;
      */

  //第三种方法
  /*
    int a,b,c;

    cin >>a >> b >> c;
    int max = a;
    max = (max>b)?max:b;
    max = (max>c)?max:c;
    cout <<"最大值为："<< max <<endl;


*/
    return 0;
}
