//tp04_ej04_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
void main(){
    printf("Ingrese que cantidad de valores se analizaran: ");
    int dimension,cpos=0,cneg=0,cceros=0;
    scanf("%d",&dimension);
    int _vector[dimension];
    printf("\n---------------------------\n\n");

    for(int i=0;i<dimension;i++){
        printf("    Ingrese %d* elemento:",i+1);
        scanf("%d",&_vector[i]);
        if((_vector[i])==0){
            cceros+=1;
        }
        else{
            if((_vector[i])<0){
                cneg+=1;
            }
            else{
                cpos+=1;
            }
        }
    }
    printf("\n---------------------------\n");
    printf("\n    Cantidad de elementos nulos:     %d\n",cceros);
    printf("    Cantidad de elementos positivos: %d\n",cpos);
    printf("    Cantidad de elementos negativos: %d\n",cneg);
    printf("\n---------------------------\n");

}
