#include<iostream>
using namespace std;

int bubblesort(int arr[],int n){
		int count=1;
	while(count<=n-1){
		for(int i=0;i<n-count;i++){
			if(arr[i]>arr[i+1]){
				int temp= arr[i];
				arr[i]=arr[i+1];
				arr[i+1]=temp;
			}
		}
		count++;
	}
}

int main(){
	int n,arr[n];
	
	cout<<"Enter the size of array :";
	cin>>n;
	cout<<"Enter the elements of array :";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"array before sorting :";
	for(int i=0;i<n;i++)
		cout<<arr[i]<<" ";
	
    bubblesort(arr,n);
	cout<<"array after sorting :";
	
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
