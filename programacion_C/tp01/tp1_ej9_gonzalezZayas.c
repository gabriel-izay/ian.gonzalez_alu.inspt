//tp1_ej9
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese un valor en segundos [s]: ");
    int segundos;
    scanf("%d",&segundos);
    //Operaciones de conversión
    //a minutos
    double minutos;
    minutos=segundos/60;
    //a horas
    double horas;
    horas=minutos/60;
    //a días
    double dias;
    dias= horas/24;
    //salida por pantalla de los resultados
    printf("Dias:    %.2f\n",dias);
    printf("Horas:   %.2f\n",horas);
    printf("Minutos: %.2f\n",minutos);
}
