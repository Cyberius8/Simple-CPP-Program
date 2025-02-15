#include<iostream>
#include <cstdlib>
using namespace std;

double f(double x){
	return (x*x*x)+(3*x)-5;
}

int main(){
	double a,b,x,fa,fb,fx,e;
	int i=0;
	a=1;
	b=2;
	e=0.01;
	do{
		
		//input
		fa=f(a);
		fb=f(b);
		x=(a+b)/2;
		fx=f(x);
		
		//tampilan
		cout<<"========================="<<endl;
		cout<<"iterasi ke-"+i<<endl;
		cout<<a<<endl;
		cout<<b<<endl;
		cout<<x<<endl;
		cout<<fa<<endl;
		cout<<fb<<endl;
		cout<<fx<<endl;
		
		if(fx*fa<0){
			b=x;
		}else{
			a=x;
		}
		i++;	
	}while(abs(fx)>e);
}