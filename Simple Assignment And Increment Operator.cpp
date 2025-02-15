//Assignment and increment operators//
/* robot bisa nulis 300 huruf per menit
input berupa banyak waktu
dan output berupa banyak huruf yang bisa
ditulis dalam waktu tsb*/
#include <iostream>
using namespace std;
int main()
{
	int Robot = 300;
	int time;
	
	cout <<"banyak waktu : "; cin>>time;
	int banyak = time * Robot;
	cout <<"banyak huruf yang bisa diketik robot dalam " << time << " menit adalah "<<banyak;
	return 0;
}
