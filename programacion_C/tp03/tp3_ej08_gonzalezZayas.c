//tp3_ej08_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void main(){
    printf("Ingrese un entero positivo: ");
    int num;
    scanf("%d",&num);
    printf("Se muestran los divisores de %d \n",num);
    printf("-----------------------------------\n");
    for(int i=1;i<=num;i++){
        if((num%i)==0){
            printf("%d ,",i);
        }
    }
}
