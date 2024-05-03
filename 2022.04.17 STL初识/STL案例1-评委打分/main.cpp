#include <iostream>

#include <deque>
#include <vector>
#include <algorithm>
#include <string>
#include <ctime>
using namespace std;
/*
案例描述：
有五名选手:选手ABCDE，10个评委分别对每一名选手打分，去除最高分和最低分，取平均分

实现步骤：
创建5名选手，放到vector中
遍历vector容器，取出来每一个选手，执行for循环，可以把10个评分打分存到deque容器中
sort算法对deque容器分数进行排序，去除最高和最低
deque容器遍历一遍，累加总分
获取平均分

*/
//选手类
class Person
{
public:
    Person(string name, int score)
    {
        this->m_Name = name;
        this->m_Score = score;
    }

    string m_Name; //姓名
    int m_Score; //平均分



};

void createPerson(vector<Person>&v)
{
    string nameSeed = "ABCDE";
    for(int i = 0; i < 5; i++)
    {
        string name = "选手";
        name += nameSeed[i]; //追加

        int score = 0;

        Person p(name ,score);

        //将创建的Person对象放入到容器中
        v.push_back(p);
    }

}

//打分
void setScore(vector<Person>&v)
{
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        //将评委的分数放到deque中
        deque<int>d;
        for(int i = 0; i < 10 ; i++)
        {
            int score = rand()%41 + 60; //60-100  前边的是一个 后边单独是60
            d.push_back(score);

        }

//        cout << "选手：" << it->m_Name << "打分：" <<endl;
//        for(deque<int>::iterator dit = d.begin(); dit != d.end(); dit++)
//        {
//            cout << *dit << " ";
//        }
//        cout << endl;

        //排序
        sort(d.begin(),d.end());

        //去除最高最低分
        d.pop_back();
        d.pop_front();

        //取平均分
        int sum = 0;

        for(deque<int>::iterator dit = d.begin();dit != d.end();dit++ )
        {
            sum += *dit; //累加每个评委的得分
        }

        int avg = sum / d.size();

        //将平均分赋值给选手身上

        it->m_Score = avg;

    }
}

void showScore(vector<Person>&v)
{
    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << "选手: " << it->m_Name << "平均分：" << it->m_Score << endl;
    }
}

int main()
{
    //随机数种子
    srand((unsigned int)time(NULL));

    //1.创建5名选手
    vector<Person>v;//存放选手的容器
    createPerson(v);

//    //测试
//    for(vector<Person>::iterator it = v.begin(); it != v.end(); it++)
//    {
//        cout << "姓名：" <<(*it).m_Name << " 分数：" << (*it).m_Score << endl;
//    }

    //2.打分
    setScore(v);

    //3.显示最后得分


    showScore(v);


    return 0;
}
