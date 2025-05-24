#include <stdio.h>
#include <stdio.h> 
#include<conio.h>

int main()
{
    char nama[50],kom;
    int nim;
    float ip;
    float ip; //pendeklarasian variabel

    printf("hello world\n");
    printf("hello world\n"); //printf -> menampilkan
    printf("masukkan nama:");
    gets(nama); //get string
    gets(nama); //get string, agar bisa membaca karakter spasi

    printf("masukkan NIM:");
    scanf("%d", &nim);

    scanf("%d", &nim); //scanf -> menerima inputan
    getchar();

    printf("masukkan KOM:");
    scanf("%c", &kom);

    printf("masukkan IP:");
    scanf("%f", &ip);

@@ -31,4 +28,4 @@ int main()

    printf("\npress any button to continue..");
    getch();
}
}
