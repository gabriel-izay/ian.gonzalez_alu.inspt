//tp04_ej13_gonzalezZayas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main (){
    int i,j,matriz[3][4],sumpares=0;
    float promediog=0,porcpos=0;
    //
    for(i=0;i<3;i++){
        for(j=0;j<4;j++){
            printf(" X %d%d: \t",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            if((matriz[i][j])%2==0){
                sumpares+=matriz[i][j];
            }
            if((matriz[i][j])>0){
                porcpos+=1;
            }
            promediog+=matriz[i][j];
        }
    }
    promediog=promediog/12;
    // a)
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<4;j++){
            printf("\t%d",matriz[i][j]);
        }
    }
    // b
    printf("\n");
    printf("Promedio general: %.2f\n",promediog);
    // c
    printf("Porcentaje de valores positivos: %.2f\n",(porcpos/12)*100);
    // d
    printf("Sumatoria de numeros pares: %d\n",sumpares);
}
