#include<stdio.h>

int main(){
	int i,n,val,pos,arr[10];
	printf("enter the number of elements:\n");
	scanf("%d",&n);
	printf("enter array elements:\n");
	for(i=0;i<n;i++){
		printf("arr[%d]= ",i);
		scanf("%d",&arr[i]);
	}
	printf("enter the number to be inserted\n");
	scanf("%d",&val);
	printf("enter the position of insertion:\n");
	scanf("%d", &pos);
	
	for(i=n-1;i>=pos;i--)
	arr[i+i]=arr[i];
	}
	
	arr[pos]= val;
	n=n+1;
	
	printf("array after insertion:\n");
	for(i=0;i<n;i++)
		printf("arr[%d]= %d",i, arr[i]);
		
		return 0;
	
}
