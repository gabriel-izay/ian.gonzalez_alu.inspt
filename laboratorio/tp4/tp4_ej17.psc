//Se ingresa un número entero N y se emiten los N primeros números primos.
Algoritmo tp4_ej17
	Definir i,j,N,cantDiv Como Entero
	Definir resto Como Real
	cantDiv<-0
	Escribir 'Ingrese un numero entero N: '
	Leer N
	Para j<-1 Hasta N  Hacer
		Para i<-1 Hasta j Hacer
			cantdiv<-0
			resto<-j mod i
			Si resto=0 Entonces
				cantdiv=cantdiv+1
			Fin Si
		Fin Para
		Si cantdiv=2 Entonces
			Escribir 'El numero ingresado',num,',es primo'
		Fin Si
	Fin Para
FinAlgoritmo
