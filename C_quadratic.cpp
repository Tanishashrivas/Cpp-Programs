#include<stdio.h>

int main(){
    float x,y,a,b,c,D;
    printf("enter a,b,c\n");
    scanf("%f\n""%f\n""%f",&a,&b,&c);
	D = b*b-4*a*c;
	x= (b+D)/2*a;
	y= (b-D)/2*a;
	
	printf("roots are %f and %f\n", x,y);
	return 0;
}
