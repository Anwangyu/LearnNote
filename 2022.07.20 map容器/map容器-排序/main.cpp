#include <iostream>

#include <map>

using namespace std;


/*
ÀûÓÃ·Âº¯Êı

*/

class MyCompare
{
public:
    bool operator()(int v1, int v2)
    {
        return v1 > v2;
    }



};



void test01()
{
    map<int,int,MyCompare>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(5,30));
    m.insert(pair<int,int>(4,40));
    m.insert(pair<int,int>(3,50));

    for(map<int,int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->first << "value =" << it->second << endl;
    }

}


int main()
{
    test01();



    return 0;
}
