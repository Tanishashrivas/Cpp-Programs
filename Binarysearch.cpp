#include<iostream>
using namespace std;

int binarysearch(int arr[],int n,int data){
	int start=0,end=n;
	int mid=(start+end)/2;
	for(int i=0;i<n;i++){
		if(arr[i]==data){
			cout<<"Data found at index "<<i<<endl;
		}
		else if(data<=arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
}

int main(){
	int n,data;
	cout<<"enter size of array :";
	cin>>n;
	int arr[n];
	
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"enter the data to be searched \n";
	cin>>data;
	
	cout<<binarysearch(arr,n,data);
	
	return 0;
}
