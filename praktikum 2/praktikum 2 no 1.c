#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==========================================\n");
    printf("        --PROGRAM CETAK NAMA--\n");
    printf("==========================================\n");
 //   printf("NAMA  : \n");
//    printf("KELAS : IT A\n");
//    printf("NRP   : \n");
    
    printf("=====Tugas pendahuluan no2======\n");
    int bil;

    printf("\nMasukkan bilangan ");
    scanf("%d", &bil);

    if (bil%2 == 0 )
        printf("%d adalah bilangan genap\n", bil);
    else
        printf("%d adalah bilangan ganjil\n", bil);

    return 0;
}
