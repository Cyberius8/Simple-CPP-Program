#include <iostream>
using namespace std;

double nilai=0,input,hasil=1;
double hitung();

int main(){
	cout<<"Masukkan angka : ";cin>>input;
	hitung();
}

double hitung(){
	for(int i=1;i<input;i++){
		double a=1;
		double b=(i+1);
		double c=(a/b);
		double d=b+c;
		nilai=a/d;
		hasil+=nilai;
	}
	cout<<hasil;
	return hasil;
}