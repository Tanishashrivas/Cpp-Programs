#include<iostream>
#include<string>
using namespace std;

void subs(string s,string ans){
	if(s.length()==0)
{
	cout<<ans<<endl;
	return;
}
	
	char ch=s[0];
	string ros=s.substr(1);
	int code=ch;
	
	subs(ros,ans);
	subs(ros,ans+ch);
//	subs(ros,ans + to_string(code); error????
	
}

int main(){
	subs("abc","");
	cout<<endl;

	return 0;
}
