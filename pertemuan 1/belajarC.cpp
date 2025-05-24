#include <stdio.h> // header untuk C
#include <conio.h>

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World\n"); // fungsi keluaran pada C

    printf("Masukkan nama : ");
    gets(nama); // get string

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C

    getchar();

    printf("Masukkan kom : ");
    gets(kom); 

    printf("Masukkan ip : ");
    scanf("%f", &ip); 

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // put string, digunakan untuk string dalam bentuk array char

    printf("NIM : %d\n", nim);

    printf("KOM : ");
    puts(kom); 
    printf("IP : %f\n", ip);

    printf("press any button to continue...");
    getch(); 
}

#include <stdio.h> // Header standar untuk input/output seperti printf, scanf, puts, gets
#include <conio.h> // Header untuk fungsi getch(), khusus tersedia di Windows

int main() { // Fungsi utama program

    char nama[50];   // Array karakter untuk menyimpan nama (maksimal 49 karakter + null terminator)
    int nim;         // Variabel untuk menyimpan NIM
    char kom[2];     // Array karakter untuk menyimpan KOM (1 karakter + null terminator)
    float ip;        // Variabel untuk menyimpan IP (angka desimal)

    printf("Hello World\n"); // Menampilkan "Hello World" di layar, lalu pindah baris

    printf("Masukkan nama : ");
    gets(nama); // Fungsi untuk membaca string (termasuk spasi) dari input. WARNING: gets() tidak aman digunakan (bisa menyebabkan buffer overflow)

    printf("Masukkan nim : ");
    scanf("%d", &nim); // Membaca input angka bertipe int

    getchar(); // Menyerap karakter newline ('\n') yang tertinggal di buffer setelah scanf

    printf("Masukkan kom : ");
    gets(kom); // Membaca string 1 karakter + '\0'. Menggunakan gets() lagi untuk membaca KOM

    printf("Masukkan ip : ");
    scanf("%f", &ip); // Membaca angka bertipe float

    /* Untuk Output */
    printf("Nama : ");
    puts(nama); // Menampilkan isi array karakter 'nama', lalu pindah baris

    printf("NIM : %d\n", nim); // Menampilkan NIM

    printf("KOM : ");
    puts(kom); // Menampilkan KOM

    printf("IP : %f\n", ip); // Menampilkan IP

    printf("press any button to continue...");
    getch(); // Menunggu input karakter tanpa menampilkannya (biasanya digunakan untuk "pause")
}
