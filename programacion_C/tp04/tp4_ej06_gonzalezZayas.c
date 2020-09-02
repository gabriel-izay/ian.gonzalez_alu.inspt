//tp04_ej06_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    int valormax,i=0,valor=0;
    do{
        printf("\n----------------------------\n\n");
        printf("Ingrese un entero positivo: | (entero negativo p/ finalizar)\n");
        scanf("%d",&valor);
        if((valor==valormax)&&(i!=0)){
            i+=1;
        }
        else if(valor>valormax){
            i=0;
            valormax=valor;
            i+=1;
        }
    }while(valor>=0);
    printf("\n----------------------------\n\n");
    printf("Valor maximo ingresado:           %d\n",valormax);
    printf("\n----------------------------\n\n");
    printf("Cantidad de veces que se repitio: %d\n",i);
    printf("\n----------------------------\n\n");
}
