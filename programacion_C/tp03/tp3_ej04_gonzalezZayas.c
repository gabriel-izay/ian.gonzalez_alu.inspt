//tp3_ej04_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    int num;
    //validación
    do{
        printf("Ingrese un nro entre 0 y 10:");
        scanf("%d",&num);
    }while((num<0)||(num>10));
    //
    printf("Tabla de multiplicar de %d \n",num);
    for(int i=1;i<=10;i++){
        int res=num*i;
        printf("%d x %d = %d\n",num,i,res);
    }
}
