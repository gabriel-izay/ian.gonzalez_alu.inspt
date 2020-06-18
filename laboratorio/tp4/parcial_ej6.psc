// Gonzalez Zayas, Ian Gabriel (602)
// Desarrollar un algoritmo que permita ingresar 
// un lote de N datos y muestre por pantalla el 
// número que antecede al máximo encontrado.
Algoritmo parcial_ej6
	Definir N Como Entero
	Definir num, max,antMax Como Real
	antMax<-0
	Escribir 'Ingrese un valor natural: '
	Leer N
	Para i<-1 Hasta N Hacer
		Escribir 'Ingrese un numero: '
		Leer num
		antMax<-num
		Si i=1 Entonces
			max<-num
			antMax<-0
		SiNo
			Si num>max Entonces
				max<-num
			Fin Si
		Fin Si
	Fin Para
	Escribir 'Maximo ingresado: ',max
	Escribir 'Antecesor al maximo: ',antMax
FinAlgoritmo