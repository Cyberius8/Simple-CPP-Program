#include <iostream>
using namespace std;

// Fungsi untuk menghitung faktorial
int faktorial(int n)
{
    int hasil = 1;
    for (int i = 1; i <= n; i++)
    {
        hasil *= i;
    }
    return hasil;
}

// Fungsi untuk menghitung permutasi
int permutasi(int n, int r)
{
    return faktorial(n) / faktorial(n - r);
}

int main()
{
    int n, r;
    cout << "Masukkan nilai n: ";
    cin >> n;
    cout << "Masukkan nilai r: ";
    cin >> r;

    if (n >= r)
    {
        int hasil = permutasi(n, r);
        cout << "Hasil permutasi: " << hasil << endl;
    }
    else
    {
        cout << "Nilai n harus lebih besar atau sama dengan r." << endl;
    }
}