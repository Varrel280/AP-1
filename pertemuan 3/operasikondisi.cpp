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


#include <iostream>               // Mengimpor pustaka input/output
using namespace std;              // Supaya tidak perlu menulis std:: sebelum cout atau cin

int main () {
    int nilai;                    // Mendeklarasikan variabel 'nilai' bertipe integer

    system("CLS");                // Membersihkan layar (berfungsi di Windows)

    cout << "Masukan nilai : ";   // Menampilkan pesan ke layar untuk meminta input
    cin >> nilai;                 // Menerima input dari pengguna dan menyimpannya ke variabel 'nilai'

    // === IF Statement ===
    /* 
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    }
    */

    // === IF-ELSE Statement ===
    /*
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }
    */

    // === IF-ELSE IF Statement ===
    /*
    if (nilai == 100) {
        cout << "Anda keceh !" << endl;
    } else if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        cout << "Anda lulus" << endl;
    }
    */

    // === NESTED IF Statement ===
    /*
    if (nilai <= 65) {
        cout << "Anda tidak lulus" << endl;
    } else {
        if (nilai == 100) {
            cout << "Anda lulus dan anda keceh" << endl;
        } else {
            cout << "Anda lulus" << endl;
        }
    }
    */

    // === SWITCH CASE Statement (hari) ===
    /*
    switch (nilai) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "Inputan tidak valid" << endl;
            break;
    }
    */

    // === SWITCH CASE Range (tidak didukung di C++ standar) ===
    // Catatan: "case 85 ... 100" hanya tersedia di beberapa compiler (seperti GCC dengan ekstensi)
    /*
    switch(nilai) {
        case 85 ... 100 : cout << "A" << endl; break;
        case 80 ... 84 : cout << "B+" << endl; break;
        case 75 ... 79 : cout << "B" << endl; break;
        case 70 ... 74 : cout << "C+" << endl; break;
        case 65 ... 69 : cout << "C" << endl; break;
        case 60 ... 64 : cout << "D" << endl; break;
        default : cout << "E" << endl; break;
    }
    */

    // === TERNARY OPERATOR ===
    // Cara singkat untuk menentukan apakah bilangan genap atau ganjil
    // Bisa diganti dengan if-else biasa juga (lihat yang dikomentari di atas)
    string checkNum = (nilai % 2 == 0) ? "Genap" : "Ganjil";
    cout << nilai << " tuh bilangan " << checkNum << " sih" << endl;

    return 0;                     // Menunjukkan bahwa program selesai dengan sukses
}

