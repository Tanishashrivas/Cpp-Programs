#include<iostream>
using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
//	int prevsum= sum(n-1);
	return sum(n-1) + n;
}

int main(){
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<sum(n);
	return 0;
}
