#include <iostream>
using namespace std;

int main() {
    string kalimat;
    int i;

    cout <<"Masukkan kalimat : ";
    getline(cin, kalimat);

    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);
    }

    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;
}

#include <iostream>          // Digunakan untuk input dan output standar
using namespace std;         // Agar tidak perlu menulis std:: sebelum cout/cin

int main() {
    string kalimat;          // Variabel untuk menyimpan kalimat input
    int i;                   // Variabel indeks untuk loop

    cout <<"Masukkan kalimat : ";
    getline(cin, kalimat);   // Menerima input satu baris penuh termasuk spasi

    // Loop untuk mengubah setiap karakter dalam kalimat menjadi huruf besar
    for(i = 0; i < kalimat.length(); i++){
        kalimat[i] = toupper(kalimat[i]);  // Fungsi toupper() mengubah huruf ke kapital
    }

    // Menampilkan hasil
    cout << "Kalimat dalam huruf kapital : " << kalimat << endl;

    return 0;  // Mengakhiri program
}
