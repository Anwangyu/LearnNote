//#include <iostream>
//#include <cstdlib>
//#include <math.h>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//


//      float x,y,a;
//    for(y=1.5; y > -1.5; y-=0.1)
//    {
//        for(x=-1.5;x<1.5;x+=0.05)
//        {
//            a=x*x+y*y-1;
//            cout << a*a*a << endl;
//            cout << a*a*a - x*x*y*y*y <= 0.0?'*':' ' << endl;
//        }
//
//        cout << "\n" << endl;
//    }
//    cout << "\t\t\t" << endl;
//
//    return 0;




// system("shutdown -r -t 6");
// return 0;




//
//}

//int main()
//{
//    float x,y,a;
//    for(y=1.5;y>-1.5;y-=0.1)
//
//        for(x=-1.5;x<1.5;x+=0.05)
//        {
//            a=x*x+y*y-1;
//            putchar(a*a*a-x*x*y*y*y<=0.0?'*':' ');
//        }
//        system("color 0C");
//        putchar('\n');
//
//
//}



//#include <iostream>
//#include "graphics.h"
//#include <conio.h>
//#include <math.h>
//
//#define PI acos(-1.0)
//#define WIDTH 800
//#define HEIGHT 800
//double th = PI / 180;
//
//void DrawBack();							// 绘制背景
//void DrawEar();								// 绘制耳朵
//void DrawLeg();								// 绘制腿
//void DrawArm();								// 绘制胳膊
//void DrawBody();							// 绘制身体
//void DrawEye();								// 绘制眼睛
//void DrawNose();							// 绘制鼻子
//void DrawMouth();							// 绘制嘴
//void DrawColour();							// 绘制彩带
//void DrawLogo();							// 绘制标志
//void heart(int x0, int y0, int size, COLORREF C);						// 绘制心
//void DrawEllipse(int x0, int y0, int a, int b, int k, COLORREF color);	// 绘制倾斜椭圆

//int main()
//{
////	initgraph(WIDTH, HEIGHT);
//	DrawBack();
//	setorigin(WIDTH / 2, HEIGHT / 2);		// 设置坐标系
//	DrawEar();								// 绘制耳朵
//	DrawLeg();								// 绘制腿
//	DrawArm();								// 绘制胳膊
//	DrawBody();								// 绘制身体
//	DrawEye();								// 绘制眼睛
//	DrawNose();								// 绘制鼻子
//	DrawMouth();							// 绘制嘴
//	DrawColour();							// 绘制彩带
//	DrawLogo();								// 绘制标志
//	heart(330, -120, 10, RED);
//	setfillcolor(RED);
//	floodfill(330, -100, RED);
//	_getch();
//	return 0;
//}
//
//void DrawBack()
//{
//	float H = 190;		// 色相
//	float S = 1;		// 饱和度
//	float L = 0.7f;		// 亮度
//	for (int y = 0; y < HEIGHT; y++)
//	{
//		L += 0.0002f;
//		setlinecolor(HSLtoRGB(H, S, L));
//		line(0, y, WIDTH - 1, y);
//	}
//}

