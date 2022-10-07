#include<iostream>
using namespace std;

int enough(int goal){
	int n=1,sum=1;
	while(sum<goal){
		sum+= n++;
//		cout<<sum<<endl;
	}
	return n-1;
}

main(){
cout<<enough(6);
}
