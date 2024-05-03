#include <iostream>
using namespace std;
#include <string>
#define MAX 1000
#include <cstdlib>

//设计联系人结构体
struct Person
{
    //姓名
    string m_Name;
    //性别 1男性  2女性
    int m_Sex;
    //年龄
    int m_Age;
    //电话
    string m_Phone;
    //地址
    string m_Addr;
};


//设计通讯录结构体
struct Addressbooks
{
    //通讯录中保存的联系人数组
    struct Person personArray[MAX];

    //通讯录中当前记录联系人个数
    int m_Size;
};


//1.添加联系人
void addPerson(Addressbooks * abs)
{
    //判断通讯录是否满
    if (abs->m_Size == MAX)
    {
        cout <<"通讯录已满，无法添加" << endl;
        return;
    }
    else
    {
        //添加具体联系人

        //姓名
        string name;
        cout <<"请输入联系人姓名：" << endl;
        cin >> name;
        abs->personArray[abs->m_Size] .m_Name = name; //存入数据
        //性别
        cout <<"请输入联系人性别：" << endl;
        cout <<"1--男性" << endl;
        cout <<"2--女性" << endl;
        int sex = 0;
        while(true)
        {
            //如果输入1或者2可以退出循环，否则重新输入
            cin >> sex;
             if(sex == 1 || sex == 2)
             {
            abs->personArray[abs->m_Size].m_Sex = sex;//存入数据
            break;
             }
             cout <<"输入有误，请重新输入" << endl;
        }
        //年龄
        cout <<"请输入年龄：" << endl;
        int age = 0;
        cin >> age;
        abs->personArray[abs->m_Size].m_Age = age;//存入数据


        //电话
        cout <<"请输入联系人电话：" << endl;
        string phone;
        cin >> phone;
        abs->personArray[abs->m_Size].m_Phone = phone;//存入数据


        //住址
        cout <<"请输入联系人住址：" << endl;
        string address;
        cin >> address;
        abs->personArray[abs->m_Size].m_Addr = address;

        //更新通讯录人数
        abs->m_Size++;

        cout <<"添加成功" << endl;
        system("pause");//按任意键继续（）Code blocks 中  要想使用system 要有头文件
        system("cls");//清屏幕
    }
}
//2.显示所有联系人(封装函数)
void showPerson(Addressbooks * abs)
{
    // 首先判断联系人的人数是否为0，若为0，则提示通讯录为空，反之 则显示联系人信息
    if(abs->m_Size == 0)
    {
        cout <<"当前联系人记录为空" << endl;
    }
    else
    {
        for(int i= 0; i < abs->m_Size; i++)
        {
            //水平制表符\t
          cout <<"姓名：" << abs->personArray[i].m_Name << "\t";
          cout <<"性别：" << (abs->personArray[i].m_Sex == 1 ?"男性":"女性") << "\t";
          cout <<"年龄：" << abs->personArray[i].m_Age << "\t";
          cout <<"电话: " << abs->personArray[i].m_Phone << "\t";
          cout <<"地址: " << abs->personArray[i].m_Addr << endl;
        }
    }

    system("pause") ;//任意键继续
    system("cls");// 清屏幕

}

//检测联系人的存在，若存在则返回所存在的具体位置，不存在则返回-1
//参数1 通讯录传入  参数2 对比姓名查找是否存在
int isExist(Addressbooks * abs, string name)
{
    for(int i = 0; i <abs->m_Size; i++)
    {
        //查找到所找用户姓名
        if(abs->personArray[i].m_Name == name)
        {
            return i;//找到返回这个人的编号
        }
    }
    return -1;//没找到返回-1
}

