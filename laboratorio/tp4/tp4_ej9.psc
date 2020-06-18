//Se lee un número natural N y
//la computadora emite los números
//naturales pares menores que N.
Algoritmo tp4_ej9
	Definir N Como Entero
	Escribir 'Ingrese un valor natural: '
	Leer N
	Para i<-1 Hasta N Hacer
		Si (i mod 2)=0 y i<N Entonces
			Escribir i
		Fin Si
	Fin Para
FinAlgoritmo
