//tp2_ej13_gonzalezZayas
#include<stdio.h>
#include<string.h>
void main(){
    //ingreso de datos
    printf("Ingrese primer lado del triangulo: ");
    int a;
    scanf("%d",&a);
    printf("Ingrese segundo lado del triangulo: ");
    int b;
    scanf("%d",&b);
    printf("Ingrese tercer lado del triangulo: ");
    int c;
    scanf("%d",&c);
    //algoritmo
    if(((a+b))>c&&((a+c)>b)&&((b+c)>a)){
        //es un triangulo
        if((a==b)&&(b==c)&&(a==c)){
        printf("El triangulo es equilatero.\n");
       }
       else{
        if((a==b)||(a==c)||(b==c)){
            printf("El triangulo es isosceles.\n");
        }
        else{
            printf("El triangulo es escaleno.\n");
        }
       }
    }
    else{
        printf("Las medidas ingresadas no son de un triangulo.\n");
    }
}
