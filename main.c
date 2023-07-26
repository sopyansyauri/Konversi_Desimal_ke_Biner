#include <stdio.h>
#include <stdbool.h>


int main() {
    printf("## Program Bahasa C Konversi Desimal ke Biner ## \n");
    printf("================================================ \n\n");

    int a[10], n, i;

    printf("Input angka desimal: ");
    scanf("%d",&n);

    for(i=0; n>0; i++){
        a[i] = n%2;
        n = n/2;
    }

    printf("Angka binernya adalah: ");

    for(i=i-1 ;i>=0 ;i--) {
        printf("%d",a[i]);
    }

    printf("\n");

    return 0;
}