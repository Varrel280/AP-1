#include<iostream>
#include<string>
#include<vector>
using namespace std;

struct Alamat {
    string jalan;
    string kota;
    int kodepos;
};

struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // nested struct
};

int main () {
    system("cls");
    Mahasiswa mhs1;

    // mhs1.alamat.jalan = "Jalan Merica Raya";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodepos = 20134;

    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos << endl ;

    vector<Mahasiswa> mahasiswa;
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get();
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama);

        cout << "Masukkan umur : ";
        cin >> mhs1.umur;

        cout <<"Masukkan ipk : ";
        cin >> mhs1.ipk;
        
        mahasiswa.push_back(mhs1);
    }

    for (int i = 0; i < n; i++) {
        cout <<"Mahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "Ipk : " << mahasiswa[i].ipk << endl;
    }

}

#include<iostream>          // Untuk fungsi input/output
#include<string>            // Untuk tipe data string dan getline
#include<vector>            // Untuk penggunaan vector (array dinamis)
using namespace std;

// Struct untuk menyimpan alamat
struct Alamat {
    string jalan;
    string kota;
    int kodepos;
};

// Struct Mahasiswa dengan nested struct Alamat
struct Mahasiswa {
    string nama;
    int umur;
    float ipk;
    Alamat alamat; // Nested struct
};

int main () {
    system("cls"); // Membersihkan layar console (khusus Windows)

    Mahasiswa mhs1; // Variabel sementara untuk input data mahasiswa

    // Bagian ini bisa digunakan jika ingin mengisi data alamat langsung
    // mhs1.alamat.jalan = "Jalan Merica Raya";
    // mhs1.alamat.kota = "Medan";
    // mhs1.alamat.kodepos = 20134;
    // cout << "Alamat : " << mhs1.alamat.jalan << " " << mhs1.alamat.kota << " " << mhs1.alamat.kodepos << endl;

    vector<Mahasiswa> mahasiswa; // Vector untuk menyimpan banyak data Mahasiswa
    int n;
    cout << "Masukkan banyak mahasiswa : ";
    cin >> n; // Input jumlah mahasiswa

    for(int i = 0; i < n; i++) {
        cout << "Mahasiswa " << i + 1 << endl;

        cin.get(); // Mengatasi newline error setelah cin >> n
        cout << "Masukkan nama : ";
        getline(cin, mhs1.nama); // Input nama (bisa mengandung spasi)

        cout << "Masukkan umur : ";
        cin >> mhs1.umur; // Input umur

        cout << "Masukkan IPK : ";
        cin >> mhs1.ipk; // Input IPK
        
        // Menambahkan data mhs1 ke dalam vector mahasiswa
        mahasiswa.push_back(mhs1);
    }

    // Menampilkan semua data mahasiswa
    for (int i = 0; i < n; i++) {
        cout << "\nMahasiswa " << i + 1 << endl;
        cout << "Nama : " << mahasiswa[i].nama << endl;
        cout << "Umur : " << mahasiswa[i].umur << endl;
        cout << "IPK  : " << mahasiswa[i].ipk << endl;
    }

  
}
