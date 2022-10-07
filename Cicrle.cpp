#include<iostream>
#include<graphics.h>
using namespace std;

void rb(){
	int gd=DETECT,gm,x,y;
	initgraph(&gd,&gm,(char*)"");
	
	x= getmaxx()/3;
	y=getmaxy()/3;
	
	setbkcolor(WHITE);
	setcolor(BLUE);
	for(int i=1;i<=8;i++){
		setfillstyle(i,i);
		delay(20);
		circle(x,y,i*20);
		floodfill(x-2+i*20,y,BLUE);
	}
	getch();
	closegraph();
	
	return 0;
}
