#include <iostream>
#include <list>

using namespace std;

/*
����������
��List�����������ݵĲ����ɾ��

����ԭ�ͣ�
push_back(elem);������β������һ��Ԫ��
pop_back();ɾ�����������һ��Ԫ��
push_front(elem);��������ͷ����һ��Ԫ��
pop_front()����������ͷ�Ƴ���һ��Ԫ��
insert(pos,elem);��posλ�ò���elemԪ�صĿ��������������ݵ�λ��
insert(pos,n,elem);��posλ�ò���n��elem���ݣ��޷���ֵ
insert(pos,beg,end);��posλ�ò���[beg,end]��������ݣ��޷���ֵ
clear();�Ƴ����������е�����
erase(beg,end);ɾ��[beg,end]������պ��磬������һ�����ݵ�λ��
erase(pos);ɾ��posλ�õ����ݣ�������һ�����ݵ�λ��
remove(elem);ɾ��������������elemֵƥ���Ԫ��
*/

void printList(const list<int>&L)
{
    for(list<int>::const_iterator it = L.begin(); it !=L.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int>L;

    //β��
    L.push_back(10);
    L.push_back(20);
    L.push_back(30);

    //ͷ��
    L.push_front(100);
    L.push_front(200);
    L.push_front(300);

    printList(L);

    //βɾ
    L.pop_back();
    printList(L);

    //ͷɾ
    L.pop_front();
    printList(L);

    //insert����
//    L.insert(L.begin(),1000);
//    printList(L);

    list<int>::iterator it = L.begin();
    L.insert(++it,3000);

    printList(L);

    //ɾ��
    it = L.begin();
    L.erase(++it);

    printList(L);

    //�Ƴ�
    L.push_back(10000);
    L.push_back(10000);
    L.push_back(10000);

    printList(L);
    L.remove(10000);
    printList(L);


}


int main()
{
    test01();



    return 0;
}
