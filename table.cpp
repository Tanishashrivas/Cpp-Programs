#include<iostream>
using namespace std;

int main(){
	int i,n,table;
	cout<<"enter the number n \n";
	cin>>n;
	
	cout<<"table for "<<n<<endl;
	
	for(i=1;i<=10;i++){
        cout<<n<<" x "<<i<<" = "<<n*i<<endl;
	}
	
//	while(i<=10){
//		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
//		i++;
//	}
//	
//	do{
//		cout<<n<<" x "<<i<<" = "<<n*i<<endl;
//		i++;
//	}while(i<=10);
	
	return 0; 
}
