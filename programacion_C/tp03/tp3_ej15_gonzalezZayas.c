//tp3_ej15_gonzalezZayas
#include<stdio.h>
#include <stdlib.h>
void main(){
    printf("INGRESO DE TIROS POR PARTICIPANTE: \n");
    int centro=0,cuad1=0,cuad2=0,cuad3=0,cuad4=0;
    //for externo, cant de participantes
    for(int i=1;i<=2;i++)
    {
        printf("%d* Participante: \n",i);
        //for interno, registro de tiros de c/ participante
        for(int j=1;j<=2;j++)
        {
            printf("%d* Disparo         : \n",j);
            printf("        coordenada X: ");
            int x;
            scanf("%d",&x);
            printf("        coordenada Y: ");
            int y;
            scanf("%d",&y);
            if((x==0)&&(y==0)){
                //centro
                centro+=1;
            }
            else
            {
                //algun cuadrante
                if(x>0){
                    // I o IV cuadrante
                    if(y>0){
                            cuad1+=1;
                    }
                    else{
                        cuad4+=1;
                    }
                }
                else{
                    //II o III cuadrante
                    if(y>0){
                        cuad2+=1;
                    }
                    else{
                        cuad3+=1;
                    }
                }
            }
        }
    }
        //salida de resultados
    printf("-------------------\n");
    printf("Tiros en I cuadrante:   %d\n",cuad1);
    printf("Tiros en II cuadrante:  %d\n",cuad2);
    printf("Tiros en III cuadrante: %d\n",cuad3);
    printf("Tiros en IV cuadrante:  %d\n",cuad4);
}
