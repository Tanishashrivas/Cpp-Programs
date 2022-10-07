#include<stdio.h>

int main(){
	int at[10],bt[10],wt[10],tat[10],n;
	int burst=0,ct;
	float avgwt,avgtat,total=0;
	printf("enter number of processes\n");
	scanf("%d",&n);
	printf("enter arrival and burst time :\n");
	printf("at & bt \n");
	for(int i=0;i<n;i++){
		scanf("%d %d", &at[i],&bt[i]);
	}
	
	//waiting time calculation
	for(int i=0;i<n;i++){
		if(i==0)
		wt[i]=at[i];
		else
		wt[i]=burst-at[i];
		burst+=bt[i];
		total+=wt[i];
	}
	avgwt=total/n;
	printf("process wt \n");
	for(int i=0;i<n;i++){
		printf("%d\t %d\n",i+1,wt[i]);
	}
	printf("avg wt is %f", avgwt);	
	
	return 0;
}
