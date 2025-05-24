#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = ++x + x++;
    cout << x << " " << y << endl;
    return 0;
}

#include <iostream>        // Mengimpor pustaka untuk input dan output
using namespace std;       // Menggunakan namespace std agar bisa menggunakan cout tanpa std::

int main() {               // Fungsi utama program
    int x = 3;             // Inisialisasi variabel x dengan nilai 3

    // Baris ini agak tricky karena menggunakan pre-increment (++x) dan post-increment (x++) dalam satu ekspresi
    // Eksekusi dilakukan sebagai berikut (dalam urutan evaluasi yang tergantung compiler, tetapi secara umum):
    // ++x berarti x dinaikkan dulu menjadi 4, lalu nilai 4 digunakan
    // x++ berarti nilai 4 digunakan dulu, baru x dinaikkan menjadi 5 setelahnya
    // Jadi: y = (++x) + (x++) -> y = 4 + 4 = 8 (lalu x jadi 5)
    int y = ++x + x++;    

    // Sekarang x = 5, y = 8
    cout << x << " " << y << endl;  // Menampilkan nilai x dan y ke layar

    return 0;             // Mengakhiri program
}
