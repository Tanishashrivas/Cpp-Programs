#include<iostream>
using namespace std;

int multi(int n){
	int table;
	cout<<"Enter the value of number for the table :";
	cin>>n;
	for(int i=1;i<=10;i++)
	cout<<n<<" x "<<i<<" = "<<n*i<<endl;
}

int main(){
	int n,y;
	
	multi(n);
	do{
	cout<<"if you want to continue, press 1 for yes and 0 for no "<<endl;
	cin>>y;
	if(y==1){
//	cout<<"Enter the value of number for the table :";
//	cin>>n;
	multi(n);
}
	else
	cout<<"press any key to exit!";
}while(y==1);
	return 0;
}
