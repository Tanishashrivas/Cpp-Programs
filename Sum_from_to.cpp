#include<iostream>
using namespace std;

int sum_from_to(int first,int last){
	int i,temp=0;
	if(first!=last){
		for(i=first;i<=last;i++){
		temp+=i;
//		cout<<temp<<endl;
	}
	}
	
	return temp;
}


int main(){
	int a,b;
	cout<<"Enter first and last value: "<<endl;
	cin>>a>>b;
	cout<<sum_from_to(a,b);
	return 0;
}
