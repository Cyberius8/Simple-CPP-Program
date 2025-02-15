#include <iostream>
#include <cmath>
using namespace std;

void menu(),teobil(),invers(),cina();

int main(){
	menu();
}

void menu(){
	int pilih;
	cout<<"1. Teo Bil Eucledian"<<endl;
	cout<<"2. Invers"<<endl;
	cout<<"3. Cina"<<endl;
	cout<<">>";cin>>pilih;
	if(pilih==1){
		teobil();
	}
	if(pilih==2){
		invers();
	}
	if(pilih==3){
		cina();
	}
}

void teobil(){
	int input1,input2,x=0,y=0;
	cout<<"masukan 1 :";cin>>input1;
	cout<<"masukan 2 :";cin>>input2;
	do{
		x=0;y=0;
		x=(input1/input2);
		y=(input1-input2*x);
		cout<<input1<<" = "<<input2<<" * "<<x<<" + "<<y<<endl;
		input1=0;
		input1=input2;
		input2=y;
	}while(input2!=0);
	cout<<"FPB : "<<input1<<endl;
	if(input1!=1){
		cout<<"bukan relatif prima"<<endl;
	}else{
		cout<<"relatif prima"<<endl;
	}
	cout<<endl<<endl;
	menu();
}

void invers(){
	double x;
	double z=1;
	double a,b,k=0;
	cout<<"invers a mod b"<<endl;
	cout<<" a : ";cin>>a;
	cout<<" b : ";cin>>b;
	do{
		x=(1+(b*k))/a;
		cout<<x<<" = ( 1 + ( "<<b<<" * "<<k<<" ) ) / "<<a<<endl;
		k++;
	}while(fmod(x,z)!=0);
	cout<<x<<" mod "<<b;
	cout<<endl<<endl;
	menu();
}

void cina(){
	int a1,b1,a2,b2,a3,b3;
	int M,d1,d2,d3;
	int y1=1,y2=1,y3=1;
	int i,x;
	cout<<"a mod b//dibagi b sisa a//bersisa a dibagi b"<<endl;
	cout<<"a : ";cin>>a1;
	cout<<"b : ";cin>>b1;
	cout<<"c : ";cin>>a2;
	cout<<"d : ";cin>>b2;
	cout<<"e : ";cin>>a3;
	cout<<"f : ";cin>>b3;
	M=b1*b2*b3;
	d1=M/b1;
	d2=M/b2;
	d3=M/b3;
	do{
		i++;
		(d1*y1)%b1==1;
		(d2*y2)%b2==1;
		(d3*y3)%b3==1;
		if((d1*y1)%b1!=1){
			y1++;
		}
		if((d2*y2)%b2!=1){
			y2++;
		}
		if((d3*y3)%b3!=1){
			y3++;
		}
	}while((d1*y1)%b1&&(d2*y2)%b2&&(d3*y3)%b3!=1);
	cout<<y1<<endl<<y2<<endl<<y3<<endl;
	x=a1*d1*y1+a2*d2*y2+a3*d3*y3;
	x%=M;
	cout<<x<<" mod "<<M;
	cout<<endl<<endl;
	menu();
}

void findx(){
	
}