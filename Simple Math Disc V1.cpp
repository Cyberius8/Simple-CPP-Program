#include <iostream>
using namespace std;

int pangkat(int n, int p)
{
    if (p == 0)
    {
        return 1;
    }
    else
    {
        return n * pangkat(n, p - 1);
    }
}

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int permutasi(int n, int r)
{
    if (r == 0)
    {
        return 1;
    }
    else
    {
        return n * permutasi(n - 1, r - 1);
    }
}

int kombinasi(int n, int r)
{
    int hasil = 1;
    for (int i = 0; i < r; i++)
    {
        hasil *= (n - i);
        hasil /= (i + 1);
    }
    return hasil;
}

int main()
{
    int pilihan, bilangan1, bilangan2, pangkatBilangan, hasilPangkat, hasilPermutasi, hasilKombinasi;
    cout << "Pilih operasi matematika yang ingin dilakukan:" << endl;
    cout << "1. Perpangkatan" << endl;
    cout << "2. Deret Fibonacci" << endl;
    cout << "3. Permutasi" << endl;
    cout << "4. Kombinasi" << endl;

    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    switch (pilihan)
    {
        case 1:
            cout << "Masukkan bilangan: ";
            cin >> bilangan1;

            cout << "Masukkan pangkat bilangan: ";
            cin >> pangkatBilangan;

            hasilPangkat = pangkat(bilangan1, pangkatBilangan);
            cout << "Hasil " << bilangan1 << " pangkat " << pangkatBilangan << " adalah " << hasilPangkat << endl;

            break;

        case 2:
            cout << "Masukkan jumlah deret fibonacci yang ingin dihitung: ";
            cin >> bilangan1;

            cout << "Deret fibonacci dari " << bilangan1 << " adalah: ";
            for (int i = 0; i < bilangan1; i++)
            {
                cout << fibonacci(i) << " ";
            }
            cout << endl;

            break;

        case 3:
            cout << "Masukkan bilangan n pada permutasi (nPr): ";
            cin >> bilangan1;

            cout << "Masukkan bilangan r pada permutasi (nPr): ";
            cin >> bilangan2;

            hasilPermutasi = permutasi(bilangan1, bilangan2);
            cout << "Hasil permutasi dari " << bilangan1 << " dan " << bilangan2 << " adalah " << hasilPermutasi << endl;

            break;

        case 4:
            cout << "Masukkan bilangan n pada kombinasi (nCr): ";
            cin >> bilangan1;

            cout << "Masukkan bilangan r pada kombinasi (nCr): ";
            cin >> bilangan2;

            hasilKombinasi = kombinasi(bilangan1, bilangan2);
            cout << "Hasil kombinasi dari " << bilangan1 << " dan " << bilangan2 << " adalah " << hasilKombinasi << endl;

            break;

        default:
            cout << "Pilihan salah, silakan pilih 1, 2, 3, atau 4." << endl;
            break;
    }

    return 0;
}