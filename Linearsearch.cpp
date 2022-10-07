#include<iostream>
using namespace std;

int linearsearch(int arr[],int n,int data){
	for(int i=0;i<n;i++){
		if(arr[i]==data){
		cout<<"data found at index "<<i<<endl;
		exit(0);
	}
}
}

int main(){
	int n,data;
	cout<<"enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"enter array"<<endl;
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the data to be searched \n";
	cin>>data;
	
	cout<<linearsearch(arr,n,data);
	return 0;
}
