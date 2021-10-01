#include <stdio.h>
#include <stdlib.h>
void main()
{
//    int jawab, hasil;
//    jawab = 100;
//    hasil = jawab - 10;
//    printf("Jawabannya adalah %d\n", hasil + 6);
    
//    printf("hello world!);
    printf("=====soal pendahuluan no-6=====\n");
    int max, i, b;

    printf("Masukkan angka maksimal : ");
    scanf("%d", &max);
    for(i=1; i<=max; i++)
    {
        for(b=1; b<=i; b++)
            printf("%d ", b);
        printf("\n");
    }

}
