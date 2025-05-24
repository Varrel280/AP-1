#include <stdio.h> // header untuk C
#include <conio.h>

int main() {
    char nama[50];
    int nim;
    char kom[2];
    float ip; //pendeklarasian variabel

    printf("Hello World\n"); // fungsi keluaran pada C
      printf("hello world\n"); //printf -> menampilkan

    printf("Masukkan nama : ");
    gets(nama); // get string
      gets(nama); //get string, agar bisa membaca karakter spasi

    printf("Masukkan nim : ");
    scanf("%d", &nim); // fungsi masukan pada C
    scanf("%d", &nim); //scanf -> menerima inputan

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
