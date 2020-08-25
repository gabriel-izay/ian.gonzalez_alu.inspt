//tp1_ej13
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    printf("Ingrese primer cateto del triangulo: ");
    float cat1;
    scanf("%f",&cat1);
    printf("Ingrese segundo cateto del triangulo: ");
    float cat2;
    scanf("%f",&cat2);
    //Calculo
    float hyp;
    hyp=sqrt(pow(cat1,2)+pow(cat2,2));
    //salida por pantalla
    printf("\n");
    printf("--------------------------------------------\n");
    printf("\n");
    printf("c|\\                                \n");
    printf("a| \\          Cateto 1:    %.2f    \n",cat1);
    printf("t|  \\ Hyp     Cateto 2:    %.2f    \n",cat2);
    printf("A|   \\        Hipotenusa:  %.2f    \n",hyp);
    printf(" |____\\  catB                      \n");
}
