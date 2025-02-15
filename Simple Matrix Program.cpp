#include <iostream>
using namespace std;
int main (){
	int a,b,c,d,e,f,g,h,i,Det,x,y,z,Detx,Dety,Detz,j,k,l,p,q,ka,kb,kc,kd,ke,kf,kg,kh,ki,kb1,kd1,kf1,kh1;
	char pilih, ulang;
	
	do{
		cout << "----------------------\n\n";
		cout << "Selamat Datang Di Calculator Matriks Edition\n\n";
		cout << "1. 2x2\n";
		cout << "2. 3x3\n";
		cout << "pilih(1,2) : ";cin>>pilih;
		cout << "-----------------------\n\n";
		switch(pilih){
			case '1':
				cout << "matriks 2x2\n";
				cout << "|a b| _ |j|\n";
				cout << "|c d| - |k|\n";
				cout << "Masukan Nilai a : ";cin>>a;
				cout << "Masukan Nilai b : ";cin>>b;
				cout << "Masukan Nilai c : ";cin>>c;
				cout << "Masukan Nilai d : ";cin>>d;
				cout << "Masukan Hasil j : ";cin>>j;
				cout << "Masukan Hasil k : ";cin>>k;
				cout << "-------------------\n";
				p = b * (-1);
				q = c * (-1);
				Det = (a * d) - (b * c);
				Detx= (j * d) - (b * k);
				x = Detx / Det;
				Dety= (a * k) - (j * c);
				y = Dety / Det;
				cout << "Nilai Determinannya adalah "<<Det<<endl<<endl;
				cout << "x = "<<x<<endl;
				cout << "y = "<<y<<endl<<endl;
				cout << "Inversnya adalah "<<endl;
				cout << "1/|"<<d;
				cout <<" "<<p<<"|"<<endl;
				cout << Det<<"|"<<q;
				cout <<" "<<a<<"|"<<endl;
				break;
			case '2':
				cout << "Matriks 3x3\n";
				cout << "|a b c| _ |j|\n";
				cout << "|d e f| - |k|\n";
				cout << "|g h i|   |l|\n";
				cout << "Masukan Nilai a: ";cin>>a;
				cout << "Masukan Nilai b: ";cin>>b;
				cout << "Masukan Nilai c: ";cin>>c;
				cout << "Masukan Nilai d: ";cin>>d;
				cout << "Masukan Nilai e: ";cin>>e;
				cout << "Masukan Nilai f: ";cin>>f;
				cout << "Masukan Nilai g: ";cin>>g;
				cout << "Masukan Nilai h: ";cin>>h;
				cout << "Masukan Nilai i: ";cin>>i;
				cout << "Masukan Nilai j: ";cin>>j;
				cout << "Masukan Nilai k: ";cin>>k;
				cout << "Masukan Nilai l: ";cin>>l;
				Det = (a * e * i)+(b * f * g)+(c * d * h)-(c * e * g)-(b * d * i)-(a * f * h);
				ka = (e*i)-(h*f);
				kb1 = (d*i)-(g*f);
				kb = kb1 * (-1);
				kc = (d*h)-(g*e);
				kd1 = (b*i)-(h*c);
				kd = kd1 * (-1);
				ke = (a*i)-(g*c);
				kf1 = (a*h)-(g*b);
				kf = kf1 * (-1);
				kg = (b*f)-(e*c);
				kh1 = (a*f)-(d*c);
				kh = kh1 * (-1);
				ki = (a*e)-(b*d);
				Detx = (j * e * i)+(b * f * l)+(c * k * h)-(c * e * l)-(b * k * i)-(j * f * h);
				Dety = (a * k * i)+(j * f * g)+(c * d * l)-(c * k * g)-(j * d * i)-(a * f * l);
				Detz = (a * e * l)+(b * k * g)+(j * d * h)-(j * e * g)-(b * d * l)-(a * k * h);
				x = Detx/Det;
				y = Dety/Det;
				z = Detz/Det;
				cout << "Nilai Det : "<<Det<<endl;
				cout << "Nilai x : "<<x<<endl;
				cout << "Nilai y : "<<y<<endl;
				cout << "Nilai z : "<<z<<endl;
				cout << "inversnya adalah \n";
				cout << "1"  "|"<<ka<<" "<<kd<<" "<<kg<<"|"<<endl;
				cout << "-"  "|"<<kb<<" "<<ke<<" "<<kh<<"|"<<endl;
				cout << Det<<"|"<<kc<<" "<<kf<<" "<<ki<<"|"<<endl;
				break;	
			default:
				cout << "\n pilihan anda tidak ada dalam sistem\n";				
		}
		cout << "\n\n kembali ke menu utama? (y/n) : ";cin>>ulang;
	}
	while (ulang == 'y' || ulang == 'y');
}
