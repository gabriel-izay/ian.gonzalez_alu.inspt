Algoritmo tp4_ej3
	//Se leen 20 números y se emite su promedio.
	Definir pnum,sum,prom Como Real
	sum=0
	Para i<-1 Hasta 20 Hacer
		Escribir 'Ingrese un valor: '
		Leer pnum
		sum<-sum+pnum
	Fin Para
	prom=sum/20
	Escribir 'El promedio de los valores ingresados es: ',prom
FinAlgoritmo