#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

/*
����������
������������������Ԫ�� �滻��ָ��Ԫ��

����ԭ�ͣ�
replace_if(iterator beg,iterator end,_pred,newvalue);
�������滻Ԫ�� �����������滻��ָ��Ԫ��

_predν��
newvalue �滻����Ԫ��


*/

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};
class Greater30
{
public:
    bool operator()(int val)
    {
        return val >= 30;
    }
};

void test01()
{
    vector<int>v;
    v.push_back(10);
    v.push_back(50);
    v.push_back(30);
    v.push_back(20);
    v.push_back(40);
    v.push_back(30);
    v.push_back(20);


    cout << "�滻ǰ��" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;
    //�����ڵ���30���滻Ϊ3000
    cout << "�滻��" << endl;
    replace_if(v.begin(),v.end(),Greater30(),3000);
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;
}


int main()
{
    test01();

    return 0;
}
