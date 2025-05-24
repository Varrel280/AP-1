#include <iostream> // header untuk c++
#include <conio.h> // header untuk getche() dan getch()
using namespace std;

int main () {

    string nama;
    char kom, jenisKelamin;
    int nim;
    float ip;
    
    /* ini untuk komentar 
    beberapa baris */

    cout << "Hello world!" << endl;

    cout << "Masukkan nama : ";
    // cin >> nama;
    getline(cin, nama); // agar karakter spasi bisa terbaca

    cout << "Masukkan KOM : ";
    cin >> kom;

    cout << "Masukkan NIM : ";
    cin >> nim;

    cout << "Masukkan IP : ";
    cin >> ip;

    cout << "Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche(); // agar karakter langsung tampil, jadi ga perlu tekan enter

    /* untuk output */
    cout << "\n" << nama << endl;
    cout << kom << endl;
    cout << nim << endl;
    cout << ip << endl;
    putchar(jenisKelamin); // untuk menampilkan karakter jenis kelamin

    getch(); // karakter yang diketik ga ditampilkan di layar
}