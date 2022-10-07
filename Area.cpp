#include<iostream>
using namespace std;

int main(){
	int l,b,r,area;
	float pi=3.14,circumference,areac;
	
	cout<<"Enter the length and breadth of the rectangle, and radius of the circle"<<endl;
	cin>>l>>b>>r;
	cout<<"area of the rectangle is "<<l*b<<"\n"<<"area of the circle is "<<pi*r*r<<" and circumference is "<<2*pi*r;
	return 0;
}
