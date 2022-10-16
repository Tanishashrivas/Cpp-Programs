#include<iostream>
using namespace std;

void print(int arr[],int  n){
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
}

void bubble(int arr[],int n){
	for(int i=0;i<n;i++){
		for(int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			int x=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=x;	
			}
//			print(arr,n);
//			cout<<endl; //these two lines will make you understand each step and working
		}
	}
}

int main(){
	int n;
	cin>>n;
	int arr[n];
		for(int i=0;i<n;i++){
		cin>>arr[i];
	}
//	print(arr,n);
	bubble(arr,n);
	print(arr,n);
	return 0;
}
