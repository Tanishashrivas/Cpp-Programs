#include<iostream>
using namespace std;

class employee{
	char id;
	int salary;
	
	public:
	void getid(void){
		cout<<"Enter id"<<endl;
		cin>>id;
	}	
	void display(void){
		cout<<"Id is "<<id<<endl;
	}
};

class musk : public employee{
};

int main(){
	musk a,b;
	a.getid();
	a.display();
	return 0;
}
