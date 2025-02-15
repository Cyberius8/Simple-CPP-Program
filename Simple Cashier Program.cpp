#include <iostream>
using namespace std;
int main(){
	int jumlah, bayar, kembalian,total;
	char pilih, ulang;
	do{	
	cout << "======================================\n";
	cout << "=======Selamat Datang di Dimsum=======\n";
	cout << "==============Nurhidayati=============\n";
	cout << "======================================\n";
	cout << "======================================\n";
	cout << "Yang Tersedia(All Varian Rp.13000) : "<<endl;
	cout << "1. Bakpao Pandan\n";
	cout << "2. Bakpao Galau\n";
	cout << "3. Bakpao Coklat\n";
	cout << "======================================\n";
	cout << "Pilih Dengan Nomor : "; cin >> pilih;
	switch(pilih){
		case '1':
		cout << "Bakpao Pandan\n";
		cout << "Jumlah : "; cin >> jumlah;
		total =  (13000)*jumlah; 
		cout << "Totalnya : Rp.";
		cout << total << endl;
		cout << "Bayar : Rp."; cin >> bayar;
		kembalian = bayar - total;
		cout << "Kembalian : Rp."<< kembalian;
		break;
		case '2':
		cout << "Bakpao Galau\n";
		cout << "Jumlah : "; cin >> jumlah;
		total =  (13000)*jumlah;
		cout << "'Totalnya : Rp.";
		cout << total << endl;
		cout << "Bayar : Rp."; cin >> bayar;
		kembalian = bayar - total;
		cout << "Kembalian : Rp."<< kembalian;
		break;
		case '3':
		cout << "Bakpao Coklat\n";
		cout << "Jumlah : "; cin >> jumlah;
		total =  (13000)*jumlah;
		cout << "Totalnya :  Rp."<<total<<endl;
		cout << "Bayar : Rp."; cin >> bayar;
		kembalian = bayar - total;
		cout << "Kembalian : Rp."<< kembalian;
		break;
	default:
		cout << "\nPilihan Anda Tidak Ada\n";
	}
	cout << "\n\n Mau Memesan Lagi ? (y/t) : "; cin >> ulang;
	}
	while (ulang == 'y' || ulang == 'y');
}
