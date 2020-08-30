//tp3_ej12_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    int num1,num2;
    do{
        printf("Ingrese primer valor: ");
        scanf("%d",&num1);
        printf("Ingrese segundo valor: ");
        scanf("%d",&num2);
        if(num2<num1){
            printf("El segundo valor debe ser mayor al primero!\n");
        }
    }while(num1>num2);
    for(int i=num1;i<=num2;i++){
        printf("%d ,",i);
    }
}
