#include <iostream>
#include <string>
using namespace std;

class ContohAkses {
    private:
    int privateVar;

    protected:
    int protectedVar;

    public:
    int publicVar;

    // constructor
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }
    
    void tampilkansemua() {
        cout << "Akses dari dalama class : " << endl;
        cout << privateVar << endl;
        cout << protectedVar << endl;
        cout << publicVar << endl;
    }
};

class Turunan : public ContohAkses {
    public:
    void aksesProtected() {
        cout << protectedVar << endl;
        cout << publicVar << endl;
    // cout << privateVar << endl; // error
    
    }
};

int main () {
    ContohAkses obj;
    obj.tampilkansemua();

    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl; // error
    // cout << obj.proctedVar << endl; // error
    cout << obj.publicVar << endl;

    cout <<"\n Akses dari kelas Turunan " << endl;
    Turunan tur;
    tur.aksesProtected();
}

#include <iostream>     // Untuk input/output
#include <string>       // (Tidak digunakan di sini, tapi bisa digunakan jika perlu string)
using namespace std;    // Agar tidak perlu menulis std::cout dll
class ContohAkses {
private:
    int privateVar; // Hanya bisa diakses dari dalam class ContohAkses

protected:
    int protectedVar; // Bisa diakses oleh class ContohAkses dan class turunan

public:
    int publicVar; // Bisa diakses dari mana saja
    // Constructor untuk inisialisasi nilai
    ContohAkses() {
        privateVar = 1;
        protectedVar = 2;
        publicVar = 3;
    }
    void tampilkansemua() {
        cout << "Akses dari dalam class : " << endl;
        cout << privateVar << endl;     // OK
        cout << protectedVar << endl;   // OK
        cout << publicVar << endl;      // OK
    }
};
class Turunan : public ContohAkses {
public:
    void aksesProtected() {
        cout << protectedVar << endl;   // OK - karena protected dapat diakses oleh subclass
        cout << publicVar << endl;      // OK - public dapat diakses di mana saja
        // cout << privateVar << endl;  // ERROR - private tidak bisa diakses bahkan oleh subclass
    }
};
int main () {
    ContohAkses obj;             // Membuat objek dari class ContohAkses
    obj.tampilkansemua();        // Memanggil method untuk menampilkan semua variabel dari dalam class
    cout << "\nAkses dari luar class : " << endl;
    // cout << obj.privateVar << endl;   // ERROR - private tidak bisa diakses dari luar class
    // cout << obj.proctedVar << endl;   // ERROR - protected juga tidak bisa diakses dari luar class
    cout << obj.publicVar << endl;      // OK - public dapat diakses dari luar class
    cout <<"\nAkses dari kelas Turunan " << endl;
    Turunan tur;
    tur.aksesProtected();       // Memanggil method subclass untuk akses protected dan public
}
