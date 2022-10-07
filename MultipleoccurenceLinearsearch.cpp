#include<iostream>
using namespace std;

int main(){
	int n,data,count=0;
	
	cout<<"Enter the number of elements :"<<endl;
	cin>>n;
	int arr[n];
	cout<<"enter array elements : ";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	
	cout<<"Enter the data :"<<endl;
	cin>>data;
	
	for(int i=0;i<n;i++){
	if(data==arr[i]){
		cout<<"Element found at index "<<i<<endl;
		count++;
	}
}
   
    if(count==0)
	cout<<"Element not present!";
	else 
	cout<<"Element is found "<<count<<" times"; 

return 0;
}
