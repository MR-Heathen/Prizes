#include <graphics.h>		// ���� EasyX ͼ�ο�
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <time.h>
#include "myGraphics.h"		//�Զ��庯���⣬ͼ��
#include "myFeatures.h"		//�Զ��庯���⣬����

#define IDC_HAND  MAKEINTRESOURCE(32649)
int youcant=0;
int numbers;
double countdown=6;			//���ڼ�ʱ
char ff[50];
void numberis();
void themychange();			
void thecolorchange();		//�ı���ΧСԲ����ɫ
void jianpan();
void f();

void Smallround();			//Ĭ����ΧСԲ����ɫ
void Features();			

DWORD WINAPI ThreadProc1( LPVOID lpParam ) 
{
	MOUSEMSG m;		// ���������Ϣ
	while(true)
	{

	m = GetMouseMsg();	// ��ȡһ�������Ϣ 
	
	if(m.x>=405 && m.x<=555 && m.y>=315 && m.y<=435){
	HCURSOR hcur = LoadCursor(NULL,IDC_HAND);		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// ���ô�����������ʽ
	if(m.uMsg==WM_LBUTTONDOWN){
	numberis();
	thecolorchange();
	youcant=1;
	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// ���ô�����������ʽ

	return 0;
	}else if(m.uMsg==WM_RBUTTONUP){
	numberis();
	thecolorchange();
	youcant=1;
	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// ���ô�����������ʽ

	return 0;
	}
	}else{

	HCURSOR hcur = LoadCursor(NULL,IDC_ARROW );		// ����ϵͳԤ�õ������ʽ
	HWND hwnd = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd, GCL_HCURSOR, (long)hcur);	// ���ô�����������ʽ

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
	time+=50;								//һ������һȦ
	sleeptime(time);
	Graph1();

	time+=50;								//����һȦ
	sleeptime(time);
	Graph1();
	
	time+=50;
	setfillcolor(RGB(255,252,149));				//����1��
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	Sleep(time);
	setfillcolor(RGB(251,127,1));			//����1
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();
	Sleep(time);
	if(numbers == 1){
		fflush(stdin);
	f();
	return 0;
	}
	
	setfillcolor( RGB(228,86,62));			//����2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));			//����3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers== 2){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(255,105,180));			//����3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 3){
		fflush(stdin);
	f();
	return 0;
	}
	
	setfillcolor(RGB(195,116,174));			//����4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 4){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(123,119,180));			//����5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 5){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(50,160,221));			//����6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));			//����7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 6){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(103,173,137));			//����7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	 if(numbers == 7){
		 fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(163,182,56));		//����8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 8){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(237,199,14));			//����9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	Sleep(time);	
	if(numbers == 9){
		fflush(stdin);
	f();
	return 0;
	}

	setfillcolor(RGB(249,163,0));		//����10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	setfillcolor(RGB(255,252,149));				//����1��
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
	MOUSEMSG m1;		// ���������Ϣ
	while(true)
	{
		// ��ȡһ�������Ϣ
	m1 = GetMouseMsg();	// ��ȡһ�������Ϣ
	if(m1.x>=441 && m1.x<=581 && m1.y>=450 && m1.y<=500){
	HCURSOR hcur1 = LoadCursor(NULL,IDC_HAND);		// ����ϵͳԤ�õ������ʽ
	HWND hwnd1 = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd1, GCL_HCURSOR, (long)hcur1);	// ���ô�����������ʽ
	switch(m1.uMsg)
		{
			case WM_LBUTTONDOWN:
				// ��������
				Graph();			//�������ʽ
				Smallround();		//Ĭ����ΧСԲ����ɫ
				Graph1();
				youcant=0;
				HANDLE hThread2=CreateThread( NULL,0, ThreadProc1, (LPVOID)&numbers , 0, NULL);
				fflush(stdin);
				jianpan();
				break;
		}
	}else{
	FlushMouseMsgBuffer();
	HCURSOR hcur1 = LoadCursor(NULL,IDC_ARROW );		// ����ϵͳԤ�õ������ʽ
	HWND hwnd1 = GetHWnd();							// ��ȡ��ͼ���ھ��
	SetClassLong(hwnd1, GCL_HCURSOR, (long)hcur1);	// ���ô�����������ʽ
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
	
	
	Graph();			//�������ʽ
	Smallround();		//Ĭ����ΧСԲ����ɫ
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
	//�����
	line(295,227,723,227);
	line(295,547,723,547);
	line(295,227,295,547);
	line(723,227,723,547);
	
	//С����
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
	_tcscpy(r.lfFaceName, _T("����"));   
	r.lfQuality = DEFAULT_QUALITY;	
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(&r);                    
	outtextxy(410, 290, _T("��ϲ����"));

	
	
	LOGFONT z;
	gettextstyle(&z);                   
	z.lfHeight = 20;     
	z.lfEscapement = 0;
	z.lfOrientation = 0;
	_tcscpy(z.lfFaceName, _T("����"));    
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
	_tcscpy(g.lfFaceName, _T("����"));   
	g.lfQuality = DEFAULT_QUALITY;	
	settextcolor(BLACK);
	setbkmode(TRANSPARENT);
	settextstyle(&g);                    
	outtextxy(390, 325, _T("���ȷ�����������ٳ�һ��Ŷ~"));

	IMAGE img;
	loadimage(&img, _T("666.jpg"));
	putimage(390, 355, &img);

	LOGFONT h;
	gettextstyle(&h);                     
	h.lfHeight = 35;      
	h.lfEscapement = 0;
	h.lfOrientation = 0;
	_tcscpy(h.lfFaceName, _T("����"));  
	h.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(100,149,237));
	setbkmode(TRANSPARENT);
	settextstyle(&h);                    
	outtextxy(490, 380, _T("����ɨһɨ"));
	

	LOGFONT f;
	gettextstyle(&f);                    
	f.lfHeight = 40;                     
	f.lfEscapement = 0;
	f.lfOrientation = 0;
	_tcscpy(f.lfFaceName, _T("����"));   
	f.lfQuality = DEFAULT_QUALITY;		
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	settextstyle(&f);                    
	outtextxy(470, 458, _T("ȷ��"));

	HANDLE hThread=CreateThread( NULL,0, ThreadProc3, (LPVOID)&numbers , 0, NULL); // returns the thread identifier
	FlushMouseMsgBuffer();			//��������Ϣ
	CloseHandle(hThread);

	return;

}

void numberis(){
srand(time(0));

char str1[20]="500M���ÿռ�!";
char str2[20]="1G���ÿռ�!";
char str3[20]="2G���ÿռ�!";
char str4[20]="3G���ÿռ�!";
char str5[20]="30G���ÿռ�!";
char str6[20]="1T���ÿռ�!";
char str7[20]="ʲôʲô��û��!";
char str8[20]="30M���ÿռ�!";
char str9[20]="100M���ÿռ�!";
char str10[20]="200M���ÿռ�!";
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