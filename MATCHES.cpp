#include <iostream>
using namespace std;

int main() {
	int t,a,b,l,s,m;
	cin>>t;
	while(t--)
	{   
	    cin>>a>>b;
	    s=a+b;
	    m = 0;
	   
	    while(s>0)
	    {
	         l=s%10;
	         switch (l)
	         {   case 0:
	               m=m+6;
	               break;
	             case 1:
	               m=m+2;
	               break;
	             case 2:
	               m=m+5;
	               break;
	             case 3:
	               m=m+5;
	               break;
	             case 4:
	               m=m+4;
	               break;
	             case 5:
	               m=m+5;
	               break;
	             case 6:
	               m=m+6;
	               break;    
	             case 7:
	               m=m+3;
	               break;
	             case 8:
	               m=m+7;
	               break;
	             case 9:
	               m=m+6;
	               break;
	         }
	         s=s/10;
	       
	    }
	    cout<<m<<endl;
	}
	return 0;
}
