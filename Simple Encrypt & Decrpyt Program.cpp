#include <iostream>
#include <string>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
using namespace std;

char input[1000], save1[1000], save2[1000], save3[1000], save4[1000];
char input2[1000], save5[1000], save6[1000], save7[1000], save8[1000];
char area[6][13] = {{65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77},
                    {78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90},
                    {96, 126, 49, 33, 50, 64, 51, 35, 52, 36, 53, 37, 54},
                    {94, 55, 38, 56, 42, 57, 40, 48, 41, 45, 95, 61, 43},
                    {122, 121, 120, 119, 118, 117, 116, 115, 114, 113, 112, 111, 110},
                    {109, 108, 107, 106, 105, 104, 103, 102, 101, 100, 99, 98, 97}};
int pilih, totalChar;

void encrypt();
void loading();
void encrypting();
void decrypt();
void hacking();
void decrypting();
void bye();

int main()
{
    system("color 0f");
    cout << "=== Simple Encrypt & Decrypt Program ===" << endl;
    cout << "============ by Kelompok 6 =============" << endl;
    cout << "1. Encrypt" << endl;
    cout << "2. Decrypt" << endl;
    cout << "3. Exit" << endl;
    cout << ">> ";
    cin >> pilih;
    switch (pilih)
    {
    case 1:
        encrypt();
        break;
    case 2:
        decrypt();
        break;
    case 3:
        bye();
        break;
    }
}

void encrypt()
{
    system("cls");
    system("color 02");
    cout << "Input to Encrypt : ";
    cin.ignore();
    cin.getline(input, 1000);
    // encrypt
    for (int i = 0; i < 1000; i++)
    {
        if (input[i] == ' ')
        {
            cout << ' ';
        }
        if (input[i] == 32)
        {
            save1[i] = 63;
        }
        else
        {
            for (int j = 0; j < 6; j++)
            {
                for (int k = 0; k < 13; k++)
                {

                    if (input[i] == area[j][k])
                    {
                        save1[i] = area[(j + 2) % 6][(k + 2) % 13];
                    }
                }
            }
        }
    }
    // encrypt 2
    for (int i = 0; i < 1000; i++)
    {
        if (save1[i] == 63)
        {
            save2[i] = 63;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save1[i] == area[j][k])
                {
                    save2[i] = area[(j + 4) % 6][(k + 4) % 13];
                }
            }
        }
    }
    // encrypt 3
    for (int i = 0; i < 1000; i++)
    {
        if (save2[i] == 63)
        {
            save3[i] = 63;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save2[i] == area[j][k])
                {
                    save3[i] = area[(j + 6) % 6][(k + 6) % 13];
                }
            }
        }
    }
    // encrypt 4
    for (int i = 0; i < 1000; i++)
    {
        if (save3[i] == 63)
        {
            save4[i] = 63;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save3[i] == area[j][k])
                {
                    save4[i] = area[(j + 8) % 6][(k + 8) % 13];
                }
            }
        }
    }
    loading();
}

void loading()
{
    system("cls");
    char a = 95, b = 35;
    cout << "Encrypting...";
    cout << "\n";
    for (int i = 0; i <= 25; i++)
        cout << a;
    Sleep(50);
    cout << "\r ";
    for (int i = 0; i < 25; i++)
    {
        cout << b;
        Sleep(100);
    }
    cout << endl;
    cout << "Encrypt Success!";
    cout << endl;
    encrypting();
}

void encrypting()
{
    cout << "Encrypted : ";
    for (int i = 0; i < 1000; i++)
    {
        if (save1[i] != '\0')
        {
            cout << save1[i];
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (save2[i] != '\0')
        {
            cout << save2[i];
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (save3[i] != '\0')
        {
            cout << save3[i];
        }
    }
    for (int i = 0; i < 1000; i++)
    {
        if (save4[i] != '\0')
        {
            cout << save4[i];
        }
    }
    cout << endl;
    getch();
    system("cls");
    main();
}

void decrypt()
{
    system("cls");
    system("color 04");
    cout << "Input to Decrypt : ";
    cin.ignore();
    gets(input2);
    for (int i = 0; input2[i] != '\0'; i++)
    {
        if (input2[i] != ' ')
        {
            totalChar++;
        }
    }
    int part = totalChar / 4;
    // decrypt1
    for (int i = 0; i < part; i++)
    {
        if (input2[i] == 63)
        {
            save5[i] = 32;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (input2[i] == area[j][k])
                {
                    save5[i] = area[(j + 10) % 6][(k + 11) % 13];
                }
            }
        }
    }
    // decrypt2
    for (int i = part; i < part * 2; i++)
    {
        if (save5[i] == 63)
        {
            save6[i] = 32;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save5[i] == area[j][k])
                {
                    save6[i] = area[(j + 8) % 6][(k + 9) % 13];
                }
            }
        }
    }
    // decrypt3
    for (int i = part * 2; i < part * 3; i++)
    {
        if (save6[i] == 63)
        {
            save7[i] = 32;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save6[i] == area[j][k])
                {
                    save7[i] = area[(j + 6) % 6][(k + 7) % 13];
                }
            }
        }
    }
    // decrypt4
    for (int i = part * 3; i < part * 4; i++)
    {
        if (save7[i] == 63)
        {
            save8[i] = 32;
        }
        for (int j = 0; j < 6; j++)
        {
            for (int k = 0; k < 13; k++)
            {
                if (save7[i] == area[j][k])
                {
                    save8[i] = area[(j + 4) % 6][(k + 5) % 13];
                }
            }
        }
    }

    hacking();
}

