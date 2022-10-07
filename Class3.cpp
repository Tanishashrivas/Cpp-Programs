#include<iostream>
using namespace std;

class book{
	int pages;
	int id;
	
	public:
		void getid(void){
			pages= 100;
			cout<<"Enter the id of the book :";
			cin>>id;
		}
		
		void display(void){
			cout<<id<<endl;
		}
};

int main(){
	book book[5];
	for(int i=0;i<5;i++){
    	book[i].getid();
    	book[i].display();
    }
	return 0;
	}
