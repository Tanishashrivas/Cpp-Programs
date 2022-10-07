#include<iostream>
using namespace std;

int fib(int n){
	//fib(n)=fib(n-1)+fib(n-2)
	if(n==1 || n==0){
		return n;
	}
	return fib(n-1)+fib(n-2);
}

int main(){
	int n;
	cout<<"Enter n"<<endl;
	cin>>n;
	cout<<fib(n);
	return 0;
}
