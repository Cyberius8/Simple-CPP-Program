#include <iostream>
using namespace std;

void pertemuan5(double IPK)
 //pada pertemuan 5, membahas tentang macam-macam type data
{
	string Nama;
	int Anggota;
	char Kelas;
	bool Sudah;
	
	cout<<"Masukan Nama : ";cin>>Nama;
	cout<<"Kelas : ";cin>>Kelas;
	cout<<"Jumlah Anggota Keluarga : ";cin>>Anggota;
	cout<<"Sudah ?(true/false): ";cin>>Sudah;
	
	if(IPK > 3.00){
		cout << "Selamat atas nama " << Nama;
		cout << " Seorang mahasiswa dari kelas "<<Kelas;
		cout << " telah berhasil lulus  dengan IPK "<<IPK;
		int bantuan=Anggota * 50000;
		cout << " dan berhak mendapat hadiah sebesar Rp."<<bantuan<<endl;
		if(Sudah == true){
			cout << "Verifikasi berhasil";
		}else if(Sudah == false){
			cout << "Verifikasi Gagal";
		}
	}else{
		cout << "Sayang sekali Mahasiswa atas nama " << Nama;
		cout << " Dari kelas "<<Kelas;
		cout << " Harus mengulang semester karena hanya mendapat IPK sebesar "<<IPK;
		cout << " Jangan Semangat dan tetap menyerah"<<endl;;
		if(Sudah == true){
			cout << "Verifikasi berhasil";
		}else if(Sudah == false){
			cout << "Verifikasi Gagal";
		}
	}
}

int main()
{
	pertemuan5(2.02);
	return 0;
}	