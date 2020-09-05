//tp04_ej14_gonzalezZayas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main (){
    int m,n,i,j,max,min;
    //
    printf("Ingrese cantidad de filas: \t");
    scanf("%d",&m);
    printf("Ingrese cantidad de columnas: \t");
    scanf("%d",&n);
    int matriz[m][n];
    //
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf(" X %d%d: \t",i+1,j+1);
            scanf("%d",&matriz[i][j]);
            if((i==0)&&(j==0)){
                max=matriz[i][j];
                min=matriz[i][j];
            }
            else{
                if(matriz[i][j]>max){
                    max=matriz[i][j];
                }
                else if (matriz[i][j]<min){
                    min=matriz[i][j];
                }
            }
        }
    }
    //
    printf("\n------------------------\n");
    for(i=0;i<m;i++){
        printf("\n");
        for(j=0;j<n;j++){
            printf("\t%d",matriz[i][j]);
        }
    }
    printf("\n\n------------------------\n\n");
    printf("Maximo ingresado: \t%d\n",max);
    printf("Minimo ingresado: \t%d\n",min);
    printf("\n------------------------\n\n");
}
