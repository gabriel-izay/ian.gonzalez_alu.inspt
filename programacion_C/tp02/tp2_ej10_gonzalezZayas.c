//tp2_ej10_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    float res;
    //Ingreso de datos
    printf("Ingrese un numero: \n");
    int a;
    scanf("%d",&a);
    printf("Ingrese otro numero: \n");
    int b;
    scanf("%d",&b);
    printf("Seleccione operacion: \nSUMA:     s\nRESTA:    r\nPRODUCTO: p\nCOCIENTE: c\n");
    char opcion;
    scanf(" %c",&opcion);
    //Seleccion de operación
    switch(opcion){
        case 's':
            res=a+b;
        break;
        case 'r':
            res=a-b;
        break;
        case 'p':
            res=a*b;
        break;
        case 'c':
            if(b!=0){
                res=a/b;
            }
            else{
                res=0;
                printf("No es posible dividir por 0.\n");
            }
        break;
        default:
        break;
    }
    printf("\n");
    printf("Resultado de la operacion: %.2f",res);
}

