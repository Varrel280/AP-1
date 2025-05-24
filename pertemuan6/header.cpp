#include <iostream> // bawaan
 #include <cmath> // bawaan
 #include "headerCustom.h" // header yg buat sendiri
 
 u;
 
 int jumlah (int a, int b) {
     return a + b;
 }
 
 int kurang (int a, int b) {
     return a - b;
 }
 
 int main() {
     system("CLS");
     int n;
 
     o l jumlah(2, 3) l e;
     o l kurang(5, 3) l e;
 
     double angka = 25.0;
     double akar = sqrt(angka);
     cout << "Akar dari " << angka << " adalah " << akar << endl;
 
 }


#include <iostream> // Library standar untuk input dan output (cout, cin, dll)
#include <cmath> // Library standar untuk fungsi matematika seperti sqrt
#include "headerCustom.h" // Header buatan sendiri, biasanya berisi deklarasi fungsi atau definisi lainnya

u; // Makro 'u' yang didefinisikan sebagai 'using namespace std;' untuk mempermudah penulisan tanpa std::

int jumlah (int a, int b) { // Fungsi untuk menjumlahkan dua bilangan bulat
    return a + b; // Mengembalikan hasil penjumlahan
}

int kurang (int a, int b) { // Fungsi untuk mengurangi dua bilangan bulat
    return a - b; // Mengembalikan hasil pengurangan
}

int main() { // Fungsi utama program
    system("CLS"); // Membersihkan layar konsol (hanya berfungsi di Windows)
    int n; // Deklarasi variabel 'n' (tidak digunakan di sini)

    o l jumlah(2, 3) l e; // Menampilkan hasil penjumlahan 2 + 3 menggunakan makro 'o', 'l', dan 'e'
    o l kurang(5, 3) l e; // Menampilkan hasil pengurangan 5 - 3

    double angka = 25.0; // Mendeklarasikan variabel double 'angka' dan mengisinya dengan 25.0
    double akar = sqrt(angka); // Menghitung akar kuadrat dari 'angka' dan menyimpannya di variabel 'akar'
    cout << "Akar dari " << angka << " adalah " << akar << endl; // Menampilkan hasil akar kuadrat ke layar
}
