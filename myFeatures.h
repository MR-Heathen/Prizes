/*
功能性函数
by xubang
*/

void sleeptime(int time1){
	Sleep(time1);							//1秒一圈
	setfillcolor(RGB(255,252,149));			//扇形1改
	floodfill(566, 219, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(251,127,1));			//扇形1
	floodfill(566, 219, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor( RGB(228,86,62));			//扇形2
	floodfill(673, 294, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(216,108,108));			//扇形3
	floodfill(692, 377, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(195,116,174));				//扇形4
	floodfill(680, 500, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(123,119,180));			//扇形5
	floodfill(562, 581, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(50,160,221));			//扇形6
	floodfill(452, 602, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(103,173,137));			//扇形7
	floodfill(333, 514, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(143,188,143));			//扇形8
	floodfill(276, 389, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(237,199,14));			//扇形9
	floodfill(344, 276, RGB(255,239,213));
	Graph1();

	setfillcolor(RGB(255,252,149));			//扇形10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	Sleep(time1);
	setfillcolor(RGB(249,163,0));			//扇形10
	floodfill(437, 136, RGB(255,239,213));
	Graph1();
	}

void colorchange1(double *countdown){
	setfillcolor(0x55FFFF);
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
	setfillcolor(WHITE);
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
	*countdown-=0.4;
}

void colorchange2(double *countdown){
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
	*countdown-=0.4;
}


