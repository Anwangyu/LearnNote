
#pragma once
#include <iostream>
using namespace std;
#include <map>
#include "speaker.h"
#include <algorithm>
#include <vector>
//����ݽ�������
class SpeechManager
{
public:
    //���캯��
    SpeechManager();

    //չʾ�˵�
    void show_Menu();

    //��ʼ������
    void initSpeech();

    //�˳�ϵͳ
    void exitSystem();

    //��������
    ~SpeechManager();

    //��ʼ������12��ѡ��
    void createSpeaker();

    //��ʼ���� - �������̿���
    void startSpeech();

    //��Ա����
    //�����һ�ֱ���ѡ�ֱ������
    vector<int>v1;

    //��һ�ֽ���ѡ�ֱ������
    vector<int>v2;

    //ʤ��ǰ����ѡ�ֱ������
    vector<int>vVictory;

    //��ű���Լ���Ӧ����ѡ������
    map<int,Speaker>m_Speaker;

    //��ǩ
    void speechDraw();



    //��ű�������
    int m_Index;


};
