#include <iostream>
#include <fstream>
#include <string>
using namespace std;


void test01()
{
    //头文件

    //创建流对象
    ifstream ifs;
    //打开文件并判断是否打开成功
      ifs.open("test.txt",ios::in);
    if ( !ifs.is_open())
    {
        cout << "文件打开失败" << endl;
      return;
    }
    //读数据
    //第一种
//    char buf[1024] = { 0 };
//    while (ifs >> buf)
//    {
//        cout << buf << endl;
//    }
     //第二章种
//     char buf[1024] = {0};
//     while (ifs.getline(buf,sizeof(buf)))
//     {
//         cout << buf << endl;
//     }
     //第三种
//     string buf;
//
//     while (getline(ifs,buf))
//     {
//         cout << buf << endl;
//     }
     //第三种
     char c;
     while((c = ifs.get()) !=EOF)//文件尾
     {
         cout << c;
     }
    //关闭文件
    ifs.close();
}
int main()
{
     test01();
    return 0;
}
