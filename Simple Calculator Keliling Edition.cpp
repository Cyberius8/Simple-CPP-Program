#include <iostream>
using namespace std;
int main (){
	int a,b,c,d,r, Keliling;
	char pilih, ulang;
	
	do{
		cout << "----------------------\n\n";
		cout << "Selamat Datang Di Calculator Keliling Edition\n\n";
		cout << "1. Keliling Segitiga\n";
		cout << "2. Keliling Persegi\n";
		cout << "3. Keliling Persegi Panjang\n";
		cout << "4. Keliling Trapesium\n";
		cout << "5. Keliling Jajargenjang\n";
		cout << "6. Keliling Layang Layang\n";
		cout << "7. Keliling Belah Ketupat\n";
		cout << "8. Keliling Lingkaran\n";
		cout << "pilih(1,2,3,4,5,6,7,8) : ";cin>>pilih;
		cout << "-----------------------\n\n";
		switch(pilih){
			case '1':
				cout << "Keliling Segitiga\n";
				cout << "Masukan Nilai a(pertama) : ";cin>>a;
				cout << "Masukan Nilai b(kedua) : ";cin>>b;
				cout << "Masukan Nilai c(ketiga) : ";cin>>c;
				Keliling = a + b + c;
				cout << "Keliling Segitiga Tersebut : "<<Keliling;
				break;
			case '2':
				cout << "Keliling Persegi\n";
				cout << "Masukan Nilai a(sisi) : ";cin>>a;
				Keliling = 4 * a;
				cout << "Keliling Persegi Tersebut : "<<Keliling;
				break;	
			case '3':
				cout << "Keliling Persegi Panjang\n";
				cout << "Masukan Nilai a(panjang) : ";cin>>a;
				cout << "Masukan Nilai b(lebar) : ";cin>>b;
				Keliling = 2 * (a + b);
				cout << "Keliling Persegi Panjang Tersebut : "<<Keliling;
				break;
			case '4':
				cout << "Keliling Trapesium\n";
				cout << "Masukan Nilai a(pertama) : ";cin>>a;
				cout << "Masukan Nilai b(kedua) : ";cin>>b;
				cout << "Masukan Nilai c(ketiga) : ";cin>>c;
				cout << "Masukan Nilai d(keempat) : ";cin>>d;
				Keliling = a + b + c + d;
				cout << "Keliling Trapesium Tersebut : "<<Keliling;
				break;
			case '5':
				cout << "Keliling Jajargenjang\n";
				cout << "Masukan Nilai a(pertama) : ";cin>>a;
				cout << "Masukan Nilai b(kedua) : ";cin>>b;
				Keliling = 2 * (a + b);
				cout << "Keliling Jajargenjang Tersebut : "<<Keliling;
				break;
			case '6':
				cout << "Keliling Layang Layang\n";
				cout << "Masukan Nilai a(pertama) : ";cin>>a;
				cout << "Masukan Nilai b(kedua) : ";cin>>b;
				Keliling = 2 * (a + b);
				cout << "Keliling Layang Layang Tersebut : "<<Keliling;
				break;	
			case '7':
				cout << "Keliling Belah Ketupat\n";
				cout << "Masukan Nilai a(pertama) : ";cin>>a;
				Keliling = 4 * a;
				cout << "Keliling Belah Ketupat Tersebut : "<<Keliling;
				break;
			case '8':
				cout << "Keliling Lingkaran\n";
				cout << "Masukan Nilai r(Jari Jari) : ";cin>>r;
				Keliling = 2 * (3.1415926536) * r;
				cout << "Keliling Lingkaran Tersebut : "<<Keliling;
				break;
			default:
				cout << "\n pilihan anda tidak ada dalam sistem\n";				
		}
		cout << "\n\n kembali ke menu utama? (y/n) : ";cin>>ulang;
	}
	while (ulang == 'y' || ulang == 'y');
}
