#include <iostream>
using namespace std;

int main() {
	int t,x,y,xlead=0,ylead=0,diff1,diff2,key=0,leader=0;
	for(int i=0;i<t;i++){
	   cin>>x>>y;
	   xlead+=x;ylead+=y;
	   if(xlead>ylead){
	       diff1=xlead-ylead;
	       if(diff1>key){
	           key=diff1;
	           leader=1;
	           
	       }
	   }
	   else {
	       diff2=ylead-xlead;
	       if(diff2>key){
	           key=diff2;
	           leader=2;
	       }
	   }
	   }
	   cout<<leader<<" "<<key;
	return 0;
}
