#include <iostream>
#include <stdio.h>

using namespace std;

int main()
{
    float a,b;
    char c;
    printf ("input expression: a+-*/\n");
    scanf("%f%c%f,&a,&c,&b");
    switch(c)
    {
        case('+'):printf("%f\n",a+b);
        break;
        case('-'):printf("%f\n",a-b);
        break;
        case('*'):printf("%f\n",a*b);
        break;
        case('/'):printf("%f\n",a/b);
        break;
        default: printf("input error\n");
    }
    return 0;
}
