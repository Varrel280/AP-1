#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
};

int main () {
    Mahasiswa mhs1;

    mhs1.nama = "Varrel";
    mhs1.umur = 19;
    mhs1.ipk = 3.60;

    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "Ipk : " << mhs1.ipk << endl;

    Mahasiswa *ptrMhs = &mhs1;
    cout << "Akses dengan -> : " << endl;
    cout << "Akses dengan . : " << endl;
    cout << "Nama : " << ptrMhs ->nama << endl;
    cout << "Umur : " << ptrMhs ->umur << endl;
    cout << "Ipk : " <<ptrMhs ->ipk << endl;



}

#include <iostream>   // Untuk fungsi input/output seperti cout
#include <string>     // Untuk tipe data string
using namespace std;  // Agar tidak perlu menggunakan std:: di setiap cout, string, dll
struct Mahasiswa {
    string nama;   // Menyimpan nama mahasiswa
    int umur;      // Menyimpan umur mahasiswa
    float ipk;     // Menyimpan IPK mahasiswa
};
int main () {
    Mahasiswa mhs1; // Membuat variabel mhs1 dari struct Mahasiswa
    mhs1.nama = "Varrel";   // Mengisi nama mahasiswa
    mhs1.umur = 19;         // Mengisi umur mahasiswa
    mhs1.ipk = 3.60;        // Mengisi IPK mahasiswa
    // cout << "Akses dengan . : " << endl;
    // cout << "Nama : " << mhs1.nama << endl;
    // cout << "Umur : " << mhs1.umur << endl;
    // cout << "Ipk : " << mhs1.ipk << endl;
    Mahasiswa *ptrMhs = &mhs1;  // Pointer ptrMhs menunjuk ke alamat mhs1
    cout << "Akses dengan -> : " << endl;     // Judul output
    cout << "Nama : " << ptrMhs->nama << endl; // Mengakses anggota struct melalui pointer dengan -> 
    cout << "Umur : " << ptrMhs->umur << endl;
    cout << "Ipk : " << ptrMhs->ipk << endl;
