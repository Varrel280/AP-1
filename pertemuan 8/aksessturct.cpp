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