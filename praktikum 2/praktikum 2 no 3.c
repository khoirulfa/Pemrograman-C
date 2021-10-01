#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 11, b = 50;

//    printf("==========================================\n");
//    printf("     --PROGRAM MENGHITUNG PENJUMLAHAN--   \n");
//    printf("==========================================\n");
//   printf("Hasil penjumlahan A + B adalah : %d \n", a + b);
//    printf("\n");

        printf("======Tugas pendahuluan 2======\n");
    float gaji_pokok, tahun, tunjtahun, tunjanak, anak, tunjsuami, tunjtrans, trans, totalgaji, pajak;
    char yt;

    printf("\nmasukkan gaji pokok : ");
    scanf("%f", &gaji_pokok);
    printf("sudah menikah/belum (y/t) : ");
    scanf(" %c", &yt);
    printf("sudah kerja berapa tahun : ");
    scanf("%f", &tahun);
    printf("Berapa hari masuk kerja perbulan : ");
    scanf("%f", &trans);

    if(yt == 'y'){
        printf("Masukkan berapa anak : ");
        scanf("%f", &anak);
        tunjsuami = gaji_pokok * 0.10;
        tunjanak = anak * 0.05 * gaji_pokok;
    }
    tunjtahun = tahun * 5000;
    tunjtrans = trans * 3000;
    pajak = (gaji_pokok+tunjsuami+tunjanak) * 0.15;
    totalgaji = (gaji_pokok+tunjsuami+tunjanak) - pajak - 20000 + tunjtrans + tunjtahun;
    
    printf("\ngaji pokok \t\t= %.2f\n", gaji_pokok);
    printf("Total tunjangan istri \t= %.2f\n", tunjsuami);
    printf("Total tunjangan anak  \t= %.2f\n", tunjanak);
    printf("Total tunjangan tahun \t= %.2f\n", tunjtahun);
    printf("Total tunjangan transportasi \t= %.2f\n", tunjtrans);
    printf("Total pajak (tidak termasuk tunjtahun/transportasi) \t= %.2f\n",   pajak);
    printf("Total polis asuransi \t= 20000\n");
    printf("\ngaji total yang di terima sebesar Rp.%.2f\n", totalgaji);

    return 0;
}
