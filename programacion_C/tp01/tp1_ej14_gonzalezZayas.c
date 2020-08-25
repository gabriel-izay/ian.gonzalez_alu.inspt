//tp1_ej14
#include<stdio.h>
#include<stdlib.h>
#define pcola 20
#define pnaranja 10
#define plimonada 30
void main(){
    //ingreso de datos
    printf("Ingrese cant. de ventas del producto COLA: ");
    int cantCola;
    scanf("%d",&cantCola);
    printf("Ingrese cant. de ventas del producto NARANJA: ");
    int cantNaranja;
    scanf("%d",&cantNaranja);
    printf("Ingrese cant. de ventas del producto LIMONADA: ");
    int cantLimonada;
    scanf("%d",&cantLimonada);
    //calculos
    int totalCola,totalNaranja,totalLimonada;
    totalCola=cantCola*pcola;
    totalNaranja=cantNaranja*pnaranja;
    totalLimonada=cantLimonada*plimonada;
    int total;
    total=totalCola+totalNaranja+totalLimonada;
    //salida de datos por pantalla
    printf("\n");
    printf("------------------------------------------\n");
    printf("\n");
    printf("| Producto  | Ventas | Precio |  Total   |\n");
    printf("|  Cola        %d       %d       %d\n",cantCola,pcola,totalCola);
    printf("|  Naranja     %d       %d       %d\n",cantNaranja,pnaranja,totalNaranja);
    printf("|  Limonada    %d       %d       %d\n",cantLimonada,plimonada,totalLimonada);
    printf("|                    |  TOTAL |  %d\n",total);
}
