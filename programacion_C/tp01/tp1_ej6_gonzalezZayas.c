//tp1_ej6
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese primer numero: \n");
    float a;
    scanf("%f",&a);
    printf("Ingrese segundo numero: ");
    float b;
    scanf("%f",&b);
    float suma, resta, prod, coc;
    suma=a+b;
    resta=a-b;
    prod=a*b;
    coc=a/b;
    printf("Suma de los valores a+b: %.2f\n",suma);
    printf("Resta de los valores a-b: %.2f\n",resta);
    printf("Producto de los valores a*b: %.2f\n",prod);
    printf("Cociente de los valores a/b: %.2f\n",coc);
}
