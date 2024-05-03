#include<iostream>

using namespace std;
int main()

{
    int a,b,c,max,min;//整型
    cin>>a>>b>>c;//输入abc
    if (a < b)
    {
        max = b;
        min = a;
        if(min > c)
        {
            min = c;
            cout << "MIN:" << min << endl;
        }
        else
        {
            cout << "MIN:" << min << endl;
        }
        if (max < c)
        {
            max = c;
            cout << "MAX:" << max << endl;
        }
        else
        {
            cout << "MAX:" << max << endl;
        }
    }
    else if(b > c)
    {
        min = c;
        max = a;
        cout << "MIN:" << min << endl;
        cout << "MAX:" << max << endl;
    }
    else if(b < c)
    {
        if(c > a)
        {
            min = b;
            max = c;
            cout << "MIN:" << min << endl;
            cout << "MAX:" << max << endl;
        }
    else if(c < a)
        {
            min = b;
            max = a;
            cout << "MIN:" << min << endl;
            cout << "MAX:" << max << endl;
        }
    }
    else if(a > c)
    {
        max = a;
        cout << "MAX:" << max << endl;
    }
    else if(c > a)
    {
        cout<< "MAX:" << c <<endl;
    }
    else if(a = b = c)
    {
        cout << "三者大小相等" << endl;
    }

    return 0;

}
