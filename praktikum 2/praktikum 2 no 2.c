#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("==========================================\n");
    printf("     --PROGRAM MENGHITUNG PENJUMLAHAN--\n");
    printf("==========================================\n");
    
    int x, hasil;

    printf("masukkan x : ");
    scanf("%d", &x);

    hasil = 3*(x*x)-5*x+6;
    printf("hasil = %d", hasil);

    return 0;
}
