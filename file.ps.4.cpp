#include<stdio.h>

typedef struct employee{
	float salary;
	char name[15];
}se;
int main(){
	FILE *ptr;
	se a,b;
    printf("enter the value for salary of a :\n");
    scanf("%f", &a.salary);
    printf("enter the value for name of a :\n");
    scanf("%s", a.name); 
    
	printf("enter the value for salary of b :\n");
    scanf("%f", &b.salary);
    printf("enter the value for name of b :\n");
   	scanf("%s", b.name); 
    
	ptr=fopen("t.txt", "w");
	fprintf(ptr, "value of salary of %s is %f\n value of salary of %s is %f", a.name,a.salary ,b.name, b.salary);
	
}
