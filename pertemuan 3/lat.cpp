#include <iostream>
using namespace std;

int main() {
    int x = 3;
    int y = ++x + x++;
    cout << x << " " << y << endl;
    return 0;
}


#include <iostream>      // Mengimpor pustaka input/output standar
using namespace std;     // Supaya tidak perlu menulis std:: sebelum cout dan cin

int main() {
    int x = 3;           // x diinisialisasi dengan nilai 3

    // Perhatikan ekspresi ini: ++x + x++
    // Urutan eksekusinya sangat penting karena ada pre-increment dan post-increment

    int y = ++x + x++;

    /*
      Evaluasi langkah demi langkah:

      1. ++x → pre-increment → x menjadi 4, lalu nilai 4 digunakan
      2. x++ → post-increment → nilai 4 digunakan, lalu x menjadi 5
         Jadi, y = 4 + 4 = 8
         Dan setelah ekspresi ini, x = 5
    */

    cout << x << " " << y << endl;  // Akan mencetak: 5 8

    return 0;   // Program selesai
}
