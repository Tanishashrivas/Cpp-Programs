#include<iostream>//not working
using namespace std;

int heapsort(int arr[], int n){
	 //sorting algo
	   for(int i=n;i>0;i--){
	   	for(int j=n-1;j=0;j--){
	   		if(arr[j]>arr[i]){
	   			int temp = arr[j];
	   			arr[j]=arr[i];
	   			arr[i]=temp;
			   }
		   }
	   }
}

int main(){
	int n;
	cout<<"Enter the size of array:"<<endl;
	cin>>n;
	int arr[n];
	cout<<"Enter array elements: "<<endl;
	for(int i=0;i<n;i++)
	   cin>>arr[i];
	   
	   cout<<"array elements are:";
	   for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
	   
	   heapsort(arr,n);
	   
	   cout<<"\n array elements after sorting are:";
	   for(int i=0;i<n;i++)
	   cout<<arr[i]<<" ";
	   return 0;
	}

