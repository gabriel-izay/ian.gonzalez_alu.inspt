//Se leen N números enteros y se emite el mayor y 
//la posición en la que ingresó por primera vez. 
Algoritmo tp4_ej12
	Definir N,i,Max,posMax Como Entero
	Definir num Como Real
	Escribir 'Ingrese un valor N entero positivo: '
	Leer N
	Para i<-1 Hasta N  Hacer
		Escribir 'Ingrese un valor real: '
		Leer num
		Si i=1 Entonces
			Max<-num
			posMax<-i
		SiNo
			Si num>Max Entonces
				Max<-num
				posMax<-i
			Fin Si
		Fin Si
	Fin Para
	Escribir 'El maximo valor ingresado es:',Max
	Escribir 'Ingresado por primera vez en la posicion: ',posMax
FinAlgoritmo
