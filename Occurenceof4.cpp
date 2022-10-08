#include <iostream>
using namespace std;

int main() {
	int t,rem, x;
	cin>>t;
	while(t--){
	    cin>>x;
	    int count=0;
	   while(x!=0){
	       rem=x%10;
	       if(rem==4)
	       count++;
	       x=x/10;
	   }
	     cout<<count<<endl;
	}
	return 0;
}

