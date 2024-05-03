#include <iostream>

using namespace std;

//字符串查找和替换

//函数原型:
//    int find(const string& str,int pos = 0) const;//查找str第一次出现位置，从pos开始查找
//    int find(const char* s,int pos = 0) const; //查找s第一次出现为宗旨，从pos开始查找
//    int find(const char* s,int pos,int n) const;//从pos位置查找s的前n个字符第一次位置
//    int find(const char  c,int pos = 0)const; //查找字符c第一次出现的位置
//    int rfind(const string& str,int pos = npos) const;//查找字符c第一次出现位置
//    int rfind(const char* s, int pos = npos) const;//查找s最后一次出现的位置,从Pos开始查找
//    int rfind(const char* s,int pos,int n)const;//从pos查找s的前n个字符最后一次位置
//    int rfind(const char c,int pos = 0)const;//查找字符c最后一次出现位置
//    string& replace(int pos,int n,const string& str);//替换从pos开始n个字符为字符串str
//    string& replace(int pos,int n,const char*s);//替换从pos开始的n个字符为字符串s
//


void test01()
{

    string str1 = "abcdefg";

    int pos = str1.find("de");//没有就返回-1  假


    if(pos==-1)
    {
        cout << "未找到字符串" << endl;
    }
    else
    {
        cout << "找到字符串,pos =" << pos << endl;
    }



    //rfind 和find区别
    //rfind从右向左查找  find从左忘忧查找
    pos = str1.rfind("de");

    cout << "pos = " << pos <<endl;

    cout << "pos=" << pos << endl;

}

//替换
void test02()
{
    string str1 = "abcdefgh";




}


int main()
{
    test01();








    return 0;
}
