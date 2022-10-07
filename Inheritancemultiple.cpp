#include<iostream>
#include<string>
using namespace std;

class mom{
	string a,b;
	
	public:
    void m(void){
	cout<<"Enter hair color :"<<endl;
	getline(cin, a);
	cout<<"Your hair color is :"<<a<<endl;	
}
};

class dad{
	string c;
	
	public:
	void d(void){	
	cout<<"Enter eye color :"<<endl;
	getline(cin, c);
	cout<<"Your eye color is :"<<c<<endl;
}
};

class child : public mom, public dad{
};

int main(){
	child ash,siya;
	ash.m();
	siya.d();
	return 0;
}
