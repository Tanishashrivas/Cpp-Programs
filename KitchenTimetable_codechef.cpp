#include <iostream>
using namespace std;

int main() {
	int t,n;
	cin>>t;
	while(t--){
	    int pre=0,count=0;
	    cin>>n;
	    int a[n],b[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    for(int i=0;i<n;i++)
	    cin>>b[i];
	    
	    for(int k =0;k<n;k++) {
	        if(a[k]-pre>=b[k]) {
	            count++;
	        }
	        pre=a[k];
	    }
	    
	    cout<<count<<endl;
	}
	return 0;
}

