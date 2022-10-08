#include<stdio.h>

int main(){
	int a,b,c;
    int max;
	printf("enter a, b and c :\n");
	scanf("%d\n""%d\n""%d",&a, &b, &c);
	
	if(a>b && a>c){
		printf("a is maximum");
		max=a;
	}
	else if(b>c &&  b>a){
		printf("b is maximum");
		max=b;
	}
	else{
		printf("c is maximum");
		max=c;
	}
	
	if(max%2==0){
		printf("this number is even\n");
	}
	else{
		printf("this number is odd\n");
	}
	return 0;
}

