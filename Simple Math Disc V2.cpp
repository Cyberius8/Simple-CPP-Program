#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (a == 0 || b == 0) {
        return a + b;
    }
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int modulo(int a, int b) {
    return (a % b + b) % b;
}

int moduloInverse(int a, int m) {
    a = modulo(a, m);
    for (int x = 1; x < m; x++)
        if (modulo(a * x, m) == 1)
            return x;
    return -1;
}

int chineseRemainder(int num[], int rem[], int len) {
    int prod = 1, result = 0;

    for (int i = 0; i < len; i++)
        prod *= rem[i];

    for (int i = 0; i < len; i++) {
        int pp = prod / rem[i];
        result += num[i] * moduloInverse(pp, rem[i]) * pp;
    }

    return modulo(result, prod);
}

int main()
{
    int pilihan, bilangan1, bilangan2, hasil_lcm, hasil_modulo, hasil_modulo_inverse, len, hasil_chinese_remainder;

    cout << "Pilih operasi matematika yang ingin dilakukan:" << endl;
    cout << "1. Teorema Euclidean" << endl;
    cout << "2. Aritmatika Modulo" << endl;
    cout << "3. Modulo Invers" << endl;
    cout << "4. Chinese Remainder Problem" << endl;
    cout << "Masukkan pilihan (1/2/3/4): ";
    cin >> pilihan;

    switch (pilihan)
    {
        case 1:
            cout << "Masukkan bilangan pertama: ";
            cin >> bilangan1;

            cout << "Masukkan bilangan kedua: ";
            cin >> bilangan2;

            cout << "FPB dari " << bilangan1 << " dan " << bilangan2 << " adalah " << gcd(bilangan1, bilangan2) << endl;
            break;

        case 2:
            cout << "Masukkan bilangan: ";
            cin >> bilangan1;

            cout << "Masukkan bilangan modulo: ";
            cin >> bilangan2;

            hasil_modulo = modulo(bilangan1, bilangan2);
            cout << "Hasil " << bilangan1 << " modulo " << bilangan2 << " adalah " << hasil_modulo << endl;

            break;

        case 3:
            cout << "Masukkan bilangan: ";
            cin >> bilangan1;

            cout << "Masukkan bilangan modulo: ";
            cin >> bilangan2;

            hasil_modulo_inverse = moduloInverse(bilangan1, bilangan2);
            if (hasil_modulo_inverse == -1) {
                cout << "Modulo invers dari " << bilangan1 << " pada modulo " << bilangan2 << " tidak ditemukan" << endl;
            } else {
                cout << "Hasil modulo invers dari " << bilangan1 << " pada modulo " << bilangan2 << " adalah " << hasil_modulo_inverse << endl;
            }

            break;

        case 4:
        	int len;
			cout << "Masukkan panjang array: ";
			cin >> len;
			int num[len], rem[len];
			for (int i = 0; i < len; i++) {
				cout << "Masukkan angka ke-" << i+1 << ": ";
				cin >> num[i];
				cout << "Masukkan sisa bagi ke-" << i+1 << ": ";
				cin >> rem[i];
			}
			int hasil_chinese_remainder = chineseRemainder(num, rem, len);
			cout << "Hasil dari Chinese remainder problem adalah: " << hasil_chinese_remainder << endl;
			break;
    }

    return 0;
}