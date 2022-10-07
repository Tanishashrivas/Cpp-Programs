#include<iostream>
using namespace std;

int Oneh(int amnt){
	int Q, notes,remamnt;//remamnt is remaining amount and Q is quotient
		if(amnt%100==0){
			Q= amnt/100;
			notes=Q;
			cout<<Q<<" notes of 100 \n";
			exit(0);	
		}
	else if(amnt>100){
		Q= amnt/100;
		remamnt= amnt-Q*100;
		cout<<Q<<" notes of 100 \n";
		}
	}

int Twoh(int amnt){
	int Q, notes,remamnt;
		if(amnt%200==0){
			Q= amnt/200;
			notes=Q;
			cout<<Q<<" notes of 200 \n";
			exit(0);	
		}
	else if(amnt>200){
		Q= amnt/200;
		remamnt= amnt-Q*200;
		cout<<Q<<" notes of 200 \n";
		Oneh(remamnt);
		}
	}

int Fiveh(int amnt){
	int Q, notes,remamnt;
		if(amnt%500==0){
			Q= amnt/500;
			notes=Q;
			cout<<Q<<" notes of 500 \n";
			exit(0);	
		}
	else if(amnt>500){
		Q= amnt/500;
		remamnt= amnt-Q*500;
		cout<<Q<<" notes of 500 \n";
		Twoh(remamnt);
		}
	}

int Thousand(int amnt){
	int Q,notes,remamnt;
		if(amnt%1000==0){
			Q= amnt/1000;
			notes=Q;
			cout<<Q<<" notes of 1000 \n";
			exit(0);
		}
		else if(amnt>1000){
		    Q= amnt/1000;
			remamnt= amnt-Q*1000;
			cout<<Q<<" notes of 1000 \n";
			Fiveh(remamnt);
		}
}

int main(){
	int amnt, remamnt, Q,notes;
	cout<<"Enter the amount in multiples of 100 :";
	cin>>amnt;
	 
	if(amnt%2000==0){
		Q= amnt/2000;
		notes= Q;
		cout<<Q<<" notes of 2000 \n";
		exit(0);
	}
	else if(amnt>2000){
		Q= amnt/2000;
		remamnt= amnt-Q*2000;
		cout<<Q<<" notes of 2000 \n";
		Thousand(remamnt);
	}
	
	
return 0;	
}
