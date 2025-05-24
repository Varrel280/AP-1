#include <iostream>
 using namespace std;
 
 int main() {
 
     // penjumlahan matriks 2 x 2
     int matriks1[2][2];
     int matriks2[2][2];
     int hasil[2][2];
 
     cout << "Matriks 1 : " << endl;
     for(int i = 0; i < 2; i++) {
         for(int j = 0; j < 2; j++) {
             cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
             cin >> matriks1[i][j];
         }
     }
 
     cout << "Matriks 2 : " << endl;
     for(int i = 0; i < 2; i++) {
         for(int j = 0; j < 2; j++) {
             cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : ";
             cin >> matriks2[i][j];
         }
     }
 
     cout << "Hasil Penjumlahan" << endl;
     for (int i = 0; i < 2; i++) {
         for(int j = 0; j < 2; j++) {
             hasil[i][j] = matriks1[i][j] + matriks2[i][j];
             cout << hasil[i][j] << " ";
         }
         cout << endl;
     }
 
 }


#include <iostream>               // Mengimpor pustaka untuk input/output standar
using namespace std;              // Menggunakan namespace std agar tidak perlu menulis std:: setiap saat

int main() {                      // Fungsi utama program

    // penjumlahan matriks 2 x 2
    int matriks1[2][2];           // Deklarasi matriks pertama ukuran 2x2
    int matriks2[2][2];           // Deklarasi matriks kedua ukuran 2x2
    int hasil[2][2];              // Deklarasi matriks untuk menyimpan hasil penjumlahan

    cout << "Matriks 1 : " << endl;       // Menampilkan judul input matriks 1
    for(int i = 0; i < 2; i++) {          // Loop baris matriks 1
        for(int j = 0; j < 2; j++) {      // Loop kolom matriks 1
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // Minta input elemen
            cin >> matriks1[i][j];        // Simpan input ke matriks1[i][j]
        }
    }

    cout << "Matriks 2 : " << endl;       // Menampilkan judul input matriks 2
    for(int i = 0; i < 2; i++) {          // Loop baris matriks 2
        for(int j = 0; j < 2; j++) {      // Loop kolom matriks 2
            cout << "Masukkan elemen baris " << i + 1 << " kolom " << j + 1 << " : "; // Minta input elemen
            cin >> matriks2[i][j];        // Simpan input ke matriks2[i][j]
        }
    }

    cout << "Hasil Penjumlahan" << endl;  // Menampilkan hasil penjumlahan matriks
    for (int i = 0; i < 2; i++) {         // Loop baris untuk hasil penjumlahan
        for(int j = 0; j < 2; j++) {      // Loop kolom untuk hasil penjumlahan
            hasil[i][j] = matriks1[i][j] + matriks2[i][j]; // Menjumlahkan elemen dan simpan ke hasil
            cout << hasil[i][j] << " ";   // Cetak elemen hasil dengan spasi
        }
        cout << endl;                     // Pindah baris setelah mencetak satu baris matriks
    }

}
