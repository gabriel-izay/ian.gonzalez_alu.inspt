//tp1_ej12
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese un entero positivo de tres cifras:");
    int entero;
    scanf("%d",&entero);
    //Calculos y separacion de valores
    //Centenas
    int cent;
    cent=entero/100;
    //decenas y unidades
    int dec,unid;
    dec=entero%100;
    unid=dec%10;
    dec=dec/10;
    // salida de datos por pantalla
    printf("Valor ingresado:  %d \n",entero);
    printf("Centenas:         %d \n",cent);
    printf("Decenas:          %d \n",dec);
    printf("Unidades:         %d \n",unid);
}
