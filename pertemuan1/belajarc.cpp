#include <stdio.h>//header standar c
#include <conio.h>

int main(){
    char nama[50];
    int nim;
    char kom[2];
    float ip;

    printf("Hello World!!\n");//printf -> untuk fungsi output pada c
    
    printf("Masukkan nama: ");
    gets(nama);//getstring seperti getline

    printf("Masukkan nim: ");
    scanf("%d", &nim);

    getchar();//agar kom dan ip tidak terhubung

    printf("Masukkan kom: ");
    gets(kom);

    printf("Masukkan ip: ");
    scanf("%f", &ip);

    /*ini untutk output*/
    printf("Nama: ");
    puts(nama);//put string; untuk string dalam bentuk array char

    printf("NIM: %d\n", nim);

    printf("Kom: ");
    puts(kom);

    printf("IP: %.2f\n", ip);

    printf("Press any button to continue...");
    getch();
    
}