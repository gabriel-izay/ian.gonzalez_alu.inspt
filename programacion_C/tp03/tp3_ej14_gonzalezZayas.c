//tp3_ej14_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
#include<string.h>
void main(){
    char nombre[20];
    int nota,sum_notas=0,cant_aprobados=0;
    float promedio=0;
    char opcion;
    do{
        if(sum_notas!=0){
            sum_notas=0;
        }
        printf("Ingrese nombre del alumno:");
        fflush(stdin);
        gets(nombre);
        int i,ultima_nota;
        for(i=1;i<=3;i++){
            printf("Ingrese nota:");
            scanf("%d",&nota);
            sum_notas=sum_notas+nota;
            if(i==3){
            ultima_nota=nota;
            }
        }
        promedio=sum_notas/(i-1);
        printf("promedio de alumno: %.2f \n",promedio);
        printf("Ultima nota: %d \n",ultima_nota);
        if((promedio>=6)&&(ultima_nota>=6)){
        cant_aprobados+=1;
        }
    printf("Desea procesar Informacion? S/N: ");
    fflush(stdin);
    scanf("%c",&opcion);
    }while(opcion!='S'&&opcion!='s');
    //salida de datos
    printf("\n");
    printf("Cantidad de alumnos aprobados: %d",cant_aprobados);
}
