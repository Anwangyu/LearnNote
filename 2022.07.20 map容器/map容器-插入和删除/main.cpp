#include <iostream>

#include <map>

using namespace std;


/*

*/

void printMap(map<int,int>&m)
{
    for(map<int,int>::iterator it = m.begin(); it != m.end();it++)
    {
        cout << "key = " << it->first << "value =" << it->second << endl;
    }
    cout << endl;
}

void test01()
{

    //插入  第一种
    map<int,int>m;
    m.insert(pair<int,int>(1,10));


    //第二种
    m.insert(make_pair(2,20));

    //第三种
    m.insert(map<int,int>::value_type(3,30));//值类型

    //第四种
    m[4] = 40;

    //[]不建议插入，用途可以利用key访问到value
//    cout << m[5] << endl;


    printMap(m);

    //删除
    m.erase(m.begin());
    printMap(m);

    m.erase(3);//按照Key删除

    m.erase(m.begin(),m.end());

    m.clear();



}


int main()
{
    test01();


    return 0;
}
