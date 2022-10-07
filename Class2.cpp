#include<iostream>
#include<string>
using namespace std;

class binary{
	string seq;
	
	public:
	void read(void);
	void chk_bin(void);
	void onesc(void);
	void display(void);
	void twosc(void);
};

void binary :: read(void){
	cout<<"Enter the binary sequence : ";
	cin>>seq;
}
void binary :: chk_bin(void){
	for(int i=0;i< seq.length();i++){
		if(seq.at(i)!='0' && seq.at(i)!='1'){
			cout<<"Incorect binary format"<<endl;
			exit(0);
		}
	}
}
void binary :: onesc(void){
	chk_bin();
	cout<<"Ones complement is :"<<endl;
	for(int i=0;i< seq.length();i++){
		if(seq.at(i)=='0')
		seq.at(i)='1';
		else
		seq.at(i)='0';
}
}
void binary :: display(void){
	for(int i=0;i< seq.length();i++){
	cout<<seq.at(i);
}
}

//void binary :: twosc(void){
//	cout<<"twos complement is :"<<;
//}

int main(){
	binary s;
    s.read();
//	s.chk_bin();
	s.onesc();
	s.display();
	
	return 0;
}
