#include<stdio.h>

int main(){
	FILE *ptr;
	ptr = fopen("musk.txt", "r");
	int a,b,c;
	fscanf(ptr,"%d" "%d" "%d",&a, &b, &c);
    printf("the value of a , b , c are %d %d %d\n", a,b,c);
    
    return 0;
}