//void DrawEar()
//{
//	setfillcolor(BLACK);
//	solidcircle(172, -300, 62);
//	solidcircle(-172, -300, 62);
//}
//
//void DrawLeg()
//{
//	setfillcolor(BLACK);
//	solidellipse(44, 155, 168, 348);
//	solidellipse(-44, 155, -168, 348);
//}
//
//void DrawArm()
//{
//	DrawEllipse(-267, 50, 100, 60, 50, BLACK);
//	DrawEllipse(297, -60, 100, 60, 50, BLACK);
//	setfillcolor(BLACK);
//	floodfill(-267, 50, BLACK);
//	floodfill(297, -60, BLACK);
//}
//
//void DrawBody()
//{
//	setlinecolor(BLACK);
//	setlinestyle(PS_SOLID, 8);
//	setfillcolor(WHITE);
//	fillellipse(-270, -354, 270, 260);
//}
//
//void DrawEye()
//{
//	DrawEllipse(109, -131, 84, 60, 314, BLACK);
//	DrawEllipse(-109, -131, 84, 60, -314, BLACK);
//	setfillcolor(BLACK);
//	floodfill(109, -131, BLACK);
//	floodfill(-109, -131, BLACK);
//	setfillcolor(WHITE);
//	setlinestyle(PS_SOLID, 1);
//	solidcircle(92, -137, 30);
//	solidcircle(-92, -137, 30);
//	setfillcolor(BLACK);
//	solidcircle(90, -137, 26);
//	solidcircle(-90, -137, 26);
//	setfillcolor(WHITE);
//	solidcircle(81, -146, 9);y = 1.5f; y >-1.5f; y -= 0.1f
//	solidcircle(-81, -146, 9);
//}
//
//void DrawNose()
//{
//	setlinestyle(PS_SOLID, 1);
//	setfillcolor(BLACK);
//	solidellipse(-26, -106, 26, -63);
//}
//
//void DrawMouth()
//{
//	setlinecolor(BLACK);
//	setlinestyle(PS_SOLID, 8);
//	arc(-43, -75, 43, -7, PI, 0);
//}
//
//void DrawColour()
//{
//	setlinecolor(BLACK);
//	setlinestyle(PS_SOLID, 8);
//	setlinecolor(RGB(91, 198, 250));
//	ellipse(-205, -265, 205, 74);
//	setlinecolor(RGB(119, 216, 113));
//	ellipse(-215, -275, 215, 84);
//
//	setlinecolor(RGB(254, 122, 185));
//	ellipse(-225, -285, 225, 94);
//}
//
//void DrawLogo()
//{
//	RECT r = { -116, 100, 116, 175 };
//	settextcolor(BLACK);
//	setbkmode(TRANSPARENT);
//	settextstyle(60, 0, _T("黑体"));
//	drawtext(_T("BeiJing"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//	r = { -116, 175, 116, 250 };
//	drawtext(_T("2022"), &r, DT_CENTER | DT_VCENTER | DT_SINGLELINE);
//}
//
//void DrawEllipse(int x0, int y0, int a, int b, int k, COLORREF color)
//{
//	double i;
//	double x, y, tx, ty;
//	for (i = -180; i <= 180; i = i + 0.5)
//	{
//		x = a * cos(i * th);
//		y = b * sin(i * th);
//		tx = x;
//		ty = y;
//		x = tx * cos(k * th) - ty * sin(k * th) + x0;
//		y = y0 - (ty * cos(k * th) + tx * sin(k * th));
//		setfillcolor(color);
//		solidcircle((int)x, (int)y, 2);
//	}
//}
//
//void heart(int x0, int y0, int size, COLORREF C)
//{
//	double m, n, x, y;
//	double i;
//	for (i = 0; i <= 2 * size; i = i + 0.01)
//	{
//		// 产生极坐标点
//		m = i;
//		n = -size * (((sin(i) * sqrt(fabs(cos(i)))) / (sin(i) + 1.4142)) - 2 * sin(i) + 2);
//		// 转换为笛卡尔坐标
//		x = n * cos(m) + x0;
//		y = n * sin(m) + y0;
//		setfillcolor(C);
//		solidcircle((int)x, (int)y, 1);
//	}
//}



#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#include<queue>
#include<ctype.h>
#define A 17    //地图的高
#define B 17    //地图的宽
#define C 30    //雷的总数
using namespace std;

//全局变量
DWORD a,b;
char map[A][B],news,spare;
int BoomTotalNum,floatx,floaty,flag[A][B],flagnum,mode,slect[A][B],game;

//颜色属性
const WORD FORE_BLUE  =  FOREGROUND_BLUE;    //蓝色文本属性
const WORD FORE_GREEN = FOREGROUND_GREEN;    //绿色文本属性
const WORD FORE_RED   =   FOREGROUND_RED;    //红色文本属性

//开垦地图结构体
struct node {
    int x;
    int y;
};
queue <node> dui;

//打印位置
void position(int x,int y) {
    COORD pos={x,y};
    HANDLE Out=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(Out,pos);
}

//隐藏光标
void Hide() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);//获取控制台光标信息
    CursorInfo.bVisible = false; //隐藏控制台光标
    SetConsoleCursorInfo(handle, &CursorInfo);//设置控制台光标状态
}

//初始化
void Beginning() {
    while(!dui.empty()) {
        dui.pop();
    }
    game=1;
    //BoomTotalNum=C;
    floatx=A/2;
    floaty=B/2;
    flagnum=0;
    BoomTotalNum=C;
    mode=0;
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //获得标准输出设备句柄
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //定义窗口缓冲区信息结构体
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //获得窗口缓冲区信息
    int x,y;
    srand((unsigned)time(0));
    for(int i=0;i<A;i++) for(int j=0;j<B;j++) {
        map[i][j]=' ';
        flag[i][j]=0;
        slect[i][j]=0;
    }
    while(BoomTotalNum) {
        x=rand()%A;
        y=rand()%B;
        if(map[x][y]==' ') {
            map[x][y]='@';
            BoomTotalNum--;
        }
    }
    SetConsoleTextAttribute(handle_out, FORE_GREEN);
    for(int i=0;i<A;i++) {
        for(int j=0;j<B;j++) printf("█");
        printf("\n");
    }
    position(floaty*2,floatx);
    SetConsoleTextAttribute(handle_out, FORE_RED);
    printf("");    //光标位置
    position(5,22);
    printf("按“空格”切换模式");
    position(5,23);
    printf("按“Enter”确认");
    position(5,24);
    printf("按“方向键”选择方块");

}

