#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

/*
����������
ϴ�� ָ����Χ�ڵ�Ԫ�������������

����ԭ�ͣ�
random_shuffle(iterator beg,iterator end);
//ָ����Χ�ڵ�Ԫ�������������
beg��ʼ������
end����������

*/


//class myPrint
//{
//public:
//    void operator()
//};

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    srand((unsigned int)time(NULL));//��ʵ �������  ���������

    vector<int>v;
    for(int i = 0;i < 10;i++)
    {
        v.push_back(i);
    }

    //����ϴ���㷨 ����˳��
    random_shuffle(v.begin(),v.end());

    for_each(v.begin(),v.end(),myPrint);
    cout << endl;
}

int main()
{

   test01();


    return 0;
}
