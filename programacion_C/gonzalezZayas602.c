//Recuperatorio primer parcial
#include<stdio.h>
#include<stdlib.h>
#define m 5
#define n 4
int main(){
    int matriz[m][n]={0};
    int NroMed,tDroga,CantMg;
    int precios[n]={20,15,45,30};
    int precioTotal[m]={0};
    int max;
    int drogamaxpmed[m];
    int cantDrogatot[n]={0};

    printf("Ingrese Nro. de medicamento [0 salir]:");
    scanf("%d",&NroMed);
    while(NroMed!=0){
        printf("Ingre tipo de droga [1,..,4]:");
        scanf("%d",&tDroga);
        printf("Ingrese cant. en mg:");
        scanf("%d",&CantMg);
        // suma cantidades - calculo de costo por med - suma cant de drogas
        matriz[NroMed-1][tDroga-1]+=CantMg;
        precioTotal[NroMed-1]+=CantMg*precios[tDroga-1];
        cantDrogatot[tDroga-1]+=CantMg;
        //
        system("cls");
        printf("Ingrese Nro. de medicamento [0 salir]:");
        scanf("%d",&NroMed);
    }
    // mostrar todo - buscar droga mas utilizada - marcar
    system("cls");
    printf("\tT1\t\T2\tT3\tT4");
    for(int i=0;i<m;i++){
        max=matriz[i][0];
        //
        drogamaxpmed[i]=1;
        printf("\nMed %d\t",i+1);
        for(int j=0;j<n;j++){
            printf("%d\t",matriz[i][j]);
            //
            if(matriz[i][j]>max){
                max=matriz[i][j];
                drogamaxpmed[i]=j+1;
            }
        }
        if(max==0){
            drogamaxpmed[i]=-1;
        }
    }
    // a-
    getch();
    system("cls");
    printf("Drogas que NO se utilizaron en ningun medicamento:\n");
    for(int i=0;i<n;i++){
        if(cantDrogatot[i]==0){
            printf("Droga T%d\n",i+1);
        }
    }
    // b -
    getch();
    system("cls");
    printf("Droga mas utilizada por medicamento:\n");
    for(int i=0;i<m;i++){
        if(drogamaxpmed[i]!=-1){
            printf("Med %d: Droga %d\n",i+1,drogamaxpmed[i]);
        }
    }
    // c-
    getch();
    system("cls");
    printf("Costo total por medicamento:\n");
    for(int i=0;i<m;i++){
        printf("Med %d: %d\n",i+1,precioTotal[i]);
    }
    //
    getch();
    system("cls");
    printf("FIN DE PROGRAMA\n");
    printf("Presione una tecla para salir.");
    getch();
return 0;
}
