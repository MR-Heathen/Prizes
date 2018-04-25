#include <graphics.h>		// 引用 EasyX 图形库
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "myGraphics.h"		//自定义函数库，图形
#include "myFeatures.h"		//自定义函数库，功能

#define IDC_HAND  MAKEINTRESOURCE(32649)
int youcant=0;
int numbers;
double countdown=6;			//用于计时
char ff[50];
void numberis();
void themychange();			
void thecolorchange();		//改变周围小圆的颜色
void jianpan();
void f();

void Smallround();			//默认周围小圆的颜色
void Features();			

DWORD WINAPI ThreadProc1( LPVOID lpParam ) 
{
	MOUSEMSG m;		// 定义鼠标消息
	while(true)
	{

	m = GetMouseMsg();	// 获取一条鼠标消息 
	
	if(m.x>=405 && m.x<=555 && m.y>=315 && m.y<=435){
	HCURSOR hcur = LoadCursor(NULL,IDC_HAND);		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// 设置窗口类的鼠标样式
	if(m.uMsg==WM_LBUTTONDOWN){
	numberis();
	thecolorchange();
	youcant=1;
	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// 设置窗口类的鼠标样式

	return 0;
	}else if(m.uMsg==WM_RBUTTONUP){
	numberis();
	thecolorchange();
	youcant=1;
	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// 设置窗口类的鼠标样式

	return 0;
	}
	}else{

	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// 加载系统预置的鼠标样式
	HWND hwnd = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// 设置窗口类的鼠标样式

	}
	}
	return 0;
	
}
DWORD WINAPI ThreadProc2( LPVOID lpParam ) 
{

	int time=100;
	sleeptime(time);


	Graph1();
	sleeptime(time);
	Graph1();
	time+=50;								//一点五秒一圈
	sleeptime(time);
	Graph1();

	time+=50;								//两秒一圈
	sleeptime(time);
	Graph1();
	
	time+=50;
	setfillcolor(RGB(255,252,149));				//扇形1改
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	Sleep(time);
	setfillcolor(RGB(251,127,1));			//扇形1
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();
	Sleep(time);
	if(numbers == 1){
		fflush(stdin);
	f();
	return 0;
	}
	
	setfillcolor( RGB(228,86,62));			//扇形2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));			//扇形3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers== 2){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(255,105,180));			//扇形3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 3){
		fflush(stdin);
	f();
	return 0;
	}
	
	setfillcolor(RGB(195,116,174));			//扇形4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 4){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(123,119,180));			//扇形5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 5){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(50,160,221));			//扇形6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));			//扇形7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 6){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(103,173,137));			//扇形7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 7){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(163,182,56));		//扇形8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 8){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(237,199,14));			//扇形9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 9){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(249,163,0));		//扇形10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//扇形1改
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 0){
	fflush(stdin);
	f();
	return 0;
	}
	return 0;
} 
DWORD WINAPI ThreadProc3( LPVOID lpParam ) 
{
	MOUSEMSG m1;		// 定义鼠标消息
	while(true)
	{
		// 获取一条鼠标消息
	m1 = GetMouseMsg();	// 获取一条鼠标消息
	if(m1.x>=441 && m1.x<=581 && m1.y>=450 && m1.y<=500){
	HCURSOR hcur1 = LoadCursor(NULL,IDC_HAND);		// 加载系统预置的鼠标样式
	HWND hwnd1 = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd1, GCL_HCURSOR, (long)hcur1);	// 设置窗口类的鼠标样式
	switch(m1.uMsg)
		{
			case WM_LBUTTONDOWN:
				// 如果点左键
				Graph();			//大体的样式
				Smallround();		//默认周围小圆的颜色
				Graph1();
				youcant=0;
				HANDLE hThread2=CreateThread( NULL,0, ThreadProc1, (LPVOID)&numbers , 0, NULL);
				fflush(stdin);
				jianpan();
				break;
		}
	}else{
	FlushMouseMsgBuffer();
	HCURSOR hcur1 = LoadCursor(NULL,IDC_ARROW );		// 加载系统预置的鼠标样式
	HWND hwnd1 = GetHWnd();							// 获取绘图窗口句柄
	SetClassLong(hwnd1, GCL_HCURSOR, (long)hcur1);	// 设置窗口类的鼠标样式
	}
	}
return 0;
}


void main()
{
	initgraph(1000,800);	

	setbkcolor(WHITE);
	cleardevice();	

	thephoto();
	
	
	Graph();			//大体的样式
	Smallround();		//默认周围小圆的颜色
	Graph1();
	
	HANDLE hThread2=CreateThread( NULL,0, ThreadProc1, (LPVOID)&numbers , 0, NULL); 
	jianpan();

	
	if(getch()==13){
	closegraph();		
	}
}

void thecolorchange(){
	FlushMouseMsgBuffer();
	while(countdown>=0){
	colorchange1(&countdown);
	Sleep(400);
	colorchange2(&countdown);
	Sleep(400);
	}
	fflush(stdin);
	Smallround();
}

