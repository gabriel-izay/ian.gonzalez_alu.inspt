#include<stdio.h>
#include<string.h>
void main()
{
char c1[80];
char c2[12]="Programando";
int igual;
int largo;

strcpy(c1," el lenguaje c");
printf("La cadena c1 tiene dentro el texto: %s \n",c1);
igual=strcmp(c1,c2);
printf("La variable igual es: %d \n",igual);
strcat(c2,c1);
printf("La cadena completa es: %s \n",c2);
largo=strlen(c2);
printf("La longitud de la cadena final es: %d",largo);
}
