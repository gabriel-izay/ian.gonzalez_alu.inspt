//tp1_ej8
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese cantidad de dias: ");
    int dias;
    scanf("%d",&dias);
    // operaciones  de conversion
    //dias a horas
    int horas;
    horas=dias*24;
    //dias a minutos;
    int minutos;
    minutos=horas*60;
    //minutos a segundos
    int segundos;
    segundos=minutos*60;
    //salida de resultados
    printf("Cantidad de dias : %d\n",dias);
    printf("Cantidad de Hs.  : %d\n",horas);
    printf("Cantidad de Min. : %d\n",minutos);
    printf("Cantidad de seg. : %d\n",segundos);
}
