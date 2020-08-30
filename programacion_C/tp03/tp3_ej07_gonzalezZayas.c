//tp3_ej07_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    printf("Primeras 20 potencias de 2:\n");
    for(int i=1;i<=20;i++){
        int res=pow(2,i);
        printf("2^%d= %d\n",i,res);
    }
}
