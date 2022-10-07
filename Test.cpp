#include <iostream>
using namespace std;

int cz(int temp){
	int count=0;
	
	while(temp){
		if(temp%10==0)
		count++;
		
		temp/=10;
	}
	return count;
}

int ctz(int n){
	int finalcount=1;
	
	for(int i=1;i<=n;i++){
	finalcount+=cz(i);
}
return finalcount;
}

int main(){
	int a,b,f;
	cin>>a>>b;
//	cout<<ctz(b)<<" & "<<ctz(a);
	f= ctz(b)-ctz(a);

//	if(a>100 || b>100)
//	cout<<(f/2)+1<<endl;
//	else
		cout<<f<<endl;
	return 0;
}

