#include "speechManager.h"
#include <stdio.h>
#include <string>
#include <stdlib.h>

//构造函数
SpeechManager::SpeechManager()
{
    //初始化属性
    this->initSpeech();

    //创建12名选手
    this->createSpeaker();

}

//展示菜单
void SpeechManager::show_Menu()
{
    cout << "********************************" << endl;
    cout << "******* 欢迎参加演讲比赛 *******" << endl;
    cout << "******* 1.开始演讲比赛 *********" << endl;
    cout << "******* 2.查看往届记录 *********" << endl;
    cout << "******* 3.清空比赛记录 *********" << endl;
    cout << "******* 0.退出比赛程序 *********" << endl;
    cout << "********************************" << endl;
    cout << endl;
}


//退出系统
void SpeechManager::exitSystem()
{
    cout << "欢迎下次使用" << endl;
    system("cls");
    exit(0);
}


//初始化创建12名选手
void SpeechManager::createSpeaker()
{
    string nameSeed = "ABCDEFGHIJKL";
    for(int i = 0;i < nameSeed.size();i++)
    {
        string name = "选手";
        name += nameSeed[i];

        Speaker sp;
        sp.m_Name = name;
        for(int j = 0;j<2;j++)
        {
            sp.m_Score[j] = 0;
        }
        //12名选手编号
        this->v1.push_back(i + 10001);

        //选手编号以及对应的对手 存放到map容器中
        this->m_Speaker.insert(make_pair(i + 10001,sp));


    }
}


//初始化
void SpeechManager::initSpeech()
{
    //保证容器置空
    this->v1.clear();
    this->v2.clear();
    this->vVictory.clear();
    this->m_Speaker.clear();

    //初始化比赛轮数
    this->m_Index = 1;

}

//比赛流程控制 开始比赛
void SpeechManager::startSpeech()
{
    //开始第一轮


    //抽签
    this->speechDraw();
    //比赛

    //显示晋级结果

    //第二轮比赛


    //抽签


    //比赛

    //最终结果

    //显示最终结果
}

//抽签
void SpeechManager::speechDraw()
{

    cout <<"第<<" << this->m_Index << ">> 轮选手正在抽签" << endl;
    cout << "------------------" << endl;
    cout << "抽签后演讲顺序如下：" << endl;

    if(this->m_Index == 1)
    {
        //第一轮
        random_shuffle(v1.begin(),v1.end());
        for(vector<int>::iterator it = v1.begin();it!= v1.end();it++)
        {
            cout <<*it << " ";

        }
        cout << endl;

    }
    else
    {
        //第二轮
        random_shuffle(v2.begin(),v2.end());
        for(vector<int>::iterator it = v2.begin();it!= v2.end();it++)
        {
            cout <<*it << " ";

        }
        cout << endl;
    }
     cout << "------------------" << endl;
     system("pause");
     cout << endl;

}

//析构函数
SpeechManager::~SpeechManager()
{

}
