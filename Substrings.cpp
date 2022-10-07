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
	
	subs(ros,ans);
//	cout<<ch<<"&"<<ans<<endl;
	subs(ros,ans+ch);
//	cout<<ch<<"&"<<ans<<endl;
	
}

int main(){
	subs("abc","");
	cout<<endl;

	return 0;
}
