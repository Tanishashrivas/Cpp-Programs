#include <iostream>
using namespace std;

int main() {
	int t,n,keyl=0,keyh=0;
	cin>>t;
	while(t--){
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	    cin>>a[i];
	    
	    for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[j]<a[i]){
	                keyl=a[j];
	            }
	            else
	            keyl=a[i];
	        }
	    }
	     for(int i=0;i<n-1;i++){
	        for(int j=i+1;j<n;j++){
	            if(a[i]>a[j]){
	                keyh=a[i];
	            }
	            else
	            keyh=a[j];
	        }
	    }
	    cout<<keyl*keyl<<" "<<keyh*keyh<<endl;
	}
	return 0;
}

