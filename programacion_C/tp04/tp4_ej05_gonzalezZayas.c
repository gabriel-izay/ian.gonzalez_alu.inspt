//tp04_ej05_gonzalezZayas
#include<stdio.h>
#include<stdlib.h>
//cantidad de autos
#define autos 60
void main(){
    int tiempos[autos];
    int tmin,tmax,i;
    float promedio=0;
    printf("Ingrese tiempos de clasificacion en [s] segundos: \n\n");
    for(i=0;i<autos;i++){
        // registro de auto i-ésimo
        printf("    Ingrese tiempo del auto #%d [s]:",i+1);
        scanf("%d",&tiempos[i]);
        // busqueda de tiempos max,min
        if(i==0){
            tmax=tiempos[i];
            tmin=tiempos[i];
        }
        else if(tiempos[i]>tmax){
            tmax=tiempos[i];
            }
        else if(tiempos[i]<tmin){
            tmin=tiempos[i];
        }
        //acumulación de total de tiempos
        promedio+=tiempos[i];
        //fin ciclo for
        }
        //calculo promedio
        promedio=promedio/i;
        //salida
        printf("\n-------------------------------\n\n");
        printf("Tiempo promedio: %.2f [s] \n",promedio);
        printf("\n-------------------------------\n\n");
        printf("Tiempo primer lugar: %d [s]\n",tmin);
        printf("\n-------------------------------\n\n");
        printf("Tiempo ultimo lugar: %d [s]\n",tmax);
        printf("\n-------------------------------\n\n");
}
