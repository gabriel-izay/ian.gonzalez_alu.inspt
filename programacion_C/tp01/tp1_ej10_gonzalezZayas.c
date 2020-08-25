//tp1_ej10
#include<stdio.h>
#include<stdlib.h>
#define sueldo_basico 4500
#define fplus 0.02
void main(){
    printf("Ingrese cantidad de Hs. trabajadas: ");
    int cantHs;
    scanf("%d",&cantHs);
    printf("Ingrese años de antiguedad: ");
    int antiguedad;
    scanf("%d",&antiguedad);
    //Calculos
    float sueldoNeto;
    sueldoNeto=(sueldo_basico*cantHs);
    float basico;
    basico=sueldoNeto;
    float plus;
    plus=sueldoNeto*fplus*antiguedad;
    sueldoNeto=sueldoNeto+plus;
    //Salida de datos por pantalla
    printf("\n");
    printf("----------------------\n");
    printf("\n");
    printf("Sueldo basico:   $%.2f\n",basico);
    printf("Plus antiguedad: $%.2f\n",plus);
    printf("Sueldo Neto:     $%.2f\n",sueldoNeto);
}
