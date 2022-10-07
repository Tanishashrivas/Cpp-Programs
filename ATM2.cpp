#include<iostream>
using namespace std;

int Oneh(int amnt){
	int Q, notes,remamnt;//remamnt is remaining amount and Q is quotient

		Q= amnt/100;
		notes=Q;
		remamnt= amnt-Q*100;
		cout<<Q<<" notes of 100 \n";
	}

int Twoh(int amnt){
	int Q, notes,remamnt;
			Q= amnt/200;
			notes=Q;
		remamnt= amnt-Q*200;
		cout<<Q<<" notes of 200 \n";
		if(remamnt==0)
		exit(0);
		
		Oneh(remamnt);
		
	}

int Fiveh(int amnt){
	int Q, notes,remamnt;
	
			Q= amnt/500;
			notes=Q;
		remamnt= amnt-Q*500;
		cout<<Q<<" notes of 500 \n";
		if(remamnt==0)
		exit(0);
		
		Twoh(remamnt);
		
	}

int Thousand(int amnt){
	int Q,notes,remamnt;
		Q= amnt/1000;
		notes=Q;
		remamnt= amnt-Q*1000;
		cout<<Q<<" notes of 1000 \n";
		if(remamnt==0)
		exit(0);
	
		Fiveh(remamnt);
		
}

int main(){
	int amnt,Q,notes;
	cout<<"Enter the amount in multiples of 100 :";
	cin>>amnt;
	
	Q= amnt/2000;
		notes= Q;
		cout<<Q<<" notes of 2000 \n";
	int remamnt= amnt- Q*2000;
	if(remamnt==0)
		exit(0);
	Thousand(remamnt);

	
return 0;	
}