//char *mstr
void f(){
	fflush(stdin);
	FlushMouseMsgBuffer();
	setlinecolor(RGB(176,224,230));					
	setlinestyle(PS_SOLID | PS_ENDCAP_FLAT, 1);	
	//大矩形
	line(295,227,723,227);
	line(295,547,723,547);
	line(295,227,295,547);
	line(723,227,723,547);
	
	//小矩形
	line(325,257,693,257);
	line(325,517,693,517);
	line(325,257,325,517);
	line(693,257,693,517);

	setfillcolor(RGB(0,191,255));			
	floodfill(325, 245, RGB(176,224,230));
	setfillcolor(RGB(255,250,250));		
	floodfill(410, 306, RGB(176,224,230));

	line(441,451,581,451);
	line(441,501,581,501);
	line(441,451,441,501);
	line(581,451,581,501);
	setfillcolor(RGB(255,127,80));		
	floodfill(465, 471, RGB(176,224,230));

	LOGFONT r;
	gettextstyle(&r);                
	r.lfHeight = 20;   
	r.lfEscapement = 0;
	r.lfOrientation = 0;
	_tcscpy(r.lfFaceName, _T("黑体"));   
	r.lfQuality = DEFAULT_QUALITY;	
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(&r);                    
	outtextxy(410, 290, _T("恭喜你获得"));

	
	
	LOGFONT z;
	gettextstyle(&z);                   
	z.lfHeight = 20;     
	z.lfEscapement = 0;
	z.lfOrientation = 0;
	_tcscpy(z.lfFaceName, _T("黑体"));    
	z.lfQuality = DEFAULT_QUALITY;		
	settextcolor(RED);
	setbkmode(TRANSPARENT);
	settextstyle(&z);                     
	outtextxy(520, 290, _T(ff));

	LOGFONT g;
	gettextstyle(&g);                     
	g.lfHeight = 18;             
	g.lfEscapement = 0;
	g.lfOrientation = 0;
	_tcscpy(g.lfFaceName, _T("黑体"));   
	g.lfQuality = DEFAULT_QUALITY;	
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(&g);                    
	outtextxy(390, 325, _T("点击确定，还可以再抽一次哦~"));

	IMAGE img;
	loadimage(&img, _T("666.jpg"));
	putimage(390, 355, &img);

	LOGFONT h;
	gettextstyle(&h);                     
	h.lfHeight = 35;      
	h.lfEscapement = 0;
	h.lfOrientation = 0;
	_tcscpy(h.lfFaceName, _T("楷体"));  
	h.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(100,149,237));
	setbkmode(TRANSPARENT);
	settextstyle(&h);                    
	outtextxy(490, 380, _T("立即扫一扫"));
	

	LOGFONT f;
	gettextstyle(&f);                    
	f.lfHeight = 40;                     
	f.lfEscapement = 0;
	f.lfOrientation = 0;
	_tcscpy(f.lfFaceName, _T("黑体"));   
	f.lfQuality = DEFAULT_QUALITY;		
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	settextstyle(&f);                    
	outtextxy(470, 458, _T("确定"));

	HANDLE hThread=CreateThread( NULL,0, ThreadProc3, (LPVOID)&numbers , 0, NULL); // returns the thread identifier
	FlushMouseMsgBuffer();			//清空鼠标消息
	CloseHandle(hThread);

	return;

}

void numberis(){
srand(time(0));

char str1[20]="500M永久空间!";
char str2[20]="1G永久空间!";
char str3[20]="2G永久空间!";
char str4[20]="3G永久空间!";
char str5[20]="30G永久空间!";
char str6[20]="1T永久空间!";
char str7[20]="什么什么都没中!";
char str8[20]="30M永久空间!";
char str9[20]="100M永久空间!";
char str10[20]="200M永久空间!";
numbers=rand()%10;
if(numbers==0){
	countdown=5.5+(numbers+11)*0.3;
	strcpy(ff,str1);
}else if(numbers==1){
	countdown=5.5+(numbers+1)*0.3;
	strcpy(ff,str2);
}else if(numbers==2){
 	countdown=5.5+(numbers+1)*0.3;
	strcpy(ff,str3);
}else if(numbers==3){
 	countdown=5.5+(numbers+1)*0.3;
	strcpy(ff,str4);
}else if(numbers==4){
 	countdown=5.5+(numbers+1)*0.3;
	strcpy(ff,str5);
}else if(numbers==5){
 	countdown=5.5+(numbers+1)*0.3;
		strcpy(ff,str6);
}else if(numbers==6){
	countdown=5.5+(numbers+1)*0.3;
		strcpy(ff,str7);
}else if(numbers==7){
	countdown=5.5+(numbers+1)*0.3;
		strcpy(ff,str8);
}else if(numbers==8){
	countdown=5.5+(numbers+1)*0.3;
		strcpy(ff,str9);
}else if(numbers==9){
	countdown=5.5+(numbers+1)*0.3;
		strcpy(ff,str10);
}

HANDLE hThread1=CreateThread( NULL,0, ThreadProc2, NULL , 0, NULL); // returns the thread identifier
CloseHandle(hThread1);
}

void jianpan(){
	int jp;
	if(youcant==0){		
	
	while(1){
	jp=getch();
	if(jp==32){
	youcant=2;
	numberis();
	thecolorchange();
	fflush(stdin);
	break;
	}
	}
	}else{
	return ;
	}

}