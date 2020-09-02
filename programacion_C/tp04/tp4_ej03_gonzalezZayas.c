//tp04_ej03_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
//cant de notas a ingresar
#define dimension 5
void main(){
    int notas[dimension];
    float promedio=0;
    printf("INGRESO DE NOTAS: \n");
    for(int i=0;i<dimension;i++){
        printf("    Ingrese %d* nota: ",i+1);
        scanf("%d",&notas[i]);
        promedio+=notas[i];
    }
    //
    promedio=promedio/dimension;
    printf("\n");
    printf("--------------------------\n");
    printf("\n");
    printf("Promedio de notas: %.2f\n",promedio);
    //
    printf("\n");
    printf("--------------------------\n");
    printf("\n");
    printf("Notas que superan el promedio: \n");
    printf("\n");
    for(int i=0;i<dimension;i++){
        if((notas[i])>=promedio){
            printf(" %d ,",notas[i]);
        }
    }
    printf("\n");
    printf("\n");
    printf("--------------------------\n");
}
