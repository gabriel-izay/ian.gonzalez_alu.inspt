//tp1_ej7
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    printf("Ingrese medida de BASE: ");
    int base;
    scanf("%d",&base);
    printf("Ingrese medida de ALTURA: ");
    int altura;
    scanf("%d",&altura);
    //Calculo de area
    float area;
    area=(base*altura)/2;
    //calculo de perimetro
    float hyp;
    hyp=sqrt(pow(base,2)+pow(altura,2));
    float perim;
    perim=base+altura+hyp;
    //muestra de resultados por pantalla
    printf("AREA DEL TRIANGULO: %.2f\n",area);
    printf("PERIMETRO DEL TRIANGULO: %.2f\n",perim);
}
