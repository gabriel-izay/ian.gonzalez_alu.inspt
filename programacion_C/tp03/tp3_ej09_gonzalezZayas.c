//tp3_ej09_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    int num,total=0;
    system("cls");
    printf("Ingrese un numero entero: ");
    scanf("%d",&num);
    int numo;
    numo=num;
    while(num!=0){
        total+=num%10;
        num=num/10;
    }
    printf("\n");
    printf("--------------------------------\n");
    printf("\n");
    printf("El numero ingresado fue:  %d\n",numo);
    printf("La suma de sus cifras es: %d\n",total);
}
