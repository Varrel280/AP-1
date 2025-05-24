#include <iostream>
using namespace std;

int main () {
    int nilai;

    system("CLS");



    cout<<"Masukan nilai : ";
    cin>>nilai;

    //if statement
   /* if (nilai <=65){
        cout<<"Anda tidak lulus"<<endl;
    }*/

    // if (nilai <=65){
    //     cout<<"Anda tidak lulus"<<endl;
    // }
    // else {
    //     cout<<"Anda lulus"<<endl;
    // }

    // if else if statement
    // if (nilai == 100){
    //     cout <<"Anda keceh !"<<endl;
    // }
    // else if (nilai <= 65){
    //     cout<<"Anda tidak lulus"<<endl;
    // }
    // else {
    //     cout<<"Anda lulus"<<endl;
    // }

    // Nested if
    // if(nilai <= 65){
    //     cout <<" Anda tidak lulus "<<endl;
    // }else {
    //     if (nilai == 100){
    //         cout <<"Anda lulus dan anda keceh" <<endl;
    //     }else{
    //         cout <<"Anda lulus"<<endl;
    //     }
    // }

    // Switch case
// switch (nilai) {
//     case 1:
//         cout << "Senin" << endl;
//         break;
//     case 2:
//         cout << "Selasa" << endl;
//         break;
//     case 3:
//         cout << "Rabu" << endl;
//         break;
//     case 4:
//         cout << "Kamis" << endl;
//         break;
//     case 5:
//         cout << "Jumat" << endl;
//         break;
//     case 6:
//         cout << "Sabtu" << endl;
//         break;
//     case 7:
//         cout << "Minggu" << endl;
//         break;
//     default:
//      cout << "Inputan tdk valid" << endl;  
//     break;
// }

// switch range
// switch(nilai) {
//     case 85 ... 100 : cout << "A" << endl; break;
//     case 80 ... 84 : cout << "B+" << endl; break;
//     case 75 ... 79 : cout << "B" << endl; break;
//     case 70 ... 74 : cout << "C+" << endl; break;
//     case 65 ... 69 : cout << "C" << endl; break;
//     case 60 ... 64 : cout << "D" << endl; break;
//     default : cout << "E" << endl; break;
// }

// Ternary operator
// if(nilai % 2 == 0) {
//     cout << "Genap nih" << endl;
// } else {
//     cout << "Ganjil sih" << endl;
// }

string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout <<nilai<< " tuh bilangan "<<checkNum<< " sih"<< endl;

}

#include <iostream>             // Mengimpor pustaka standar untuk input/output
using namespace std;            // Menggunakan namespace std agar tidak perlu menulis std:: di setiap I/O

int main () {                   // Fungsi utama program
    int nilai;                  // Mendeklarasikan variabel integer 'nilai'

    system("CLS");              // Membersihkan layar konsol (bekerja di Windows, abaikan jika di Linux/Mac)

    // Meminta pengguna memasukkan nilai
    cout << "Masukan nilai : ";
    cin >> nilai;               // Membaca input dari pengguna dan menyimpannya ke dalam variabel 'nilai'

    // === Contoh IF Statement (diberi komentar karena tidak aktif) ===
    /*
    if (nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    }
    */

    // === Contoh IF-ELSE Statement ===
    /*
    if (nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }
    */

    // === Contoh IF - ELSE IF - ELSE ===
    /*
    if (nilai == 100){
        cout << "Anda keceh!" << endl;
    } else if (nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }
    */

    // === Contoh Nested IF (IF di dalam IF) ===
    /*
    if (nilai <= 65){
        cout << "Anda tidak lulus" << endl;
    } else {
        if (nilai == 100){
            cout << "Anda lulus dan anda keceh" << endl;
        } else {
            cout << "Anda lulus" << endl;
        }
    }
    */

    // === Contoh SWITCH CASE (untuk hari) ===
    /*
    switch (nilai) {
        case 1: cout << "Senin" << endl; break;
        case 2: cout << "Selasa" << endl; break;
        case 3: cout << "Rabu" << endl; break;
        case 4: cout << "Kamis" << endl; break;
        case 5: cout << "Jumat" << endl; break;
        case 6: cout << "Sabtu" << endl; break;
        case 7: cout << "Minggu" << endl; break;
        default: cout << "Inputan tdk valid" << endl; break;
    }
    */

    // === Switch Case dengan Range (tidak valid di C++) ===
    /*
    switch(nilai) {
        case 85 ... 100: cout << "A" << endl; break;  // Ini tidak bisa digunakan di C++, hanya berlaku di beberapa bahasa lain seperti Pascal
        // ...
        default: cout << "E" << endl; break;
    }
    */

    // === Contoh ternary operator (alternatif dari IF-ELSE sederhana) ===

    // Menentukan apakah 'nilai' adalah genap atau ganjil menggunakan operator ternary
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";

    // Menampilkan hasil
    cout << nilai << " tuh bilangan " << checkNum << " sih" << endl;

    return 0; // Mengakhiri program
}

