#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n,i,j;
   cin>>n>>j;
   while(n>0){
       cin>>i;
       int a[i];
       for(int p=0;p<i;p++)
       cin>>a[p];
       
       cout<<a[j-1]<<endl;
       
       n--;
       int j=i+1;
   }   
   
    return 0;
}
