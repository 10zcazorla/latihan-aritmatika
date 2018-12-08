#include <iostream>
#include <conio.h>

using namespace std;

int Penjumlahan()
{
    float a,b;
    char aritmatika;
    cout << "(1) Operasi Penjumlahan" << endl;
    cout << "Masukkan bilangan pertama = ";
    cin >> a;
    cout << "Masukkan bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a+b << endl;
}
int Pengurangan()
{
    float a,b;
    char aritmatika;
    cout << "(2) Operasi Pengurangan" << endl;
    cout << "Masukkan bilangan pertama = ";
    cin >> a;
    cout << "Masukkan bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a-b << endl;
}
int Perkalian()
{
    float a,b;
    char aritmatika;
    cout << "(3) Operasi Perkalian" << endl;
    cout << "Masukkan bilangan pertama = ";
    cin >> a;
    cout << "Masukkan bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a*b << endl;
}
int Pembagian()
{
    float a,b;
    char aritmatika;
    cout << "(4) Operasi Pembagian" << endl;
    cout << "Masukkan bilangan pertama = ";
    cin >> a;
    cout << "Masukkan bilangan kedua = ";
    cin >> b;
    cout << "Hasil = " << a/b << endl;
}
int main ()
{
    cout << endl;
    Penjumlahan();
    Pengurangan();
    Perkalian();
    Pembagian();
    cout << endl;
    getch();
    return 0;
}
