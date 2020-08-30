//tp3_ej03_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    for(int i=1;i<=10;i++){
        printf("Ingrese un numero entero: ");
        int val;
        scanf("%d",&val);
        if(val>0){
            printf("El valor ingresado %d es positivo.\n", val);
        }
    }
}
