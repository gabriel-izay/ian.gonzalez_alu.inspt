//tp2_ej11_gonzalezZayas
#include<stdio.h>
#include<string.h>
void main(){
    //ingreso de datos
    printf("Ingrese nombre del alumno: \n");
    char nombre[20];
    gets(nombre);
    printf("Ingrese nota del alumno: \n");
    int nota;
    scanf("%d",&nota);
    //algoritmo
    char mencion[40]="sarasa";
    switch(nota){
        case 10:
             strcpy(mencion,"Sobresaliente");
        break;
        case 9:
        case 8:
             strcpy(mencion,"Distinguido");
        break;
        case 7:
        case 6:
            strcpy(mencion,"Bueno");
        break;
        case 5:
        case 4:
            strcpy(mencion,"Aprobado");
        break;
        case 3:
        case 2:
        case 1:
            strcpy(mencion,"Reprobado");
        default:
            strcpy(mencion,"Ingrese un valor valido");
        break;
    }
    //salida por pantalla
    printf("El alumno %s obtuvo un %s.\n",nombre,mencion);
}
