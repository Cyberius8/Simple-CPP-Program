#include <iostream>
using namespace std;
int main (){
	int alas, tinggi, panjang, lebar, sisi, atas, bawah, D1, D2, r, depan, samping, miring, Luas;
	char pilih, ulang;
	
	do{
		cout << "------------------------\n";
		cout << "Selamat Datang Di Calculator (Luas Edition)\n\n";
		cout << "Memilih Program\n\n";
		cout << "1. Luas Segitiga\n";
		cout << "2. Luas Persegi\n";
		cout << "3. Luas Persegi Panjang\n";
		cout << "4. Luas Trapesium\n";
		cout << "5. Luas Jajargenjang\n";
		cout << "6. Luas Layang Layang\n";
		cout << "7. Luas Belah Ketupat\n";
		cout << "8. Luas Lingkaran\n";
		cout << "9. Segitiga Phytagoras\n";
		cout << "pilih (1,2,3,4,5,6,7,8,9) : ";cin >> pilih;
		cout << "------------------------\n";
		switch(pilih){
			case '1':
				cout << "Luas Segitiga\n\n";
				cout << "Masukan Nilai Alas : ";cin>>alas;
				cout << "Masukan Nilai Tinggi : ";cin>>tinggi;
				Luas = alas * tinggi;
				cout << "\n Luas Segitiga Tersebut : " << Luas;
				break;
			case '2':
				cout << "Luas Persegi\n\n";
				cout << "Masukan Nilai Sisi : ";cin>>sisi;
				Luas = sisi * sisi;
				cout << "\n Luas Persegi Tersebut : " << Luas;
				break;
			case '3':
				cout << "Luas Persegi panjang\n\n";
				cout << "Masukan Nilai Panjang : ";cin>>panjang;
				cout << "Masukan Nilai Lebar : ";cin>>lebar;
				Luas = panjang * lebar;
				cout << "\n Luas Persegi panjang Tersebut : " << Luas;
				break;
			case '4':
				cout << "Luas Trapesium\n\n";
				cout << "Masukan Nilai Alas Atas : ";cin>>atas;
				cout << "Masukan Nilai Alas Bawah : ";cin>>bawah;
				cout << "Masukan Nilai Tinggi : ";cin>>tinggi;
				Luas = ((atas + bawah) * tinggi)/2;
				cout << "\n Luas Trapesium Tersebut : " << Luas;
				break;
			case '5':
				cout << "Luas Jajargenjang\n\n";
				cout << "Masukan Nilai Alas : ";cin>>alas;
				cout << "Masukan Nilai Tinggi : ";cin>>tinggi;
				Luas = alas * tinggi;
				cout << "\n Luas Jajargenjang Tersebut : " << Luas;
				break;
			case '6':
				cout << "Luas Layang layang\n\n";
				cout << "Masukan Nilai Diagonal 1 : ";cin>>D1;
				cout << "Masukan Nilai Diagonal 2 : ";cin>>D2;
				Luas = (1/2) * D1 * D2;
				cout << "\n Luas Layang Layang Tersebut : " << Luas;
				break;
			case '7':
				cout << "Luas Belah Ketupat\n\n";
				cout << "Masukan Nilai Diagonal 1 : ";cin>>D1;
				cout << "Masukan Nilai Diagonal 2 : ";cin>>D2;
				Luas = (1/2) * D1 * D2;
				cout << "\n Luas Belah Ketupat Tersebut : " << Luas;
				break;
			case '8':
				cout << "Luas Lingkaran\n\n";
				cout << "Masukan Jari Jari : ";cin>>r;
				Luas = (3.1415926536) * r * r;
				cout << "\n Luas Lingkaran Tersebut : " << Luas;
				break;
			case '9':
				cout << "Phtagoras\n\n";
				cout << "Masukan Nilai Depan : ";cin>>depan;
				cout << "Masukan Nilai Samping : ";cin>>samping;
				miring = (depan * depan) + (samping * samping);
				cout << "phtagoras : "<< miring;
				break;
			default:
				cout << "\npilihan anda tidak ada dalam sistem\n";							
			
		}
		cout << "\n\n kembali ke menu utama? (y/n) : ";cin >> ulang;
	}
	while (ulang == 'y' || ulang == 'y');
}
