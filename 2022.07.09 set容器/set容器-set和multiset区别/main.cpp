#include <iostream>
#include <set>


using namespace std;

/*
����
set�����Բ����ظ����ݶ�multiset����
set�������ݵ�ͬʱ�᷵�ز���������ʾ�����Ƿ�ɹ�
multiset���������ݣ���˿��Բ����ظ�����
*/


void test01()
{
    set<int>s;

   pair<set<int>::iterator,bool> ret =  s.insert(10); //������ ����
   if(ret.second)
   {
       cout << "1����ɹ� " <<  endl;
   }
   else
   {
       cout << "1����ʧ��" <<  endl;
   }

   ret = s.insert(10);
      if(ret.second)
   {
       cout << "2����ɹ� " <<  endl;
   }
   else
   {
       cout << "2����ʧ��" <<  endl;
   }



   multiset<int>ms;
   //��������ظ���ֵ
   ms.insert(10);
   ms.insert(10);
   ms.insert(10);
   ms.insert(10);
   ms.insert(10);
   ms.insert(10);

   for(multiset<int>::iterator it = ms.begin();it != ms.end(); it++)
   {
       cout << *it << " ";
   }
   cout << endl;

}

int main()
{


   test01();
    return 0;
}
