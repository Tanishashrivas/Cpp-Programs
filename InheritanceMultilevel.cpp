#include<iostream>
#include<string>

using namespace std;

class top{
	
	public:
	  	char a;
		void getsec(void){
			cout<<"Enter section";
			cin>>a;
		}
};

class middle: public top{
	
	public:
		int b;
		void getclass(void){
			cout<<"Enter class";
			cin>>b;
		}
};
class bottom : public middle{
	
	public:
	    void print(void){
	    	cout<<b<<" "<<a;
		}	
};

int main(){
	bottom musk;
	musk.getclass();
	musk.getsec();
	musk.print();
	
	return 0;
}


