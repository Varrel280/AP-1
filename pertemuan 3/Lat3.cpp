#include <iostream>              // Mengimpor pustaka iostream untuk input dan output
using namespace std;             // Menggunakan namespace std agar tidak perlu menulis std:: setiap kali

int main() {                     // Fungsi utama tempat program dieksekusi
    int bilangan;                // Mendeklarasikan variabel bilangan bertipe integer

    // Meminta input dari pengguna
    cout << "Masukkan sebuah bilangan bulat: ";  // Menampilkan pesan ke layar agar pengguna memasukkan bilangan
    cin >> bilangan;                             // Menerima input dari pengguna dan menyimpannya ke variabel bilangan

    // Menentukan apakah bilangan merupakan kelipatan 5 atau 10
    if (bilangan % 10 == 0) {                    // Mengecek apakah bilangan habis dibagi 10 (kelipatan 10)
        cout << bilangan << " adalah kelipatan dari 10." << endl;  // Jika ya, tampilkan pesan bahwa itu kelipatan 10
    } else if (bilangan % 5 == 0) {              // Jika bukan kelipatan 10, cek apakah kelipatan 5
        cout << bilangan << " adalah kelipatan dari 5." << endl;   // Jika ya, tampilkan pesan bahwa itu kelipatan 5
    } else {                                      // Jika bukan kelipatan 10 maupun 5
        cout << bilangan << " bukan kelipatan dari 5 atau 10." << endl;  // Tampilkan pesan bahwa bukan kelipatan 5/10
    }

    return 0;                                     // Mengakhiri program dengan nilai kembalian 0 (berarti sukses)
}
