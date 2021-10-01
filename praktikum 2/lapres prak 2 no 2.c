#include <stdio.h>
#include <stdlib.h>
void main()
{
//    int value1, value2, sum;
//    value1 = 35;
//    value2 = 18;
//    printf("The sum of %d and %d is %d\n", value1, value2, sum);
    
    printf("======Tugas pendahuluan 3======\n");
    int jumlah3, sisa3, jumtiket, total;

    printf("\nberapa banyak tiket yang mau di pesan? ");
    scanf("%d", &jumtiket);

    jumlah3 = jumtiket/3;
    sisa3 = jumtiket%3;
    total = jumlah3 * (2*50000) + sisa3 * 50000;

    printf("total harga : Rp.%d\n", total);

}
// aku bingung nambah opo, acc ae yo cek nambahi nggenku:v