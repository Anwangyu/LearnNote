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
//void DrawBack();							// ���Ʊ���
//void DrawEar();								// ���ƶ���
//void DrawLeg();								// ������
//void DrawArm();								// ���Ƹ첲
//void DrawBody();							// ��������
//void DrawEye();								// �����۾�
//void DrawNose();							// ���Ʊ���
//void DrawMouth();							// ������
//void DrawColour();							// ���Ʋʴ�
//void DrawLogo();							// ���Ʊ�־
//void heart(int x0, int y0, int size, COLORREF C);						// ������
//void DrawEllipse(int x0, int y0, int a, int b, int k, COLORREF color);	// ������б��Բ

//int main()
//{
////	initgraph(WIDTH, HEIGHT);
//	DrawBack();
//	setorigin(WIDTH / 2, HEIGHT / 2);		// ��������ϵ
//	DrawEar();								// ���ƶ���
//	DrawLeg();								// ������
//	DrawArm();								// ���Ƹ첲
//	DrawBody();								// ��������
//	DrawEye();								// �����۾�
//	DrawNose();								// ���Ʊ���
//	DrawMouth();							// ������
//	DrawColour();							// ���Ʋʴ�
//	DrawLogo();								// ���Ʊ�־
//	heart(330, -120, 10, RED);
//	setfillcolor(RED);
//	floodfill(330, -100, RED);
//	_getch();
//	return 0;
//}
//
//void DrawBack()
//{
//	float H = 190;		// ɫ��
//	float S = 1;		// ���Ͷ�
//	float L = 0.7f;		// ����
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
//	settextstyle(60, 0, _T("����"));
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
//		// �����������
//		m = i;
//		n = -size * (((sin(i) * sqrt(fabs(cos(i)))) / (sin(i) + 1.4142)) - 2 * sin(i) + 2);
//		// ת��Ϊ�ѿ�������
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
#define A 17    //��ͼ�ĸ�
#define B 17    //��ͼ�Ŀ�
#define C 30    //�׵�����
using namespace std;

//ȫ�ֱ���
DWORD a,b;
char map[A][B],news,spare;
int BoomTotalNum,floatx,floaty,flag[A][B],flagnum,mode,slect[A][B],game;

//��ɫ����
const WORD FORE_BLUE  =  FOREGROUND_BLUE;    //��ɫ�ı�����
const WORD FORE_GREEN = FOREGROUND_GREEN;    //��ɫ�ı�����
const WORD FORE_RED   =   FOREGROUND_RED;    //��ɫ�ı�����

//���ѵ�ͼ�ṹ��
struct node {
    int x;
    int y;
};
queue <node> dui;

//��ӡλ��
void position(int x,int y) {
    COORD pos={x,y};
    HANDLE Out=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(Out,pos);
}

//���ع��
void Hide() {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);//��ȡ����̨�����Ϣ
    CursorInfo.bVisible = false; //���ؿ���̨���
    SetConsoleCursorInfo(handle, &CursorInfo);//���ÿ���̨���״̬
}

//��ʼ��
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
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //��ñ�׼����豸���
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //���崰�ڻ�������Ϣ�ṹ��
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //��ô��ڻ�������Ϣ
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
        for(int j=0;j<B;j++) printf("��");
        printf("\n");
    }
    position(floaty*2,floatx);
    SetConsoleTextAttribute(handle_out, FORE_RED);
    printf("��");    //���λ��
    position(5,22);
    printf("�����ո��л�ģʽ");
    position(5,23);
    printf("����Enter��ȷ��");
    position(5,24);
    printf("�����������ѡ�񷽿�");

}

//��ӡ��ͼ��һ���
void Lump(int xx,int yy) {
    switch(map[xx][yy]) {
        case '1' : printf("��");break;    //��Χ�׵���������ͬ��
        case '2' : printf("��");break;
        case '3' : printf("��");break;
        case '4' : printf("��");break;
        case '5' : printf("��");break;
        case '6' : printf("��");break;
        case '7' : printf("��");break;
        case '8' : printf("��");break;
        case ' ' :
            if(xx==floatx&&yy==floaty) {
                if(flag[xx][yy]==0) {
                    if(mode%2==0) printf("��");
                    else printf("��");
                }
                else printf("��");
            }
            else {
                if(flag[xx][yy]==0) printf("��");
                else printf("��");
            }
            break;
        case '@' :
            if(xx==floatx&&yy==floaty) {
                if(flag[xx][yy]==0) {
                    if(mode%2==0) printf("��");
                    else printf("��");
                }
                else printf("��");
            }
            else {
                if(flag[xx][yy]==0) printf("��");
                else printf("��");
            }
            break;
        case 'x' : if(floatx==xx&&floaty==yy) printf("��"); else printf("  ");break;    //�Ѿ��ڿ��Ŀհ�
    }
}

