#include <stdio.h>
#include <stdlib.h>

int main()
{
    char kar;
    int nomer, id, angka;

    printf("==========================================\n");
    printf("     --PROGRAM INPUT OUTPUT--\n");
    printf("==========================================\n");
    printf("Masukkan Nomer anda     : ");
    scanf("%d", &nomer);
    printf("Masukkan karakter input : ");
    scanf("%s", &kar);
    printf("=====================================\n");
    printf("NRP  anda        : %d  \n", nomer);
    printf("karakter output  : %c \n", kar);
    
    printf("==========================================\n");
    printf("     --PROGRAM INPUT OUTPUT--\n");
    printf("==========================================\n");
    printf("Masukkan Nomer anda     : ");
    scanf("%d", &id);
    printf("Masukkan karakter input : ");
    scanf("%d", &angka);
    printf("=====================================\n");
    printf("ID  anda        : %d  \n", id);
    printf("angka output  : %d \n", angka);
    return 0;
}