//3删除联系人
void deletePerson(Addressbooks * abs)
{
    cout <<"请输入要删除的联系人"<< endl;
    string name;
    cin >> name;
     //-1表示未查到 不等于-1 代表查到
    int ret = isExist(abs, name);

    if (ret != -1)
    {
        //查到此人时可删除for循环
        for (int i = ret; i < abs->m_Size; i++)
        {
            abs->personArray[i] = abs->personArray[i + 1];//数据整体向前移动
        }
        abs->m_Size--;//更新人员数
        cout << "删除成功" << endl;

    }
    else
    {
        cout <<"查无此人"<< endl;
    }
    system("pause");
    system("cls");
}
//4.查找联系人信息
void findPerson(Addressbooks * abs)
{
    cout << "请输入您要查找的联系人" << endl;
    string name;
    cin >> name;
    //判断联系人是否在通讯录中
    int ret = isExist(abs,name);


    if(ret != -1)
    {
        cout << "姓名：" << abs->personArray[ret].m_Name << "\t";
        cout << "性别: " << (abs->personArray[ret].m_Sex == 1 ?"男性":"女性") << "\t";
        cout << "年龄: " << abs->personArray[ret].m_Age << "\t";
        cout << "电话: " << abs->personArray[ret].m_Phone << "\t";
        cout << "地址: " << abs->personArray[ret].m_Addr << endl;
     }
    else
    {
        cout << "查无此人" << endl;
    }
    system("pause");
    system("cls");
}
//5.修改联系人
void modifyPerson(Addressbooks * abs)
{
    cout << "请输入要修改的联系人" << endl;
    string name;
    cin >> name;
    int ret = isExist(abs, name);

    if(ret != -1)//找到联系人
    {
        //姓名
        string name;
        cout <<"请输入姓名:" << endl;
        cin >> name;
        abs->personArray[ret].m_Name = name;
        //性别
        cout <<"请输入性别"<< endl;
        cout <<"1--男"<< endl;
        cout <<"2--女"<< endl;
        int sex = 0;

        while (true)
        {
            cin >> sex;
        if(sex == 1 || sex == 2)
           {

            abs->personArray[ret].m_Sex = sex;
            break;
           }
           cout <<"输入有误，请重新输入"<< endl;
        }




        //年龄
        cout <<"请输入年龄:"<<endl;
        int age = 0;
        cin >> age ;
        abs->personArray[ret].m_Age = age;



        //电话
        cout << "请输入联系电话:" << endl;
        string phone;
        cin >> phone;
        abs->personArray[ret].m_Phone = phone;

        //住址
        cout << "请输入住址: " << endl;
        string address;
        cin >> address;
        abs->personArray[ret].m_Addr = address;

        cout << "修改成功" << endl;
    }
    else//未找到
    {
        cout <<"查无此人"<< endl;
    }
    system("pause");
    system("cls");

}

//6.清空联系人
void cleanPerson(Addressbooks * abs)
{
    abs->m_Size = 0;
    //逻辑上清空操作
    cout << "通讯录已清空" << endl;
    system("pause");
    system("cls");//清空屏幕

}


void showMenu()
{
    cout << "¤¤¤¤**************¤¤¤¤" << endl;
    cout << "¤¤¤¤*1.添加联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*2.显示联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*3.删除联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*4.查找联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*5.修改联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*6.清空联系人*¤¤¤¤" << endl;
    cout << "¤¤¤¤*0.退出通讯录*¤¤¤¤" << endl;
    cout << "¤¤¤¤**************¤¤¤¤" << endl;

}

int main()
{
    //创建通讯录结构体变量
    Addressbooks abs;
    //初始化通讯录当前人员个数
    abs.m_Size = 0;




    //创建输入变量
    int select = 0;

    while(true)
    {

    //菜单调用
    showMenu();
    cin >> select;
    switch(select)
        {
        //用户对菜单的点击（1.2.3.4.5.6.0）
        case 1://1.添加联系人
            addPerson(&abs);//(&地址传递 修改实参)
            break;
        case 2://.显示联系人
            showPerson(&abs);
            break;
        case 3://3.删除联系人
            deletePerson(&abs);
            break;
        case 4://4.查找联系人
            findPerson(&abs);
            break;
        case 5://5.修改联系人
            modifyPerson(&abs);
            break;
        case 6://6.清空联系人
            cleanPerson(&abs);
            break;
        case 0://0.退出通讯录
            cout <<"欢迎下次使用" << endl;
            //system("pause")
            return 0;
            break;


        default:
            break;

        }

     }
     return 0;
}
