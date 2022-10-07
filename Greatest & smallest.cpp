#include<iostream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Enter the values of a, b and c"<<endl;
	cin>>a>>b>>c;
	
	if(a>b && a>c){
		cout<<"a is the greatest"<<endl;
		if(b>c){
			cout<<"c is the smallest"<<endl;
		}
		else
		cout<<"b is the smallest";
	}
	else if(b>c && b>a){
		cout<<"b is the greatest"<<endl;
		if(c>a){
			cout<<"a is the smallest";
		}
		else
	    	cout<<"c is the smallest"<<endl;
	}
	else{
	cout<<"c is the greatest"<<endl;
	if(b>a){
			cout<<"a is the smallest";
		}
		else
	    	cout<<"b is the smallest"<<endl;
	    }
 return 0;
}
