#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
/*

����������
��������ָ����Χ�ľ�Ԫ���޸�Ϊ��Ԫ��

����ԭ�ͣ�
replace(iterator beg,iterator end,oldvalue,newvalue);

��Ԫ�غ���Ԫ��
*/

class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }

};

void test01()
{
    vector<int>v;
    v.push_back(20);
    v.push_back(30);
    v.push_back(50);
    v.push_back(40);
    v.push_back(20);
    v.push_back(10);

    cout << "�滻ǰ��" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;

    //��20�滻Ϊ2000
    replace(v.begin(),v.end(),20,2000);
    cout << "�滻��" << endl;
    for_each(v.begin(),v.end(),myPrint());
    cout << endl;

}

int main()
{

    test01();

    return 0;
}
