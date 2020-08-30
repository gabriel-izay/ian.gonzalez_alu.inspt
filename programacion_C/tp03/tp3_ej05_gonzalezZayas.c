//tp3_ej05_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    float prom;
    int num,sum=0,cont=0;
    do{
        printf("Ingrese un numero: (neg. para finalizar)");
        scanf("%d",&num);
        if(num>0){
        sum=sum+num;
        cont+=1;
        }
        }
    while(num>0);
    //
    if(cont!=0){
        prom=sum/cont;
        printf("\n");
        printf("Sumatoria:                   %d\n",sum);
        printf("Cant. de valores ingresados: %d\n",cont);
        printf("Promedio:                    %f\n",prom);
    }
    else{
        printf("No se han ingresado valores positivos.\nFin del programa.");
    }
}
