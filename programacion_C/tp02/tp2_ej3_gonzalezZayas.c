//tp2_ej3_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    //data entry
    printf("Ingrese un numero: ");
    int a;
    scanf("%d",&a);
    printf("Ingrese otro numero: ");
    int b;
    scanf("%d",&b);
    //data op
    if(a==b){
        printf("Los valores ingresados son iguales.\n");
    }
    else{
        printf("Los valores ingresados son distintos.\n");
    }
}
