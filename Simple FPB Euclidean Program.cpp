#include<iostream>
using namespace std;

int FPB (int m, int n){
	int r;
	while (n!=0){
	r = m % n;
	m = n;
	n = r;
	} return m;
} 
int main(){
    system("cls");
	int x, y;
	cout<<"Masukkan Angka Pertama : ";
	cin>>x;
	cout<<"Masukkan Angka Kedua : ";
	cin>>y;
	cout<<"FPB = "<<FPB(x,y);
	return 0;
}