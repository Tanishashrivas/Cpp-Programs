#include<stdio.h>
int main()
{
	int y;
	printf("enter year\n");
	scanf("%d", &y);
	
	if(y%4==0) && (y%100!=0) || (y%400==0){
		printf("it is a leap year!\n");
	}
	else{
		printf("its not a leap year!");
	}
	return 0;
}
