//2.10 ���������û������������������������������
#include <iostream>
#include <stdio.h>//��׼����ͷ�ļ� ����Scanf���� ��ֵ����
#include <cstdlib>

using namespace std; //�� �ַ��� cout ���


int main()
{
   float a,b; //�����͵�����

     char c; //����ָ'\'

     cout << ("��������Ҫ��������㣨���ṩ�������㣩") << endl ;

     scanf ("%f%c%f",&a,&c,&b);
    //while(1)
        //{
         switch(c)
    {

       case '+': printf("%f\n",a+b); //������������͵����ȵĵĸ�ʽ��%,%f������
       break;

       case '-': printf("%f\n",a-b);
       break;

       case '*': printf("%f\n",a*b);
       break;

       case '/': printf("%f\n",a/b);
       break;

       default:
           cout << "�޷�ʶ�������������" << endl;

              return 0;
    }
          system("pause");


        //}ѭ�����㣿

    }




