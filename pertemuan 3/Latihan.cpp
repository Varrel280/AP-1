#include <iostream>
using namespace std;

int main (){
    float Luas, p, L;

    cout << "Masukkan panjang : ";
    cin >> p;

    cout << "Masukkan lebar : ";
    cin >> L;

    Luas = p * L;
    cout <<"Luas = " << Luas << endl;

    return 0;
}

#include <iostream>            // Mengimpor pustaka standar untuk input/output
using namespace std;           // Menggunakan namespace std agar tidak perlu menulis std:: di setiap I/O

int main () {                  // Fungsi utama program

    float Luas, p, L;          // Mendeklarasikan tiga variabel float: Luas, panjang (p), dan lebar (L)

    // Meminta input panjang dari pengguna
    cout << "Masukkan panjang : ";
    cin >> p;                  // Membaca nilai panjang dan menyimpannya ke dalam variabel 'p'

    // Meminta input lebar dari pengguna
    cout << "Masukkan lebar : ";
    cin >> L;                  // Membaca nilai lebar dan menyimpannya ke dalam variabel 'L'

    // Menghitung luas persegi panjang
    Luas = p * L;              // Mengalikan panjang dan lebar untuk mendapatkan luas

    // Menampilkan hasil perhitungan luas
    cout << "Luas = " << Luas << endl;

    return 0;                  // Menandakan bahwa program selesai dijalankan dengan sukses
}
