#include <iostream>
 using namespace std;
 
 string namaGlobal = "Ilmu";
 
 void namaVariabel(){
     string namaLokal = "Komputer";
 
     // coba akses
     cout << namaLokal << endl;
 
     // coba akses
     cout << namaGlobal << endl;
 }
 
 int main() {
     namaVariabel();
 
     // coba akses
     cout << namaGlobal << endl;
 
     // coba akses
     // cout << namaLokal << endl; // ga iso
 }


#include <iostream> // Library standar untuk input dan output
using namespace std; // Agar tidak perlu menuliskan 'std::' di depan cout, string, dll

string namaGlobal = "Ilmu"; // Variabel global, bisa diakses dari seluruh bagian program

void namaVariabel() {
    string namaLokal = "Komputer"; // Variabel lokal, hanya bisa diakses di dalam fungsi ini

    // coba akses variabel lokal
    cout << namaLokal << endl; // Menampilkan "Komputer"

    // coba akses variabel global
    cout << namaGlobal << endl; // Menampilkan "Ilmu"
}

int main() {
    namaVariabel(); // Memanggil fungsi namaVariabel()

    // coba akses variabel global
    cout << namaGlobal << endl; // Menampilkan "Ilmu"

    // coba akses variabel lokal
    // cout << namaLokal << endl; // ga iso (tidak bisa diakses karena di luar scope fungsi namaVariabel)
}
