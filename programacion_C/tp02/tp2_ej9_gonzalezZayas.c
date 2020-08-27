//tp2_ej9_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    // Ingreso de caracteres
    printf("Ingrese primer caracter: \n");
    char caracter1;
    scanf(" %c",&caracter1);
    printf("Ingrese segundo caracter: \n");
    char caracter2;
    scanf(" %c",&caracter2);
    printf("Ingrese tercer caracter: \n");
    char caracter3;
    scanf(" %c",&caracter3);
    //algoritmo de ordenamiento
    if(caracter1<caracter2){
        if(caracter1<caracter3){
            if(caracter2<caracter3){
                printf("%c,%c,%c",caracter1,caracter2,caracter3);
            }
            else{
                printf("%c,%c,%c",caracter1,caracter3,caracter2);
            }
        }
        else{
                printf("%c,%c,%c",caracter3,caracter1,caracter2);
        }
    }
    else{
        if(caracter2<caracter3){
            if(caracter3<caracter1){
                printf("%c,%c,%c",caracter2,caracter3,caracter1);
            }
            else{
                printf("%c,%c,%c",caracter2,caracter1,caracter3);
            }
        }
        else{
                printf("%c,%c,%c",caracter3,caracter2,caracter1);
        }
    }
}
