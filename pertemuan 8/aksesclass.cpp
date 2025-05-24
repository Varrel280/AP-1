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