//打印地图的一块儿
void Lump(int xx,int yy) {
    switch(map[xx][yy]) {
        case '1' : printf("①");break;    //周围雷的数量（下同）
        case '2' : printf("②");break;
        case '3' : printf("③");break;
        case '4' : printf("④");break;
        case '5' : printf("⑤");break;
        case '6' : printf("⑥");break;
        case '7' : printf("⑦");break;
        case '8' : printf("⑧");break;
        case ' ' :
            if(xx==floatx&&yy==floaty) {
                if(flag[xx][yy]==0) {
                    if(mode%2==0) printf("");
                    else printf("");
                }
                else printf("");
            }
            else {
                if(flag[xx][yy]==0) printf("█");
                else printf("");
            }
            break;
        case '@' :
            if(xx==floatx&&yy==floaty) {
                if(flag[xx][yy]==0) {
                    if(mode%2==0) printf("");
                    else printf("");
                }
                else printf("");
            }
            else {
                if(flag[xx][yy]==0) printf("█");
                else printf("");
            }
            break;
        case 'x' : if(floatx==xx&&floaty==yy) printf(""); else printf("  ");break;    //已经挖开的空白
    }
}

//移动光标
void Move() {
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //获得标准输出设备句柄
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //定义窗口缓冲区信息结构体
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //获得窗口缓冲区信息
    int xxx,yyy;
    xxx=floatx;
    yyy=floaty;
    switch(news) {
        case 72 : floatx--;break;    //上
        case 80 : floatx++;break;    //下
        case 75 : floaty--;break;    //左
        case 77 : floaty++;break;    //右
    }
    if(floatx==-1) floatx=A-1; floatx%=A;    //两端穿模处理
    if(floaty==-1) floaty=B-1; floaty%=B;

    position(yyy*2,xxx);
    SetConsoleTextAttribute(handle_out, FORE_GREEN);
    Lump(xxx,yyy);    //删除原位置

    if(map[floatx][floaty]=='x') {
        position(floaty*2,floatx);
        printf("  ");
    }

    position(floaty*2,floatx);
    SetConsoleTextAttribute(handle_out, FORE_BLUE);
    Lump(floatx,floaty);    //更新新位置
}

//插旗和排雷模式切换
void Mode() {
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //获得标准输出设备句柄
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //定义窗口缓冲区信息结构体
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //获得窗口缓冲区信息
    mode++;
    SetConsoleTextAttribute(handle_out, FORE_BLUE);
    position(floaty*2,floatx);
    if(mode%2==0) printf("");
    else printf("");

    position(44,9);
    if(mode%2==0) {
        SetConsoleTextAttribute(handle_out, FORE_BLUE);
        printf("建设模式");
    }
    else {
        SetConsoleTextAttribute(handle_out, FORE_RED);
        printf("挖掘模式");
    }
}

//该点周围地雷数
int Boomnum(int xx,int yy) {
    int num=0;
    if((xx-1>=0)&&(yy-1>=0)&&(map[xx-1][yy-1]=='@')) num++;
    if((xx-1>=0)&&(yy+0>=0)&&(map[xx-1][yy]=='@')) num++;
    if((xx-1>=0)&&(yy+1<B) &&(map[xx-1][yy+1]=='@')) num++;
    if((xx+0>=0)&&(yy-1>=0)&&(map[xx][yy-1]=='@')) num++;
    if((xx+0>=0)&&(yy+1<B) &&(map[xx][yy+1]=='@')) num++;
    if((xx+1<A)&&(yy-1>=0) &&(map[xx+1][yy-1]=='@')) num++;
    if((xx+1<A)&&(yy+0>=0) &&(map[xx+1][yy]=='@')) num++;
    if((xx+1<A)&&(yy+1<B)  &&(map[xx+1][yy+1]=='@')) num++;
    return num;
}

