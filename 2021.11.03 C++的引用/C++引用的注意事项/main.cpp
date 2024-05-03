#include <iostream>

using namespace std;

//引用前必须初始化
//引用一旦初始化后，不可以改变（一个字符一旦使用了引用更改过别名后不可以再次更改别名）


int main()
{
    int a = 10;
    int &b = a;

    // int &b; 引用的代码必须初始化
    int c = 20;
    //b = c;已经更改过b的别名 b不能再更改了
    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    return 0;
}