//�ƶ����
void Move() {
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //��ñ�׼����豸���
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //���崰�ڻ�������Ϣ�ṹ��
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //��ô��ڻ�������Ϣ
    int xxx,yyy;
    xxx=floatx;
    yyy=floaty;
    switch(news) {
        case 72 : floatx--;break;    //��
        case 80 : floatx++;break;    //��
        case 75 : floaty--;break;    //��
        case 77 : floaty++;break;    //��
    }
    if(floatx==-1) floatx=A-1; floatx%=A;    //���˴�ģ����
    if(floaty==-1) floaty=B-1; floaty%=B;

    position(yyy*2,xxx);
    SetConsoleTextAttribute(handle_out, FORE_GREEN);
    Lump(xxx,yyy);    //ɾ��ԭλ��

    if(map[floatx][floaty]=='x') {
        position(floaty*2,floatx);
        printf("  ");
    }

    position(floaty*2,floatx);
    SetConsoleTextAttribute(handle_out, FORE_BLUE);
    Lump(floatx,floaty);    //������λ��
}

//���������ģʽ�л�
void Mode() {
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //��ñ�׼����豸���
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //���崰�ڻ�������Ϣ�ṹ��
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //��ô��ڻ�������Ϣ
    mode++;
    SetConsoleTextAttribute(handle_out, FORE_BLUE);
    position(floaty*2,floatx);
    if(mode%2==0) printf("��");
    else printf("��");

    position(44,9);
    if(mode%2==0) {
        SetConsoleTextAttribute(handle_out, FORE_BLUE);
        printf("����ģʽ");
    }
    else {
        SetConsoleTextAttribute(handle_out, FORE_RED);
        printf("�ھ�ģʽ");
    }
}

//�õ���Χ������
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

//���µ�ͼ
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
    freopen("����.txt","r",stdin);
    Relife:    //���洦
    HANDLE handle_out = GetStdHandle(STD_OUTPUT_HANDLE);    //��ñ�׼����豸���
    CONSOLE_SCREEN_BUFFER_INFO csbi;                        //���崰�ڻ�������Ϣ�ṹ��
    GetConsoleScreenBufferInfo(handle_out, &csbi);          //��ô��ڻ�������Ϣ

    Hide();        //���ع��
    Beginning();//��ʼ����ͼ
    a=GetTickCount();
    while(1) {
        if(kbhit()!=0) {
            spare=getch();

            //������
            if((spare!=(-32))&&(spare!=13)&&(spare!=' ')) continue;//����

            //��Enter
            if(spare==13) {    //ȷ��
                //����
                if(mode%2==0) {
                    if(map[floatx][floaty]=='@'&&flag[floatx][floaty]==0) {
                        break;    //����
                        game=0;
                    }

                    if(flag[floatx][floaty]==1) continue;    //��������
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

                //�����
                else {

                    //���ܲ���ĵط�
                    if(map[floatx][floaty]=='x'||(map[floatx][floaty]>'0'&&map[floatx][floaty]<'9'))
                        continue;    //����

                    //����
                    if(flag[floatx][floaty]==0) {
                        flagnum++;
                        flag[floatx][floaty]=1;
                        position(floaty*2,floatx);
                        SetConsoleTextAttribute(handle_out, FORE_BLUE);
                        Lump(floatx,floaty);
                    }

                    //����
                    else {
                        flagnum--;
                        flag[floatx][floaty]=0;
                        position(floaty*2,floatx);
                        SetConsoleTextAttribute(handle_out, FORE_BLUE);
                        Lump(floatx,floaty);
                    }
                }
            }

            //���ո�
            if(spare==' ') Mode();    //�л�ģʽ

            //�������
            if(spare==-32) {
                news=getch();
                Move();    //�ƶ����
            }
            for(int i=0;i<A;i++) for(int j=0;j<B;j++) if(map[i][j]=='x'||(map[i][j]>'0'&&map[i][j]<'9')) game++;
            if(game==A*B-C+1) break;
            else game=1;
            SetConsoleTextAttribute(handle_out, FORE_RED);
            position(44,5);
            printf("ʣ��������%d ",C-flagnum);
        }
        else Sleep(10);
        b=GetTickCount();
        SetConsoleTextAttribute(handle_out, FORE_RED);
        position(44,7);
        printf("��ʱ��");    //��ʱ
        if((b-a)/60000<10) printf("0");
        printf("%d:",(b-a)/60000);
        if(((b-a)/1000)%60<10) printf("0");
        printf("%d:",((b-a)/1000)%60);
        if(((b-a)/10)%100<10) printf("0");
        printf("%d",((b-a)/10)%100);
    }
    SetConsoleTextAttribute(handle_out, FORE_RED);
    position(5,5);
    if(game==1) printf("��Ϸ������");
    else printf("����ɹ���");
    position(5,8);
    printf("���������");
    scanf("%c%c",&spare,&spare);
    system("cls");
    position(0,0);
    goto Relife;
}
