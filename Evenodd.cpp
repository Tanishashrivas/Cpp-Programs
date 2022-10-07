#include<iostream>
using namespace std;

void checkEO(int n){
	if(n%2==0){
		cout<<n<<" is even";
	}
	else 
	cout<<n<<" is odd!";
}

main(){
	int n;
	cout<<"Enter n :"<<endl;
	cin>>n;
	checkEO(n);
}
