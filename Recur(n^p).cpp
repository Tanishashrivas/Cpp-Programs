#include<iostream>
using namespace std;

int power(int n,int p){
		if(p==0){
		return 1;
	}
	int pp= power(n,p-1);//pp= previous power
	return n*pp;
}

int main(){
	int n,p;
	cout<<"Enter the number n and power p"<<endl;
	cin>>n>>p;
	cout<<power(n,p);
	return 0;
}
