#include <iostream>
using namespace std;

int main () {
    int a, b;

    system("CLS");

    // Assignment operator (=)
    a = 3;
    b = 5;

    // arithmetical operator (+, -, /, ', %)
    // int tambah = a + b;
    //int kurang = a - b;
    // int kali = a * b; 
    // float bagi = (float)a /(float)b; // type casting =mengubah tipe data dari sebuah variabel
  //int modulo = a % b;

    //cout <<"Hasil penjumlahan : "<< tambah << end;
    //cout <<"Hasil pengurangan : "<< kurang << end;
    //cout <<"Hasil perkalian : "<< kali << end;
    //cout <<"Hasil pembagian : "<< bagi << end;
    //cout <<"Hasil sisa bagi: "<< modulo << end;

    // Relational operator
    //cout << (a==b) << endl;
    //cout << (a>b) << endl;
    //cout << (a>=b) << endl;
    //cout << (a<b) << endl;
    //cout << (a<=b) << endl;
   // cout << (a!=b) << endl;

   //Logical operator (&&, ||, !)
   //and
   //cout << (True && true) << endl;
    //cout << (True && false) << endl;
   //cout << (False && true) << endl;
   //cout << (False && false) << endl;

   //for
   //cout << (True || true) << endl;
    //cout << (True || false) << endl;
   //cout << (False ||true) << endl;
   //cout << (False || false) << endl;
   
   //Negasi
   //cout << !true << endl;
   //cout << !false << endl;

   //Bitwise operator (&, |,~, ^, <<, <<) --> operasi biner
   //cout << (5 & 7) << endl;
   //cout << (5 | 7) << endl;
   //cout << (5 ^ 7) << endl;
   //cout << (~7) << endl;
   //cout << (7 << 2) << endl;
   //cout << (7 >> 2) << endl;

   //Shorthand
   //a += 7; // a = a + 7
//    cout << a << endl;

   //a -= 7; // a = a * 7
//    cout << a << endl;

   //a /= 7; // a = a / 7
//    cout << a << endl;

// Increment & Decrement
// Pre Increment
//cout << a << endl;
//cout << ++a << endl;

//cout << b << endl;
//cout << ++b << endl;

//Post Increment
cout << a << endl;
cout << a++ << endl;
cout << a << endl;

cout << b << endl;
cout << b++ << endl;
cout << b << endl;

//Pre Decrement
//cout << a << endl;
//cout << --a << endl;

//cout << b << endl;
//cout << --b << endl;

//Post Decrement
//cout << a << endl;
//cout << a-- << endl;

//cout << b << endl;
//cout << b-- << endl;

}


#include <iostream>          // Mengimpor pustaka standar untuk input/output
using namespace std;         // Menggunakan namespace std supaya tidak perlu menulis std:: di depan cout/cin

int main () {                // Fungsi utama tempat program mulai dieksekusi
    int a, b;                // Deklarasi dua variabel bertipe integer

    system("CLS");           // Membersihkan layar konsol (berfungsi di Windows saja)

    // Assignment operator (=)
    a = 3;                   // Memberikan nilai 3 ke variabel a
    b = 5;                   // Memberikan nilai 5 ke variabel b

    // =============================
    // Bagian ini menunjukkan contoh operator aritmatika
    // =============================
    // int tambah = a + b;         // Penjumlahan
    // int kurang = a - b;         // Pengurangan
    // int kali = a * b;           // Perkalian
    // float bagi = (float)a / (float)b; // Pembagian dengan type casting agar hasilnya float
    // int modulo = a % b;         // Sisa bagi (modulus)

    // cout << "Hasil penjumlahan : " << tambah << endl;
    // cout << "Hasil pengurangan : " << kurang << endl;
    // cout << "Hasil perkalian : " << kali << endl;
    // cout << "Hasil pembagian : " << bagi << endl;
    // cout << "Hasil sisa bagi: " << modulo << endl;

    // =============================
    // Relational operator (membandingkan dua nilai)
    // =============================
    // cout << (a == b) << endl;  // Apakah a sama dengan b?
    // cout << (a > b) << endl;   // Apakah a lebih besar dari b?
    // cout << (a >= b) << endl;  // Apakah a lebih besar atau sama dengan b?
    // cout << (a < b) << endl;   // Apakah a lebih kecil dari b?
    // cout << (a <= b) << endl;  // Apakah a lebih kecil atau sama dengan b?
    // cout << (a != b) << endl;  // Apakah a tidak sama dengan b?

    // =============================
    // Logical operator (logika boolean: AND, OR, NOT)
    // =============================
    // cout << (true && true) << endl;   // TRUE
    // cout << (true && false) << endl;  // FALSE
    // cout << (false && true) << endl;  // FALSE
    // cout << (false && false) << endl; // FALSE

    // cout << (true || true) << endl;   // TRUE
    // cout << (true || false) << endl;  // TRUE
    // cout << (false || true) << endl;  // TRUE
    // cout << (false || false) << endl; // FALSE

    // cout << !true << endl;   // FALSE
    // cout << !false << endl;  // TRUE

    // =============================
    // Bitwise operator (operasi bit: AND, OR, XOR, NOT, SHIFT)
    // =============================
    // cout << (5 & 7) << endl;   // AND bitwise
    // cout << (5 | 7) << endl;   // OR bitwise
    // cout << (5 ^ 7) << endl;   // XOR bitwise
    // cout << (~7) << endl;      // NOT bitwise
    // cout << (7 << 2) << endl;  // Shift kiri (x2^2)
    // cout << (7 >> 2) << endl;  // Shift kanan (÷2^2)

    // =============================
    // Shorthand (assignment yang disingkat)
    // =============================
    // a += 7; // sama dengan a = a + 7;
    // cout << a << endl;

    // a -= 7; // sama dengan a = a - 7;
    // cout << a << endl;

    // a /= 7; // sama dengan a = a / 7;
    // cout << a << endl;

    // =============================
    // Increment & Decrement
    // =============================

    // Post-Increment (nilai ditampilkan dulu, lalu a bertambah)
    cout << a << endl;    // Cetak nilai awal a (3)
    cout << a++ << endl;  // Cetak dulu (3), lalu a menjadi 4
    cout << a << endl;    // Cetak a setelah di-increment (4)

    cout << b << endl;    // Cetak nilai awal b (5)
    cout << b++ << endl;  // Cetak dulu (5), lalu b menjadi 6
    cout << b << endl;    // Cetak b setelah di-increment (6)

    // Pre-Decrement (dikurangi dulu, baru dicetak)
    // cout << --a << endl; // a dikurangi dulu, baru dicetak
    // cout << --b << endl;

    // Post-Decrement (dicetak dulu, lalu dikurangi)
    // cout << a-- << endl;
    // cout << b-- << endl;

    return 0; // Menandakan program selesai dengan sukses
}




  

