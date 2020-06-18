Algoritmo tp4_ej4
	Definir N Como Entero
	definir min,num Como Real
	Escribir 'Ingrese un numero entero positivo:'
	Leer N
	Para i<-1 Hasta N
		Escribir 'Ingrese un valor:'
		Leer num		
		Si i=1 Entonces
			min<-num
		SiNo
			Si num<min Entonces
				min<-num
			Fin Si
		Fin Si
	Fin Para
	Escribir 'El menor valor ingresado es: ',min
FinAlgoritmo
