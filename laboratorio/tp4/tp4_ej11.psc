//Se ingresa un número natural N, seguido de N reales. 
//Se emite el promedio de los números positivos, 
//el promedio de los números negativos y la cantidad de ceros. 
Algoritmo tp4_ej11
	Definir N,cantCeros Como Entero
	Definir num,prom,sum Como Real
	Escribir 'Ingrese un numero natural: '
	Leer  N
	Para i<-1 Hasta N  Hacer
		Escribir 'Ingrese un numero real: '
		Leer num
		Si num=0 Entonces
			cantCeros=cantCeros+1
		Fin Si
		sum<-sum+num
	Fin Para
	prom<-sum/N
	Escribir 'Promedio de valores ingresados: ',prom
	Escribir 'Cantidad de ceros (0) ingresados: ',cantCeros
FinAlgoritmo
