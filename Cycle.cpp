#include<iostream>
#include<graphics.h>
using namespace std;

int main(){
	int gd=DETECT,gm;
	initgraph(&gd,&gm,(char*)"");
	
	circle(100,300,40);//tyres
	circle(270,300,40);
	circle(100,300,32);//inner tyres
	circle(270,300,32);
	circle(100,300,3);//inner dot tyres
	circle(270,300,3);
	line(100,300,130,240);
	line(270,300,220,212);
	line(130,240,235,240);
	line(100,300,205,300);
	line(235,240,205,300);
	line(201,212,244,212);//handle
	line(201,212,194,219);
	line(244,212,240,219);
	line(130,240,130,234);// seat support
	line(124,234,136,234);//seat
	line(124,233,136,233);//seat
	rectangle(185,280,193,285);
	setfillstyle(5,7);
	floodfill(100,266,WHITE);
	floodfill(270,266,WHITE);
	
	getch();
	closegraph();
	return 0;
}
