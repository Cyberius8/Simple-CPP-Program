#include <iostream>
using namespace std;

int fungsi(int k) {
	if(k>0) {
		return k*fungsi(k-1);
	} else {
		return 1;
	}
}

int fungsi2(int k) {
	int f=1;
	for(int i=1; i<=k; i++) {
		f*=i;
	}
	return f;
}

int main() {
	int k;
	cout<<"Masukan Angka : ";
	cin>>k;
	int result = fungsi2(k);//2 atau 1
	cout<<result;
}