void hacking()
{
    system("cls");
    char a = 95, b = 35;
    cout << "Hacking...";
    cout << "\n";
    for (int i = 0; i <= 25; i++)
        cout << a;
    Sleep(50);
    cout << "\r ";
    for (int i = 0; i < 25; i++)
    {
        cout << b;
        Sleep(100);
    }
    cout << endl;
    cout << "Hack Success!";
    cout << endl;
    decrypting();
}

void decrypting()
{
    cout << "Decrypted : ";
    for (int i = 0; i < totalChar; i++)
    {
        if (save5[i] != '\0')
        {
            cout << save5[i];
        }
    }
    for (int i = 0; i < totalChar; i++)
    {
        if (save6[i] != '\0')
        {
            cout << save6[i];
        }
    }
    for (int i = 0; i < totalChar; i++)
    {
        if (save7[i] != '\0')
        {
            cout << save7[i];
        }
    }
    for (int i = 0; i < totalChar; i++)
    {
        if (save8[i] != '\0')
        {
            cout << save8[i];
        }
    }

    cout << endl;
    getch();
    system("cls");
    main();
}

void bye()
{
    system("cls");
    system("color 06");
    char mantep1[50] = {32, 32, 95, 95, 95, 95, 95, 95, 95, 32, 95, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 95, 32, 32, 32, 32, 32, 32, 32, 32, 32, 95, 32};
    char mantep2[50] = {32, 124, 95, 95, 32, 32, 32, 95, 95, 124, 32, 124, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 32, 124, 32, 124, 32, 32, 32, 32, 32, 32, 32, 124, 32, 124};
    char mantep3[50] = {32, 32, 32, 32, 124, 32, 124, 32, 32, 124, 32, 124, 95, 95, 32, 32, 32, 95, 95, 32, 95, 32, 95, 32, 95, 95, 32, 124, 32, 124, 32, 95, 95, 32, 95, 95, 95, 124, 32, 124};
    char mantep4[50] = {32, 32, 32, 32, 124, 32, 124, 32, 32, 124, 32, 39, 95, 32, 92, 32, 47, 32, 95, 96, 32, 124, 32, 39, 95, 32, 92, 124, 32, 124, 47, 32, 47, 124, 95, 32, 32, 47, 32, 124};
    char mantep5[50] = {32, 32, 32, 32, 124, 32, 124, 32, 32, 124, 32, 124, 32, 124, 32, 124, 32, 40, 95, 124, 32, 124, 32, 124, 32, 124, 32, 124, 32, 32, 32, 60, 32, 32, 47, 32, 47, 124, 95, 124};
    char mantep6[50] = {32, 32, 32, 32, 124, 95, 124, 32, 32, 124, 95, 124, 32, 124, 95, 124, 92, 95, 95, 44, 95, 124, 95, 124, 32, 124, 95, 124, 95, 124, 92, 95, 92, 47, 95, 95, 95, 40, 95, 41};

    for (int i = 0; i < 40; i++)
    {
        cout << mantep1[i];
        Sleep(1);
    }
    cout << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << mantep2[i];
        Sleep(1);
    }
    cout << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << mantep3[i];
        Sleep(1);
    }
    cout << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << mantep4[i];
        Sleep(1);
    }
    cout << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << mantep5[i];
        Sleep(1);
    }
    cout << endl;
    for (int i = 0; i < 40; i++)
    {
        cout << mantep6[i];
        Sleep(1);
    }
    cout << endl;
    cout << endl;
}