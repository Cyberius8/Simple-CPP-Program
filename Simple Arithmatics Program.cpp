//Ukur Luas ruangan//
/* perlu cat buat lantai berbentuk kotak
berdasarkan lebar dan panjang
jadi perlu perkalian*/
#include <iostream>
using namespace std;
int main()
{
	double length;
	double width;
	cout << "panjangnya adalah ";cin>>length;
	cout << "lebarnya adalah ";cin>>width;
	double area = length * width;
	cout << "luas area adalah "<<area;
	return 0;
}
