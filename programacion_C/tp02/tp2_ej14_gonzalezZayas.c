//tp2_ej14_gonzalezZayas
#include<stdio.h>
#include<string.h>
#include<math.h>
void main(){
 int x;
 float num,res;
 printf("Ingrese un número: ");
 scanf("%f",&num);
 printf("\n");
 printf("(1) EL TRIPLE\n");
 printf("(2) EL CUADRADO\n");
 printf("(3) LOG NATURAL\n");
 printf("(4) LOG_10\n");
 printf("(Escribe el núemro de la opcion que desees: )\n");
 scanf("%d",&x);
 //
 switch(x){
    case 1:
        res=3*num;
    break;
    case 2:
        res=pow(num,2);
    break;
    case 3:
        if(num>0){
        res=log(num);
        }
    break;
    case 4:
        if(num>0){
        res=log10(num);
        }
    break;
    default:
        printf("Ingrese opcion valida.\n");
    break;
 }
 printf("\n");
 printf("El resultado es %.2f",res);
}
