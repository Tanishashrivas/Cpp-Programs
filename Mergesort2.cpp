#include<iostream>
using namespace std;

void print(int arr[],int n){
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
	cout<<endl;
}

void merge(int arr[],int p,int m,int q){
	int n1=m-p+1,n2=q-m;
	
	int L[n1],M[n2];
	
	for(int i=0;i<n1;i++)
		L[i]=arr[p+i];
    for(int j=0;j<n2;j++)
		M[j]=arr[m+1+j];
	

	int i=0,j=0,k=p;
	while(i<n1 && j<n2){
	if(L[i]<=M[j]){
	arr[k]=L[i];
		i++;
	}
	else{
	arr[k]=M[j];
		j++;
	}
	k++;
}
   while(i<n1){
   	arr[k]=L[i];
   	i++;
   	k++;
   }
    while(j<n2){
   	arr[k]=M[j];
   	j++;
   	k++;
   }

}
void mergesort(int arr[],int l,int h){
	int m;
	if(l<h){
//	m= (l+(h-l))/2;
m=(l+h)/2;
	
	mergesort(arr,l,m);
	mergesort(arr,m+1,h);
	merge(arr,l,m,h);
}
	
}

int main(){
	int arr[]={4,9,5,3,7,2};
	int n= sizeof(arr)/sizeof(arr[0]);
	
	mergesort(arr,0,n-1);
	cout<<"Sorted array: "<<endl;
	print(arr,n);
	return 0;
}


