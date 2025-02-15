#include<iostream>
#include <bits/stdc++.h>
using namespace std;

struct nilai {
	int angka[100];
	int jumlah;
	int max;
	int min;
	float total=0;
	float rata;
} nl;

void menu() {
	cout << "<Mencari nilai terbesar, terkecil, mean, standar deviasi>" << endl;
	cout << endl;
	cout << "Masukkan jumlah angka \t: ";
	cin >> nl.jumlah;

	for (int i = 0; i < nl.jumlah; i++) {
		cout << "Masukkan Angka \t\t: ";
		cin >> nl.angka[i];
		if ( i == 0 ) {
			nl.min = nl.angka[i];
			nl.max = nl.angka[i];
		} else if ( nl.min > nl.angka[i] ) {
			nl.min = nl.angka[i];
		} else if ( nl.max < nl.angka[i]) {
			nl.max = nl.angka[i];
		} else {}
		nl.total=nl.total+nl.angka[i];
	}

	cout << "==============================="<<endl ;
	cout << "Total \t\t\t: " <<  nl.total << endl;
	nl.rata=nl.total/nl.jumlah;
	cout <<fixed<<setprecision(2);
	cout << "Nilai Mean \t\t: " << nl.rata << endl;
	cout<<"nilai diatas mean : ";
	for(int i=1; i<=nl.jumlah; i++) {
		if(nl.angka[i-1]>nl.rata){
			cout<<nl.angka[i-1]<<",";
		}
	}
	cout<<endl;
	cout<<"nilai dibawah mean : ";
	for(int i=1; i<=nl.jumlah; i++) {
		if(nl.angka[i-1]<=nl.rata){
			cout<<nl.angka[i-1]<<",";
		}
	}
	cout<<endl;
	float standar_deviasi=sqrt(nl.rata);
	cout<<"Standart deviasi\t: "<<standar_deviasi<<endl;

	cout << "Nilai MIN \t\t: " <<  nl.min << endl;
	cout << "Nilai MAX \t\t: " <<  nl.max << endl;

}

int main() {
	menu();
	return 0;
}