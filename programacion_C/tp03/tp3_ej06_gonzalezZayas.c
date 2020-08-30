//tp3_ej06_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    int num,cant_pos=0,cant_neg=0;
    do{
        printf("Ingrese un numero: ");
        scanf("%d",&num);
        if(num!=0){
            if(num<0){
                cant_pos+=1;
            }
            else{
                cant_neg+=1;
            }
        }
        else{
            printf("Fin de ingreso de valores.\n");
        }
    }while(num!=0);
    printf("----------------------------\n");
    printf("Cant. de nros negativos ingresados: %d\n",cant_neg);
    printf("Cant. de nros positivos ingresados: %d\n",cant_pos);
}
