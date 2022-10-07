#include<iostream>
#include<string>
using namespace std;

void  reverse(string s){
//	base condition 
if(s.length()==0)
return;

string ros= s.substr(1);    //ros=restofthestring
reverse(ros);
cout<<s[0];
}


int main(){
	reverse("muskan");
	return 0;
}
