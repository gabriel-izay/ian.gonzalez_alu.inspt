//tp2_ej15_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void main(){
    printf("Ingrese un caracter: ");
    char caracter;
    scanf(" %c",&caracter);
    char ev[15];
    switch(caracter){
        case 'a':
        case 'A':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'o':
        case 'O':
        case 'u':
        case 'U':
            strcpy(ev,"es vocal");
        break;
        default:
            strcpy(ev,"NO es vocal");
        break;
    }
    printf("El caracter ingresado '%c' %s",caracter,ev);
}
