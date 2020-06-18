Algoritmo tp4_ej5
	//Se leen N números; se emite su promedio.
	Definir N Como Entero
	Definir num,sum,prom Como Real
	sum<-0
	Escribir 'Ingrese un numero natural: '
	Leer N
	Para i<-1 Hasta N Hacer
		Escribir 'Ingrese un valor: '
		Leer num
		sum<-sum+num
	Fin Para
	prom<-sum/N
	Escribir 'El promedio de los valores ingresados es: ',prom
FinAlgoritmo
