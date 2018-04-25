/*
自定义功能函数库
by XuBang
*/
#define PI 3.1415926535
void Graph(){							// 设置绘图样式

	setlinecolor(RGB(255,239,213));					
	setlinestyle(PS_SOLID | PS_ENDCAP_FLAT, 1);	
	
	setfillcolor(0xCD6600);
	fillcircle(500, 386, 363);
	setfillcolor(WHITE);

	setfillcolor(0xCDAA7D);
	fillcircle(500, 386, 360);	// 画圆
	setfillcolor(WHITE);

	fillcircle(500, 386, 306);	// 画圆
	fillcircle(500, 386, 297);
	fillcircle(500, 386, 296);

	setfillcolor(0xCD9B1D);
	fillcircle(500, 386, 120);	
	setfillcolor(WHITE);
	fillcircle(500, 386, 116);


	setfillcolor(0x6495ED);
	fillcircle(500, 386, 86);	//最里面的圆
	setfillcolor(WHITE);
	
	line(500, 90, 500, 268);	//线1
	line(573, 296, 682, 147);	//线2
	line(615, 356, 789, 300);	//线3
	line(613, 423, 783, 480);	//线4
	line(573, 480, 679, 625);	//线5
	line(500, 685, 500, 505);	//线6
	line(435, 486, 327, 627);	//线7
	line(388, 423, 219, 481);	//线8
	line(388, 351, 217, 301);	//线9
	line(430, 293, 321, 151);	//线10

	LOGFONT f;
	gettextstyle(&f);                     
	f.lfHeight = 70;                      
	f.lfEscapement = 0;
	f.lfOrientation = 0;
	_tcscpy(f.lfFaceName, _T("黑体"));   
	f.lfQuality = DEFAULT_QUALITY;	
	settextcolor(WHITE);
	setbkmode(TRANSPARENT);
	settextstyle(&f);                     // 设置字体样式
	outtextxy(435, 350, _T("抽奖"));

	setfillcolor(RGB(251,127,1));			//扇形1
	floodfill(566, 219, RGB(255,239,213));

	setfillcolor( RGB(228,86,62));			//扇形2
	floodfill(673, 294, RGB(255,239,213));

	setfillcolor(RGB(216,108,108));			//扇形3
	floodfill(692, 377, RGB(255,239,213));

	setfillcolor(RGB(195,116,174));			//扇形4
	floodfill(680, 500, RGB(255,239,213));

	setfillcolor(RGB(123,119,180));			//扇形5
	floodfill(562, 581, RGB(255,239,213));

	setfillcolor(RGB(50,160,221));			//扇形6
	floodfill(452, 602, RGB(255,239,213));

	setfillcolor(RGB(103,173,137));			//扇形7
	floodfill(333, 514, RGB(255,239,213));

	setfillcolor(RGB(163,182,56));			//扇形8
	floodfill(276, 389, RGB(255,239,213));

	setfillcolor(RGB(237,199,14));			//扇形9
	floodfill(344, 276, RGB(255,239,213));

	setfillcolor(RGB(249,163,0));			//扇形10
	floodfill(437, 136, RGB(255,239,213));
}

void thephoto(){										//周围美化样式
	setlinecolor(RGB(240,255,255));					
	setlinestyle(PS_SOLID | PS_ENDCAP_FLAT, 1);	
	line(80,86,99,108);
	line(80,86,120,76);
	line(95,109,120,76);
	setfillcolor(RGB(142,229,238));		
	floodfill(99, 99, RGB(240,255,255));
	line(90,670,115,640);
	line(90,670,85,650);
	line(85,650,115,640);
    setfillcolor(RGB(238,174,238));	
	floodfill(87,650,RGB(240,255,255));
	line(850,650,870,630);
	line(870,630,890,670);
	line(890,670,870,680);
    line(870,680,850,650);
	setfillcolor(RGB(152,251,152));	
	floodfill(877,660,RGB(240,255,255));
	line(920,730,933,720);
	line(920,730,925,710);
	line(930,725,925,710);
	setfillcolor(RGB(135,206,255 ));	
	floodfill(924,725,RGB(240,255,255));
	line(800,80,840,90);
	line(800,80,820,75);
	line(820,75,840,90);
    setfillcolor(RGB(0,255,255 ));	
	floodfill(820,76,RGB(240,255,255));
	line(910,260,930,250);
	line(910,260,920,280);
	line(930,250,920,265);
	line(920,280,920,265);
	setfillcolor(RGB(0,250,154 ));	
	floodfill(920,263,RGB(240,255,255));
	line(120,188,160,170);
	line(120,188,125,170);
    line(125,170,160,170);
    setfillcolor(RGB(238,221,130));	
	floodfill(125,185,RGB(240,255,255));
	line(960,86,980,109);
	line(960,86,950,100);
	line(950,100,980,109);
	setfillcolor(RGB(135,206,255 ));	
	floodfill(959,89,RGB(240,255,255));

}

