//tp2_ej7_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    //Ingreso de datos
    printf("Ingrese un numero de 4 digitos: ");
    int num;
    scanf("%d",&num);
    //separacion de cifras
    int m,c,d,u,aux;
    m=num/1000;
    aux=num%1000;
    c=aux/100;
    aux=aux%100;
    d=aux/10;
    u=aux%10;
    //Comparación y salida por pantalla
    if((m==u)&&(c==d)){
        printf("El valor ingresado es capicua.\n");
    }
    else{
        printf("El valor ingresado NO es capicua.\n");
    }
}
