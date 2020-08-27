//tp2_ej12_gonzalezZayas
#include<stdio.h>
#include<string.h>
void main(){
    //ingreso de datos
    printf("Ingrese nombre de la  persona: \n");
    char nombre[20];
    gets(nombre);
    printf("Ingrese dia DD de nacimiento: \n");
    int dia;
    scanf("%d",&dia);
    printf("Ingrese mes MM de nacimiento: \n");
    int mes;
    scanf("%d",&mes);
    printf("Ingrese anio AA de nacimiento: \n");
    int anio;
    scanf("%d",&anio);
    //
    char strmes[11];
    switch(mes){
    case 1:
        strcpy(strmes,"Enero");
        break;
    case 2:
        strcpy(strmes,"Febrero");
        break;
    case 3:
        strcpy(strmes,"Marzo");
        break;
    case 4:
        strcpy(strmes,"Abril");
        break;
    case 5:
        strcpy(strmes,"Mayo");
        break;
    case 6:
        strcpy(strmes,"Junio");
        break;
    case 7:
        strcpy(strmes,"Julio");
        break;
    case 8:
        strcpy(strmes,"Agosto");
        break;
    case 9:
        strcpy(strmes,"Septiembre");
        break;
    case 10:
        strcpy(strmes,"Octubre");
        break;
    case 11:
        strcpy(strmes,"Noviembre");
        break;
    case 12:
        strcpy(strmes,"Diciembre");
        break;
    }
    //
    printf("%s nacio el %d de %s de %d.\n",nombre,dia,strmes,anio);
}
