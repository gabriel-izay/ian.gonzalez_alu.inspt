//tp2_ej5_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    //Ingreso de valores por pantalla
    int a,b,c;
    printf("Ingrese primer numero: ");
    scanf("%d",&a);
    printf("Ingrese segundo numero: ");
    scanf("%d",&b);
    printf("Ingrese tercer numero: ");
    scanf("%d",&c);
    //Comparaciones
    if ((a==b)&&(a==c))
        {
            printf("Los tres valores son iguales");
        }
    else
        {
            if((a<b)&&(a<c))
            {
                printf("El valor a: %d es el menor",a);
            }
            else
            {
                if((b<a)&&(b<c))
                {
                    printf("El valor b: %d es el menor",b);
                }
                else
                {
                    printf("El valor c: %d es el menor",c);
                }
            }
        }
}
