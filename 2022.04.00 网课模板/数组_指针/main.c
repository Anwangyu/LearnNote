#include <stdio.h>
#include <stdlib.h>

int main()
{
    int  a[10]={1,2,3,4,5,6,7,8,9,0};
    int   max ,*p ;
    *p=a;
    max=*p;
    while( p < *(p+10))
       if(*p>max)  max = *p; if(p>max)  max = *p;
     printf("max=%d\n",max);
return 0;
 }





































//int main()
//{
//    char *month_name[13]={"illegal month","January","February","March","April","May","June","july","August","September","October","November","December"};
//
//    int n;
//    printf("input month:\n");
//    scanf("%d",&n);
//    if((n <= 12)&&(n >= 1))
//        printf("It is %s.\n",*(month_name+n));
//    else
//        printf("It is wrong.\n");
//    return 0;
//
//
//
//}




//int main()
//{
//    int i,j;
//    char*a[5]={"Wang","Li","Zheng","Jin","Xian"},**p;
//    p = a;
//    for(i = 0; i < 5;i++)
//    {
//        printf("%s%s%s%s\n",a[i],*(a+i),p[i],*(p+i));
//    }
//    i = 0; j = 2;
//    printf("%c%c%c%c\n",*(a[i]+j),*(*(a+i)+j),*(p[i]+j),*(*(p+i)+j));
//
//}





//int main()
//{
//    char a[80], *str=a;
//    scanf("%s",str);
//    for(;*str!='\0';str++)
//    {
//        if(*str>='A'&&*str<='Z')
//            *str+=32;
//    }
//    printf("%s\n",a);
//    return 0;
//}



//int main()
//{
//    int j = 2,k= 5;
//    int *p1,*p2;
//    p1 = &j;
//    p2 = &k;
//
//    printf("k = %d\n",*p1);
//    printf("k = %d\n",*p2);
//    return 0;
//}
