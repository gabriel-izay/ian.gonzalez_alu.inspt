//tp1_ej4
#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,b,c;
    printf("Ingrese valor a guardarse en a: ");
    scanf("%d",&a);
    printf("Ingrese valor a guardarse en b:");
    scanf("%d",&b);
    printf("Valor en a: %d\n",a);
    printf("Valor en b: %d\n",b);
    printf("Invertidos: \n");
    c=a;
    a=b;
    b=c;
    printf("Valor en a: %d\n",a);
    printf("Valor en b: %d\n",b);
}
