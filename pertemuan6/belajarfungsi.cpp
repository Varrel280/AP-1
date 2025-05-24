#include <iostream>
using namespace std;

void sapa(string nama) {
    cout << "Halo " << nama << "! selamat belajar c++!" << endl;
}

int main () {
 string namapengguna = "Varrel";

 sapa(namapengguna);

}

#include <iostream>                    // Mengimpor pustaka standar untuk input/output
using namespace std;                   // Menggunakan namespace std agar tidak perlu menulis std::

void sapa(string nama) {              // Mendefinisikan fungsi bernama 'sapa' dengan parameter bertipe string
    cout << "Halo " << nama << "! selamat belajar c++!" << endl; // Menampilkan pesan sapaan
}

int main () {                         // Fungsi utama program
    string namapengguna = "Varrel";   // Mendeklarasikan variabel string dan mengisinya dengan "Varrel"

    sapa(namapengguna);               // Memanggil fungsi sapa dan mengirimkan nilai variabel 'namapengguna' sebagai argumen

}
