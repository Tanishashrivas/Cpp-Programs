#include<iostream>
#include<graphics.h>
using namespace std;

void rb(){
	int gd=DETECT,gm;
	int x,y,i;
	initgraph(&gd,&gm,(char*)"");
	
	x= getmaxx()/2;
	y=getmaxy()/2;
	
	for(i=30;i<200;i++){
		delay(70);
		setcolor(i/10);
		arc(x,y,0,180,i-10);
	}
}
int main(){
	rb();
	return 0;
}
