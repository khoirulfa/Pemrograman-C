#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a = 50;
    printf("==========================================\n");
    printf("     --PROGRAM MENAMPILKAN FLOAT--\n");
    printf("==========================================\n");
    printf("Hasil default tampilan Float = %f \n", a);
    printf("\n");
    
//    printf("======Tugas pendahuluan 1======\n");
//    int c;
//    float f;

//    printf("masukkan suhu C : ");
//    scanf("%d", &c);

//    f = c*1.8+32;
//    printf("%dC = %.2fF\n", c, f);
    
    printf("=====soal pendahuluan no-4.2=====\n");
    int nilai, i, ulangan, minimal=100, maksimal=0;
    float rata=0;
    char lagi='t';

    while(lagi=='t')
    {
        printf("Ada berapa ulangan : ");
        scanf("%d", &ulangan);

        for(i=1; i<=ulangan; i++)
        {
            printf("Masukkan nilai ulangan ke-%d : ", i);
            scanf("%d", &nilai);
            if(nilai > maksimal)
                maksimal=nilai;
            else if(minimal > nilai)
                minimal=nilai;
            rata+=nilai;
        }
        printf("\nNilai maksimal : %d\n", maksimal);
        printf("Nilai minimal : %d\n", minimal);
        printf("Nilai rata-rata : %.2f\n", rata/ulangan);
        rata=0; maksimal=0; minimal=100;
        printf("\ningin keluar(y/t) ");
        scanf(" %c", &lagi);
        fflush(stdin);
    }


    return 0;
}
