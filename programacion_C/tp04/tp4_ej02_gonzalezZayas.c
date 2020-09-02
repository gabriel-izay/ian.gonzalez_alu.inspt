//tp04_ej02_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    int vec[50]={4,2,3,6,5,8,4,5,2,9,4,2,3,6,5,8,4,5,2,9,4,2,3,6,5,8,4,5,2,9,4,2,3,6,5,8,4,5,2,9,4,2,3,6,5,8,4,5,2,9};
    printf("Elemento 4: %d\n",vec[3]);
    printf("Elemento 2: %d\n",vec[1]);
    printf("Vector invertido: \n");
    for(int i=49;i>-1;i--){
        printf(" %d,",vec[i]);
    }
    float prodpu;
    prodpu=vec[0]*vec[49];
    printf("\n Producto entre elementos 1 y 49: %.2f\n",prodpu);
    printf("--------------- \n");
    printf("Elementos de indice par: \n");
    for(int i=0;i<50;i++){
        if((i%2)==0){
            printf("Posicion %d, valor: %d\n",i,vec[i]);
        }
    }
    printf("--------------- \n");
    printf("Elementos de indice impar: \n");
    for(int i=0;i<50;i++){
        if((i%2)!=0){
            printf("Posicion %d, valor: %d \n",i,vec[i]);
        }
    }

}

