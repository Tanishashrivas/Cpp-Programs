#include<iostream>
using namespace std;

void  permutation(string s,string ans){
	if(s.length()==0){
		cout<<ans<<endl;
		return;
	}
	
	for(int i=0;i<s.length();i++){
//		cout<<"ans : "<<ans<<endl;
		char ch= s[i];
//		cout<<"ch for "<<i<<" is "<<ch<<endl;
		string ros= s.substr(0,i) + s.substr(i+1);
//		cout<<"ros : "<<ros<<endl;
//		cout<<"ans+ch : "<<ans+ch<<endl;
		permutation(ros,ans+ch);
		
	}
}

int main(){
	permutation("ABC","");
	return 0;
}
