#include <iostream>
#include <string>
using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    for (int i = 0; i < kalimat.length(); i++) {
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]);
        }
    }

    cout << "Hasil: " << kalimat << endl;

    return 0;
}

    cout << "Hasil: " << kalimat << endl;

    return 0;
}


#include <iostream>          // Library untuk input/output
#include <string>            // Library untuk tipe data string
using namespace std;         // Supaya tidak perlu tulis std:: di depan cout, cin, dll

int main() {
    string kalimat;         // Variabel untuk menyimpan input kalimat dari user

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);  // Mengambil seluruh baris (termasuk spasi)

    // Loop untuk membaca setiap karakter dalam kalimat
    for (int i = 0; i < kalimat.length(); i++) {
        // Jika huruf adalah vokal kecil, ubah jadi kapital
        if (kalimat[i] == 'a' || kalimat[i] == 'e' || 
            kalimat[i] == 'i' || kalimat[i] == 'o' || kalimat[i] == 'u') {
            kalimat[i] = toupper(kalimat[i]);  // Ubah ke huruf besar
        }
    }

    // Cetak hasil akhir
    cout << "Hasil: " << kalimat << endl;

    return 0;
}
