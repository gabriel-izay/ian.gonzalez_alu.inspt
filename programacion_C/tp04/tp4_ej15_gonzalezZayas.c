//tp04_ej15_gonzalezZayas
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void main (){
    // inicializacion de variables implicadas
    char trimestre[3][7]={"Trim 1","Trim 2","Trim 3"};
    char materia[5][12]={"Matematica","Lengua","Ingles","Geografia","Biologia"};
    int notas[3][5];
    char nombre[20];
    float promedio[5]={0},promgral=0;
    float aprob[3]={0};
    int i,j;
    // ingreso de datos
    printf("Ingrese nombre del alumno: ");
    gets(nombre);
    printf("\n------------------------------\n\n");
    //ingreso de notas
    printf("Ingreso de notas por materias: \n");
    for(j=0;j<5;j++){
        printf("\n    Ingrese notas de %-12s: \n",materia[j]);
        for(i=0;i<3;i++){
            printf("        Trimestre %-7s: ",trimestre[i]);
            scanf("%d",&notas[i][j]);
        }
    }
    printf("\n------------------------------\n\n");
    //presentacion tabla
    for(i=0;i<5;i++){
        printf("\t%s",materia[i]);
    }
    for(i=0;i<3;i++){
        printf("\n%s\t\t",trimestre[i]);
        for(j=0;j<5;j++){
            printf("%-10d",notas[i][j]);
        }
    }
    printf("\n\n------------------------------\n\n");
    // a) promedio en cada materia
    for(j=0;j<5;j++){
        for(i=0;i<3;i++){
            promedio[j]+=notas[i][j];
        }
    }
    for(i=0;i<5;i++){
        printf("Promedio %-11s: %.2f \n",materia[i],promedio[i]/3);
    }
    printf("\n\n------------------------------\n\n");
    // b) % de materias aprobadas por trimestre (nota<6)
    for(i=0;i<3;i++){
        for(j=0;j<5;j++){
            if(notas[i][j]>=6){
                aprob[i]+=1;
            }
        }
        printf("Porcentaje de materias aprobadas en %-8s: %.2f\n",trimestre[i],(aprob[i]/5)*100);
    }
    printf("\n------------------------------\n\n");
    // c) promedio general
    for(i=0;i<5;i++){
        promgral+=(promedio[i]/3);
    }
    printf("PROMEDIO GENERAL: %.2f",(promgral/5));
    printf("\n\n------------------------------\n\n");
}
