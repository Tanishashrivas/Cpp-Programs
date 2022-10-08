#include<stdio.h>
int main(){
	int a,b, swap;
	a=2,b=5;
	
	printf("values of a and b are %d, %d\n", a,b);
	 swap =a;
	 a=b;
	 b=swap;
	 
	printf("values of a and b after swap are %d, %d\n", a,b);
	return 0;
}
