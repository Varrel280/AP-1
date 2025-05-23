#include <iostream>
using namespace std;

void penjumlahan(int a, int b){
    cout << a + b << endl;
}

void penjumlahanpointer(int *a, int *b){
    *a += *b;
    cout << *a << endl;
}

int main (){
    system ("CLS"); 

    // pointer deklaration
    int number = 35;
    int *pointer_number = &number;

    // cout << "Isi variabel number = " << number<<endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // pointer operation
    // *pointer_number = 25;
    //  cout << "Isi variabel number = " << number<<endl;
    // cout << "Alamat dari memori variabel number = " << &number << endl;
    // cout << "Isi variabel pointer_number = " << pointer_number << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    // cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    // cout << endl;

    // pointer in array
    int num[] = {1, 2, 3, 4, 5};
    int *pointer_num = num;
    // cout << "Isi variabel num = " << num[0] <<endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // *pointer_num += 5;
    // cout << "Isi variabel num = " << num[0] <<endl;
    // cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    // cout << "Isi variabel pointer_num = " << pointer_num << endl;
    // cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    // cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    // cout << endl;

    // pointer in parameter
    //  int num1 = 5;
    //  int num2 = 7;
    //  penjumlahan (num1, num2);
    //  cout << num1 << endl;
    //  cout << num2 << endl;
    //  penjumlahanpointer(&num1, &num2);
    //  cout << num1 << endl;
    //  cout << num2 << endl;

     // pointer in pointer
    //  int score = 4;
    //  int *pointer_score = &score;
    //  int **ptr_pointer_score = &pointer_score; // pointer in pointer
    //  cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    //  cout << "Isi variabel pointer_score " << pointer_score << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score << " alamat memori pointer_score " << &pointer_score << endl;
    //  cout << "Isi variabel pointer_score " << ptr_pointer_score << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score << " alamat memori pointer_score " << &ptr_pointer_score << endl;

   // Dynamic pointer
   int *ptr = new int;
   *ptr = 30;
   cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

   delete ptr;
   cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

 
}


#include <iostream> // Library untuk input/output
using namespace std; // Agar bisa menggunakan cout, endl, dll tanpa prefix std::

void penjumlahan(int a, int b){ // Fungsi biasa untuk menjumlahkan dua bilangan
    cout << a + b << endl; // Menampilkan hasil penjumlahan
}

void penjumlahanpointer(int *a, int *b){ // Fungsi penjumlahan menggunakan pointer
    *a += *b; // Nilai yang ditunjuk oleh pointer a ditambah dengan nilai yang ditunjuk pointer b
    cout << *a << endl; // Menampilkan hasil penjumlahan melalui pointer
}

int main (){
    system ("CLS"); // Membersihkan layar konsol (khusus di Windows)

    // Pointer Declaration
    int number = 35; // Deklarasi dan inisialisasi variabel number
    int *pointer_number = &number; // pointer_number menunjuk ke alamat dari number

    /*
    cout << "Isi variabel number = " << number<<endl;
    cout << "Alamat dari memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;
    */

    // Pointer Operation (mengubah nilai melalui pointer)
    /*
    *pointer_number = 25; // Mengubah nilai number melalui pointer
    cout << "Isi variabel number = " << number<<endl;
    cout << "Alamat dari memori variabel number = " << &number << endl;
    cout << "Isi variabel pointer_number = " << pointer_number << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_number = " << *pointer_number << endl;
    cout << "Alamat memori variabel pointer_number = " << &pointer_number << endl;
    cout << endl;
    */

    // Pointer in Array
    int num[] = {1, 2, 3, 4, 5}; // Array integer
    int *pointer_num = num; // pointer_num menunjuk ke elemen pertama array num

    /*
    cout << "Isi variabel num = " << num[0] <<endl;
    cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;

    *pointer_num += 5; // Tambah 5 ke elemen pertama array melalui pointer
    cout << "Isi variabel num = " << num[0] <<endl;
    cout << "Alamat dari memori variabel num = " << &num[3] << endl;
    cout << "Isi variabel pointer_num = " << pointer_num << endl;
    cout << "Isi variabel yang di tunjuk oleh pointer_num = " << *pointer_num << endl;
    cout << "Alamat memori variabel pointer_num = " << &pointer_num << endl;
    cout << endl;
    */

    // Pointer as Parameter (fungsi dengan argumen pointer)
    /*
    int num1 = 5;
    int num2 = 7;
    penjumlahan (num1, num2); // Pemanggilan fungsi biasa
    cout << num1 << endl;
    cout << num2 << endl;
    penjumlahanpointer(&num1, &num2); // Pemanggilan fungsi dengan pointer
    cout << num1 << endl; // num1 berubah karena ditambah dengan num2 melalui pointer
    cout << num2 << endl;
    */

    // Pointer to Pointer (pointer di dalam pointer)
    /*
    int score = 4;
    int *pointer_score = &score;
    int **ptr_pointer_score = &pointer_score; // pointer ke pointer_score

    cout << "Isi variabel score = " << score << " dan alamat memorinya " << &score << endl;
    cout << "Isi variabel pointer_score " << pointer_score 
         << " dan isi variabel yang ditunjuk oleh pointer_score " << *pointer_score 
         << " alamat memori pointer_score " << &pointer_score << endl;

    cout << "Isi variabel pointer_score " << ptr_pointer_score 
         << " dan isi variabel yang ditunjuk oleh ptr_pointer_score " << **ptr_pointer_score 
         << " alamat memori pointer_score " << &ptr_pointer_score << endl;
    */

    // Dynamic Pointer (alokasi memori secara dinamis)
    int *ptr = new int; // Alokasi memori dinamis untuk sebuah int
    *ptr = 30; // Isi nilai 30 ke memori tersebut
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl;

    delete ptr; // Bebaskan memori yang dialokasikan
    cout << "Isi variabel ptr " << *ptr << " dan alamat " << &ptr << endl; 
    // Note: Setelah delete, pointer jadi dangling (tidak valid lagi)
}
