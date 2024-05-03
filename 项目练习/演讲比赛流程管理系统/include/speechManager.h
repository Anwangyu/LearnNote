
#pragma once
#include <iostream>
using namespace std;
#include <map>
#include "speaker.h"
#include <algorithm>
#include <vector>
//设计演讲管理类
class SpeechManager
{
public:
    //构造函数
    SpeechManager();

    //展示菜单
    void show_Menu();

    //初始化属性
    void initSpeech();

    //退出系统
    void exitSystem();

    //析构函数
    ~SpeechManager();

    //初始化创建12名选手
    void createSpeaker();

    //开始比赛 - 比赛流程控制
    void startSpeech();

    //成员属性
    //保存第一轮比赛选手标号容器
    vector<int>v1;

    //第一轮晋级选手编号容器
    vector<int>v2;

    //胜出前三名选手编号容器
    vector<int>vVictory;

    //存放编号以及对应具体选手容器
    map<int,Speaker>m_Speaker;

    //抽签
    void speechDraw();



    //存放比赛轮数
    int m_Index;


};
