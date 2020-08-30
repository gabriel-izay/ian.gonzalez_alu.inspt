//tp3_ej10_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    int num;
    do{
        printf("Ingrese un numero entero mayor o igual a 0: ");
        scanf("%d",&num);
    }while(num<0);
    int fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    printf("Factorial de %d: !%d=%d",num,num,fact);
}
