//tp2_ej6_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese un valor: ");
    int a;
    scanf("%d",&a);
    printf("Ingrese otro valor: ");
    int b;
    scanf("%d",&b);
    //calculo y salida
    int c;
    c=a+b;
    if((c%2)==0){
        printf("La suma de los valores %d y %d es par.",a,b);
    }
    else{
        printf("La suma de los valores %d y %d es IMpar.",a,b);
    }
}
