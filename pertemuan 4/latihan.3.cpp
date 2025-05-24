#include <iostream>
using namespace std;

int main() {
    string password, sandi, expected = "";

    cout << "Masukkan kata sandi : ";
    cin >> password;

    cout << "Masukkan kata : ";
    cin >> sandi;

    // Membuat string "expected" berdasarkan pola tertentu
    for (int i = 0; i < password.length(); i++) {
        expected += password.substr(0, i + 1);
    }

    // Mengecek apakah input kedua sesuai dengan pola yang diharapkan
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;
}


#include <iostream>                // Library untuk input/output
using namespace std;              // Agar tidak perlu menulis std:: sebelum cout/cin

int main() {
    string password, sandi, expected = "";  // Deklarasi 3 string: password, sandi (dari input), dan expected (hasil pola)

    cout << "Masukkan kata sandi : ";      // Minta input pertama dari user
    cin >> password;

    cout << "Masukkan kata : ";            // Minta input kedua dari user
    cin >> sandi;

    // Looping untuk membuat string "expected"
    for (int i = 0; i < password.length(); i++) {
        // Ambil substring dari awal sampai i+1 dan tambahkan ke expected
        expected += password.substr(0, i + 1);
    }

    // Contoh jika password = "abc"
    // Maka expected = "a" + "ab" + "abc" = "aababc"

    // Bandingkan hasil pola dengan input dari user
    if (expected == sandi) {
        cout << "Tulisan agen benar" << endl;
    } else {
        cout << "Tulisan agen salah" << endl;
    }

    return 0;  // Program selesai
}

