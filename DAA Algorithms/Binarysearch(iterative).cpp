#include<iostream>
using namespace std;

int binarysearch(int arr[],int start,int end,int data){
	while(start<=end){
		int mid=(start+end)/2;
		if(arr[mid]==data){
		return mid;
		}
		else if(data<arr[mid]){
			end=mid-1;
		}
		else{
			start=mid+1;
		}
	}
}

int main(){
	int n,ans,data;
	cout<<"enter size of array :";
	cin>>n;
	int arr[n];
	cout<<"enter elements of array :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"enter the data to be searched \n";
	cin>>data;
	ans= binarysearch(arr,0,n-1,data);
	(ans==-1)?cout<<"Element is not present":cout<<"Element is present at index "<<ans;
	return 0;
}
