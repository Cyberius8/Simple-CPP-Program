#include <iostream>
using namespace std;
 
int modInverse(int a, int m)
{
    for (int x = 1; x < m; x++)
        if (((a%m) * (x%m)) % m == 1)
            return x;
}
 
int main(){
    system("cls");
  //inverse dari a mod m
  	int x,y;
	cout<<"Masukkan Angka : ";
	cin>>x;
	cout<<"Masukkan Modulus : ";
	cin>>y;
    cout <<"Hasil : "<< modInverse(x, y);
    return 0;
}