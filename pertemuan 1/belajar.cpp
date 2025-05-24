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


#include <iostream> // Header standar untuk input/output (cout, cin, endl, dll)
#include <conio.h>  // Header untuk fungsi getch() dan getche(), khusus di Windows
using namespace std; // Agar bisa menggunakan cout, cin, string, dll tanpa awalan std::

int main () { // Fungsi utama program

    string nama;           // Variabel untuk menyimpan nama (bisa terdiri dari banyak kata)
    char kom, jenisKelamin; // Variabel karakter untuk KOM dan jenis kelamin
    int nim;               // Variabel untuk menyimpan NIM (angka)
    float ip;              // Variabel untuk menyimpan IP (Indeks Prestasi)

    /* ini untuk komentar 
    beberapa baris */      // Komentar blok, tidak akan diproses oleh compiler

    cout << "Hello world!" << endl; // Menampilkan teks ke layar, lalu pindah baris

    cout << "Masukkan nama : "; 
    // cin >> nama;        // Tidak digunakan karena hanya membaca 1 kata pertama
    getline(cin, nama);    // Membaca seluruh baris, termasuk spasi dalam nama

    cout << "Masukkan KOM : ";
    cin >> kom;            // Membaca 1 karakter untuk kode KOM

    cout << "Masukkan NIM : ";
    cin >> nim;            // Membaca nilai NIM (angka)

    cout << "Masukkan IP : ";
    cin >> ip;             // Membaca nilai IP (angka desimal)

    cout << "Masukkan jenis kelamin (L/P) : ";
    jenisKelamin = getche(); // Membaca satu karakter dan langsung menampilkannya tanpa perlu tekan enter

    /* untuk output */
    cout << "\n" << nama << endl;       // Menampilkan nama yang telah dimasukkan
    cout << kom << endl;                // Menampilkan KOM
    cout << nim << endl;                // Menampilkan NIM
    cout << ip << endl;                 // Menampilkan IP
    putchar(jenisKelamin);             // Menampilkan jenis kelamin (fungsi dari C)

    getch(); // Menunggu input karakter tanpa menampilkannya di layar (biasanya untuk jeda program sebelum keluar)
}
