//tp2_ej8_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    //definicion de constantes
    int precioCorta=1500;
    int precioLarga=2000;
    int limite=20;
    int pExceso=800;
    //Ingreso de datos por consola
    printf("Ingrese tipo de viaje DIST CORTA:1 / DIST LARGA:2\n");
    int tipoViaje;
    scanf("%d",&tipoViaje);
    printf("Ingrese peso del paquete en Kilos [Kg]:\n");
    int pesoPack;
    scanf("%d",&pesoPack);
    //Algoritmo
    int costoviaje;
    int exceso;
    if(tipoViaje==1){
        //Distancia Corta
        if(pesoPack>limite){
            exceso=pesoPack-limite;
            costoviaje=precioCorta+(pExceso*exceso);
        }
        else{
            costoviaje=precioCorta;
        }
    }
    else{
        //Distancia Larga
        if(pesoPack>limite){
                //el factor exceso aumenta 1 cada 5 de pesoPack
            exceso=(pesoPack-limite)/5;
            costoviaje=precioLarga+(pExceso*exceso);
        }
        else{
            costoviaje=precioLarga;
        }
    }
    printf("Costo del viaje: \$ %d ",costoviaje);
}
