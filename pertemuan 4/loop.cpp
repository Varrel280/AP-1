#include <iostream>
using namespace std;

int main() {
    // Goto Label , untuk melompat ke bagian program yg lain
    // Hello World, Fasilkom-TI, ILmu Komputer, IKLC
    // -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    // a: 
    //     cout << "Hello World" << endl;
    //     goto d;
    // b:
    //     cout << "Fasilkom-TI" << endl;
    //     return 0;
    // c:
    //     cout << "Ilmu Komputer" << endl;
    //     goto b;
    // d: 
    //     cout << "IKLC" << endl;
    //     goto c;

    // menampilkan bilangan genap 10 -> 2 dengan goto
    // int i = 10;
    // genap:
    // if(i % 2 == 0) {
    //     cout << i << endl;
    // } i--;

    // if(i >= 2) {
    //     goto genap;
    // }


    // Statement While
    // int i = 1;
    // while(i <= 10) {
    //     if (i % 2 == 0) {
    //         cout << i << " ";
    //     } i++;
    // }

    // Statement Do-While
    // int i = 1;
    // do {
    //     cout << i << endl;
    // } while (i <= 0);

    // Statement for
    // for (inisialisasi, kondisi, increase)
    // for (int i = 1; i <= 10; i+=2) { 
    //     cout << "Hello World" << endl;
    // }

    // nested for
    // ***** 5 x 5
    // for (int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= 5; j++) {
    //        cout << " * "; 
    //     }
    //     cout << endl;
    // }

    // segitiga siku-siku
    // for(int i = 1; i <= 5; i++) {
    //     for(int j = 1; j <= i; j++) {
    //         cout << "* ";
    //     }
    //     cout << endl;
    // }
}

#include <iostream> // Library untuk input-output
using namespace std; // Menggunakan namespace std agar tidak perlu menulis std:: setiap kali

int main() {
    // Goto Label , untuk melompat ke bagian program yg lain
    // Hello World, Fasilkom-TI, Ilmu Komputer, IKLC
    // Tujuan: Ubah urutan menjadi -> Hello World, IKLC, Ilmu Komputer, Fasilkom-TI

    /*
    a: // Label a
        cout << "Hello World" << endl; // Menampilkan "Hello World"
        goto d; // Lompat ke label d
    b: // Label b
        cout << "Fasilkom-TI" << endl; // Menampilkan "Fasilkom-TI"
        return 0; // Mengakhiri program
    c: // Label c
        cout << "Ilmu Komputer" << endl; // Menampilkan "Ilmu Komputer"
        goto b; // Lompat ke label b
    d: // Label d
        cout << "IKLC" << endl; // Menampilkan "IKLC"
        goto c; // Lompat ke label c
    */

    // Menampilkan bilangan genap dari 10 ke 2 menggunakan goto
    /*
    int i = 10; // Inisialisasi variabel i dengan 10
    genap: // Label genap
    if(i % 2 == 0) { // Jika i genap
        cout << i << endl; // Cetak nilai i
    }
    i--; // Kurangi nilai i
    if(i >= 2) { // Jika i masih >= 2
        goto genap; // Kembali ke label genap
    }
    */

    // Statement While
    /*
    int i = 1; // Inisialisasi i dengan 1
    while(i <= 10) { // Selama i <= 10
        if (i % 2 == 0) { // Jika i genap
            cout << i << " "; // Tampilkan nilai i diikuti spasi
        }
        i++; // Tambah i
    }
    */

    // Statement Do-While
    /*
    int i = 1; // Inisialisasi i dengan 1
    do {
        cout << i << endl; // Cetak nilai i
    } while (i <= 0); // Perulangan akan dilakukan minimal sekali, karena kondisi dicek di akhir
    */

    // Statement for
    /*
    // Bentuk umum: for (inisialisasi; kondisi; increment/decrement)
    for (int i = 1; i <= 10; i+=2) { // Mulai dari i = 1, selama i <= 10, tambahkan 2 setiap kali
        cout << "Hello World" << endl; // Tampilkan "Hello World"
    }
    */

    // Nested for (perulangan bersarang) untuk mencetak kotak bintang 5x5
    /*
    for (int i = 1; i <= 5; i++) { // Perulangan baris dari 1 sampai 5
        for(int j = 1; j <= 5; j++) { // Perulangan kolom dari 1 sampai 5
           cout << " * "; // Cetak bintang dengan spasi
        }
        cout << endl; // Pindah ke baris baru setelah satu baris selesai
    }
    */

    // Segitiga siku-siku dari bintang
    /*
    for(int i = 1; i <= 5; i++) { // Perulangan baris dari 1 sampai 5
        for(int j = 1; j <= i; j++) { // Cetak sebanyak i bintang di setiap baris
            cout << "* "; // Cetak bintang diikuti spasi
        }
        cout << endl; // Ganti baris setelah mencetak semua bintang di satu baris
    }
    */
}
