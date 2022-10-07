#include<iostream>
using namespace std;

class complex{
	int a,b;
	
	public:
		void getdata(int o1,int o2){
			a=o1;
			b=o2;
		}
		friend complex sumcomplex(complex x,complex y);
		void setdata(void){
			cout<<a<<" + "<<b<<"i"<<endl;
		}
};

complex sumcomplex(complex x,complex y){
	complex z;
//	a = x.a + y.a;
//	b = x.b + y.b;
    
    z.getdata((x.a + y.a),(x.b + y.b));
    return z;
}
	
int main(){
	complex a,b,c;
	a.getdata(5,7);
	a.setdata();
	b.getdata(4,6);
	b.setdata();
	c = sumcomplex(a,b);
	c.setdata();
	return 0;
}
