#include<iostream>
#include<string>
using namespace std;

int main(){
	string str, str1="fam", str2="ily";
	cout<<"Enter strings"<<endl;
/*	cin>>str;       //  1
    getline(cin, str);  //2
	cout<<str<<endl;*/
   
//  string str1(5, 'm');
	
	cout<<str1+str2<<endl;   //family
	str1.append(str2);       //family
	cout<<str1<<endl;

	return 0;
}
