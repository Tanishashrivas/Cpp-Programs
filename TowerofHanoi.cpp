#include<iostream>
using namespace std;

void toh(int n,char s,char d,char h){    //s=source d=destination h=helper
//	base case
if(n==0)
return;

	toh(n-1,s,h,d);
	cout<<"Move from "<<s<<" to "<<d<<endl;
	toh(n-1,h,d,s);
}

int main(){
	toh(3,'A','C','B');
	return 0;
}
