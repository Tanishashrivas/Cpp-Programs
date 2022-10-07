#include<iostream>
using namespace std;

main(){
	int arr[2][2];
	
	cout<<"Enter array  elements: ";
	
	for(int i=0;i<2;i++){
		for(int j=0;j<2;j++)
		cin>>arr[i][j];
	}
	
	cout<<"array elements are: ";
	for(int i=0;i<2;i++){
		cout<<"\n";
		for(int j=0;j<2;j++){
		cout<<"\t";
		cout<<arr[i][j];
	}
	}
	return 0;
}
