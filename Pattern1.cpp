#include<iostream>
using namespace std;

int main(){
//	for(int i=1;i<8;i++){
//		for(int j=1;j<8-i;j++){
//		cout<<" ";
//	}
//	for(int k=1;k<8;k++){
//	cout<<"* ";
//	cout<<endl;
//}
//	}
	
	//right half
	for(int i=6;i>0;i--){
		for(int j=1;j<7-i;j++)
		cout<<"* ";
		
		cout<<endl;
	}
	
	for(int i=1;i<8;i++){
		for(int j=1;j<8-i;j++)
		cout<<"* ";
		
		cout<<endl;
	}
	return 0;
}
