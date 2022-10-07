#include<iostream>
using namespace std;

string removeD(string s){
	if(s.length()==0)
	return "";
	
	char ch=s[0];
	string n=removeD(s.substr(1));
	cout<<ch<<"&"<<n<<"&"<<ch+n<<endl;//for understanding
	
	if(ch==n[0]){
		return n;
	}
	else
	return(ch+n);
	
}

int main(){
	cout<<removeD("aabcd");
	return 0;
}
