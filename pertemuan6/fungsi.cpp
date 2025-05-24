#include <iostream>
 using namespace std;
 
 // Fungsi tanpa nilai balikan
 void tampilkanPesan(){
     cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;
 }
 
 // Fungsi dengan nilai balikan
 int tambah(int a, int b){
     return a + b;
 }
 
 // Fungsi Overload
 int kali(int a, int b){
     return a * b;
 }
 
 double kali (double a, double b) {
     return a * b;
 }
 
 // Fungsi Rekursif : menghitung nilai faktorial
 int faktorial(int n){
     if (n == 0 || n == 1) {
         return 1;
     } else {
         return n * faktorial(n -1);
     }
 }
 
 int main () {
     system("CLS");
 
     // menggunakan fungsi tanpa nilai balikan
     tampilkanPesan();
 
     int x = 5, y = 3;
 
     // menggunakan fungsi dengan nilai balikan
     int hasilTambah = tambah(x, y);
     cout << "hasil penjumlahan : " << hasilTambah << endl;
 
     // menggunakan fungsi overload
     int hasilKaliInt = kali(x, y);
     double hasilKaliDouble = kali(5.5, 2.0);
     cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
     cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;
 
     // menggunakan fungsi rekursif
     int angka = 5;
     cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;
 }

#include <iostream>          // Mengimpor pustaka input/output standar
using namespace std;         // Menggunakan namespace std agar tidak perlu menuliskan std:: terus-menerus

// Fungsi tanpa nilai balikan (void)
void tampilkanPesan(){
    cout << "==== SELAMAT DATANG DI AP 1 ====" << endl;  // Menampilkan pesan ke layar
}

// Fungsi dengan nilai balikan bertipe integer
int tambah(int a, int b){
    return a + b;  // Mengembalikan hasil penjumlahan a dan b
}

// Fungsi overload versi pertama untuk tipe int
int kali(int a, int b){
    return a * b;  // Mengembalikan hasil perkalian a dan b (integer)
}

// Fungsi overload versi kedua untuk tipe double
double kali (double a, double b) {
    return a * b;  // Mengembalikan hasil perkalian a dan b (double)
}

// Fungsi rekursif untuk menghitung nilai faktorial
int faktorial(int n){
    if (n == 0 || n == 1) {   // Basis: faktorial dari 0 atau 1 adalah 1
        return 1;
    } else {                  // Rekurens: n * faktorial(n - 1)
        return n * faktorial(n -1);
    }
}

int main () {
    system("CLS");  // Membersihkan layar console (hanya bekerja di Windows)

    // Memanggil fungsi tanpa nilai balikan
    tampilkanPesan();

    int x = 5, y = 3;  // Mendeklarasikan dan menginisialisasi variabel x dan y

    // Memanggil fungsi tambah dan menyimpan hasilnya
    int hasilTambah = tambah(x, y);
    cout << "hasil penjumlahan : " << hasilTambah << endl;

    // Memanggil fungsi overload versi int
    int hasilKaliInt = kali(x, y);
    // Memanggil fungsi overload versi double
    double hasilKaliDouble = kali(5.5, 2.0);
    cout << "hasil perkalian (int) : " << hasilKaliInt << endl;
    cout << "hasil perkalian (double) : " << hasilKaliDouble << endl;

    // Menghitung faktorial menggunakan fungsi rekursif
    int angka = 5;
    cout << "Faktorial dari " << angka << " adalah " << faktorial(angka) << endl;

  
}