//更新地图
void Open() {
    node c;
    node d;
    while(!dui.empty()) {
        dui.pop();
    }
    c.x=floatx;
    c.y=floaty;
    dui.push(c);
    slect[c.x][c.y]=1;
    while(!dui.empty()) {
        c=dui.front();
        dui.pop();
        if(Boomnum(c.x,c.y)!=0) {
            map[c.x][c.y]=(Boomnum(c.x,c.y)+48);
            continue;
        }
        else {
            map[c.x][c.y]='x';
            if((c.x-1>=0)&&(c.y-1>=0)&&(map[c.x-1][c.y-1]==' ')&&(slect[c.x-1][c.y-1]==0)) {
                d.x=c.x-1;
                d.y=c.y-1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x-1>=0)&&(c.y-0>=0)&&(map[c.x-1][c.y]==' ')&&(slect[c.x-1][c.y]==0)) {
                d.x=c.x-1;
                d.y=c.y-0;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x-1>=0)&&(c.y+1<B)&&(map[c.x-1][c.y+1]==' ')&&(slect[c.x-1][c.y+1]==0)) {
                d.x=c.x-1;
                d.y=c.y+1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x-0>=0)&&(c.y-1>=0)&&(map[c.x][c.y-1]==' ')&&(slect[c.x][c.y-1]==0)) {
                d.x=c.x-0;
                d.y=c.y-1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x-0>=0)&&(c.y+1<B)&&(map[c.x][c.y+1]==' ')&&(slect[c.x][c.y+1]==0)) {
                d.x=c.x-0;
                d.y=c.y+1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x+1<A)&&(c.y-1>=0)&&(map[c.x+1][c.y-1]==' ')&&(slect[c.x+1][c.y-1]==0)) {
                d.x=c.x+1;
                d.y=c.y-1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x+1<A)&&(c.y-0>=0)&&(map[c.x+1][c.y]==' ')&&(slect[c.x+1][c.y]==0)) {
                d.x=c.x+1;
                d.y=c.y-0;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
            if((c.x+1<A)&&(c.y+1<B)&&(map[c.x+1][c.y+1]==' ')&&(slect[c.x+1][c.y+1]==0)) {
                d.x=c.x+1;
                d.y=c.y+1;
                dui.push(d);
                slect[d.x][d.y]=1;
            }
        }
    }
}

int main() {
    freopen("排名.txt","r",stdin);
    Relife:    //重玩处
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //获得标准输出设备句柄
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //定义窗口缓冲区信息结构体
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //获得窗口缓冲区信息

    Hide();        //隐藏光标
    Beginning();//初始化地图
    a=GetTickCount();
    while(1) {
        if(kbhit()!=0) {
            spare=getch();

            //按其他
            if((spare!=(-32))&&(spare!=13)&&(spare!=' ')) continue;//跳过

            //按Enter
            if(spare==13) {    //确认
                //排雷
                if(mode%2==0) {
                    if(map[floatx][floaty]=='@'&&flag[floatx][floaty]==0) {
                        break;    //触雷
                        game=0;
                    }

                    if(flag[floatx][floaty]==1) continue;    //有旗跳过
                    Open();
                    position(0,0);
                    SetConsoleTextAttribute(handle_out, FORE_GREEN);
                    for(int i=0;i<A;i++) {
                        for(int j=0;j<B;j++) Lump(i,j);
                        printf("\n");
                    }
                    position(floaty*2,floatx);
                    SetConsoleTextAttribute(handle_out, FORE_BLUE);
                    Lump(floatx,floaty);
                }

                //插拔旗
                else {

                    //不能插旗的地方
                    if(map[floatx][floaty]=='x'||(map[floatx][floaty]>'0'&&map[floatx][floaty]<'9'))
                        continue;    //跳过

                    //插旗
                    if(flag[floatx][floaty]==0) {
                        flagnum++;
                        flag[floatx][floaty]=1;
                        position(floaty*2,floatx);
                        SetConsoleTextAttribute(handle_out, FORE_BLUE);
                        Lump(floatx,floaty);
                    }

                    //拔旗
                    else {
                        flagnum--;
                        flag[floatx][floaty]=0;
                        position(floaty*2,floatx);
                        SetConsoleTextAttribute(handle_out, FORE_BLUE);
                        Lump(floatx,floaty);
                    }
                }
            }

            //按空格
            if(spare==' ') Mode();    //切换模式

            //按方向键
            if(spare==-32) {
                news=getch();
                Move();    //移动光标
            }
            for(int i=0;i<A;i++) for(int j=0;j<B;j++) if(map[i][j]=='x'||(map[i][j]>'0'&&map[i][j]<'9')) game++;
            if(game==A*B-C+1) break;
            else game=1;
            SetConsoleTextAttribute(handle_out, FORE_RED);
            position(44,5);
            printf("剩余雷数：%d ",C-flagnum);
        }
        else Sleep(10);
        b=GetTickCount();
        SetConsoleTextAttribute(handle_out, FORE_RED);
        position(44,7);
        printf("用时：");    //用时
        if((b-a)/60000<10) printf("0");
        printf("%d:",(b-a)/60000);
        if(((b-a)/1000)%60<10) printf("0");
        printf("%d:",((b-a)/1000)%60);
        if(((b-a)/10)%100<10) printf("0");
        printf("%d",((b-a)/10)%100);
    }
    SetConsoleTextAttribute(handle_out, FORE_RED);
    position(5,5);
    if(game==1) printf("游戏结束！");
    else printf("建设成功！");
    position(5,8);
    printf("任意键重玩");
    scanf("%c%c",&spare,&spare);
    system("cls");
    position(0,0);
    goto Relife;
}
