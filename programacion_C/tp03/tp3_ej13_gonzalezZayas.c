//tp3_ej13_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    //
    int num1,num2;
    do{
        printf("Ingrese primer numero: ");
        scanf("%d",&num1);
        printf("Ingrese segundo numero:");
        scanf("%d",&num2);
        if(num2<num2){
            printf("El segundo numero debe ser mayor al primero!\n");
        }
    }while(num1>num2);
    //
    char opcion;
    do{
        printf("i - I : Obtener impares.\n");
        printf("p - P : Obtener pares.\n");
        scanf(" %c",&opcion);
    }while(opcion!='p'&&opcion!='P'&&opcion!='i'&&opcion!='I');
    //
    if((opcion=='p')||(opcion=='P')){
        for(int i=num1;i<=num2;i++){
            if((i%2)==0){
                printf("%d ,",i);
            }
        }
    }
    else{
        for(int i=num1;i<=num2;i++){
            if((i%2)!=0){
                printf("%d ,",i);
            }
        }
    }
}
