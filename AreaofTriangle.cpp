#include<iostream>
#include<math.h>

using namespace std;

int main(){
	 float a,b,c,S,area;
	 int i;
	 do{
	 cout<<"enter the values of a,b,c"<<endl;
	 cin>>a>>b>>c;
	 S= (a+b+c)/2;
	 area=sqrt(S*(S-a)*(S-b)*(S-c));
	 cout<<S<<endl;
	 cout<<"area of the triangle is "<<area<<endl;
	 cout<<"Do you want to continue? (press 1 for yes)"<<endl;
	 cin>>i;
}while(i == 1);
	 
	 return 0;
}
