//tp1_ej11
#include<stdio.h>
#include<stdlib.h>

void main(){
    printf("Ingrese un entero positivo de dos cifras:");
    int entero;
    scanf("%d",&entero);
    //Calculos y separacion de valores
    //decenas
    int dec;
    dec=entero/10;
    //unidades
    int unid;
    unid=entero%10;
    // salida de datos por pantalla
    printf("Valor ingresado:  %d \n",entero);
    printf("Decenas:          %d \n",dec);
    printf("Unidades:         %d \n",unid);
}
