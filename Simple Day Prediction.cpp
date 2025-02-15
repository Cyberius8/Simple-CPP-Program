#include <iostream>

using namespace std;

int main()
{
    string hari[7] = {"Minggu", "Senin", "Selasa", "Rabu", "Kamis", "Jumat", "Sabtu"};
    int var, input;
    cout << "Masukkan tahun : ";
    cin >> input;
    var = (365 * (input - 1)) + ((input - 1) / 4);
    if (input % 4 == 0)
    {
        var++;
    }
    cout << "Masukkan bulan : ";
    cin >> input;
    if ((var / 365) % 4 != 0 && input < 2)
    {
        var--;
    }
    var += 31 * (input - 1);
    if (input < 8 && input >= 3)
    {
        var -= (input + 3) / 2;
    }
    else if (input >= 8)
    {
        var -= (input + 2) / 2;
    }
    cout << "Masukkan hari : ";
    cin >> input;
    var += (input - 1);
    var %= 7;
    cout << "Prediksi Hari : " << hari[var];
}