void Smallround(){

	setfillcolor(WHITE);
	fillcircle(500, 50, 13);	// 1
	fillcircle(500, 720, 13);	// 13
	fillcircle(835, 386, 13);	// 7
	fillcircle(165, 386, 13);	// 19
	fillcircle(332, 95, 13);   //23
	fillcircle(668, 95, 13);   //3
    fillcircle(332, 677, 13);  //15
	fillcircle(668, 677, 13);  //11
	fillcircle(209, 554, 13);  //17
	fillcircle(791, 554, 13);  //9
	fillcircle(209, 218, 13);  //21
    fillcircle(791, 218, 13);  //5
	setfillcolor(0x55FFFF);
	fillcircle(413, 709, 13);	//14
	fillcircle(587, 709, 13);	//12
	fillcircle(587, 61, 13);    //2	
    fillcircle(413, 61, 13);	//24
	fillcircle(176, 299, 13);	//20
	fillcircle(824, 299, 13);	//6
    fillcircle(824, 473, 13);	//8
    fillcircle(176, 473, 13);  //18
    fillcircle(737, 623, 13);   //10
    fillcircle(263, 623, 13);   //16
    fillcircle(263, 149, 13);   //22
    fillcircle(737, 149, 13);   //4
}

void Graph1(){

	LOGFONT r;
	gettextstyle(&r);                     
	r.lfHeight = 40;        
	r.lfEscapement = 0;
	r.lfOrientation = 0;
	_tcscpy(r.lfFaceName, _T("楷体"));   
	r.lfQuality = DEFAULT_QUALITY;		
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&r);                     
	outtextxy(670, 340, _T("2G"));
	outtextxy(270, 340, _T("30M"));

	LOGFONT r1;
	gettextstyle(&r1);                     
	r1.lfHeight = 32;       
	r1.lfEscapement = 0;
	r1.lfOrientation = 0;
	_tcscpy(r1.lfFaceName, _T("楷体"));    
	r1.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&r1);                     
	outtextxy(645, 390, _T("永久空间"));
	outtextxy(229, 396, _T("永久空间"));

	
	LOGFONT yj;
	gettextstyle(&yj);                     
	yj.lfHeight = 32;      
	yj.lfEscapement = 360;
	yj.lfOrientation = 360;
	_tcscpy(yj.lfFaceName, _T("楷体"));    
	yj.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&yj);                     
	outtextxy(630, 310, _T("永久空间"));
	outtextxy(260, 540, _T("继续攒人品"));

	LOGFONT dx;
	gettextstyle(&dx);                     
	dx.lfHeight = 40;      
	dx.lfEscapement = 360;
	dx.lfOrientation = 360;
	_tcscpy(dx.lfFaceName, _T("楷体"));    
	dx.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&dx);                     
	outtextxy(610, 260, _T("1G"));


	LOGFONT yj1;
	gettextstyle(&yj1);                     
	yj1.lfHeight = 32;      
	yj1.lfEscapement = 720;
	yj1.lfOrientation = 720;
	_tcscpy(yj1.lfFaceName, _T("楷体"));    
	yj1.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&yj1);                     
	outtextxy(560, 250, _T("永久空间"));
	outtextxy(420, 650, _T("永久空间"));

	LOGFONT dx1;
	gettextstyle(&dx1);                     
	dx1.lfHeight = 40;      
	dx1.lfEscapement = 720;
	dx1.lfOrientation = 720;
	_tcscpy(dx1.lfFaceName, _T("楷体"));    
	dx1.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&dx1);                     
	outtextxy(520, 220, _T("500M"));
	outtextxy(390, 580, _T("1T"));

	LOGFONT yj2;
	gettextstyle(&yj2);                     
	yj2.lfHeight = 32;      
	yj2.lfEscapement = -360;
	yj2.lfOrientation = -360;
	_tcscpy(yj2.lfFaceName, _T("楷体"));    
	yj2.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&yj2);                     
	outtextxy(610, 470, _T("永久空间"));
	outtextxy(270, 230, _T("永久空间"));

	LOGFONT dx2;
	gettextstyle(&dx2);                     
	dx2.lfHeight = 40;      
	dx2.lfEscapement = -360;
	dx2.lfOrientation = -360;
	_tcscpy(dx2.lfFaceName, _T("楷体"));    
	dx2.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&dx2);                     
	outtextxy(650, 440, _T("3G"));
	outtextxy(320, 200, _T("100M"));

	LOGFONT yj3;
	gettextstyle(&yj3);                     
	yj3.lfHeight = 32;      
	yj3.lfEscapement = -720;
	yj3.lfOrientation = -720;
	_tcscpy(yj3.lfFaceName, _T("楷体"));    
	yj3.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&yj3);                     
	outtextxy(540, 520, _T("永久空间"));
	outtextxy(420, 130, _T("永久空间"));


	LOGFONT dx3;
	gettextstyle(&dx3);                     
	dx3.lfHeight = 40;      
	dx3.lfEscapement = -720;
	dx3.lfOrientation = -720;
	_tcscpy(dx3.lfFaceName, _T("楷体"));    
	dx3.lfQuality = DEFAULT_QUALITY;	
	settextcolor(RGB(1,59,116));
	setbkmode(TRANSPARENT);
	settextstyle(&dx3);                     
	outtextxy(580, 510, _T("30G"));
	outtextxy(470, 140, _T("200M"));

	return;
}