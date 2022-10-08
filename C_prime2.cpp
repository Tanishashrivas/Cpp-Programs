#include<stdio.h>

int main(){
	int n, prime;
	printf("enter n\n");
	scanf("%d",&n);
	
	if(n%2==0 || n%3==0 || n%5==0 || n%7==0){
		printf("its not a prime number");
	}
	else{
	printf("its a prime number");
		}
/*	for(int i=2;i<n;i++){
        if (n%i==0 ){
            prime==0;
            break;
        }
    }
    if(prime!=0){
    	printf("it's a prime number");
    }
        else{
            printf("This is not a prime number");
    }*/
 return 0;
}
