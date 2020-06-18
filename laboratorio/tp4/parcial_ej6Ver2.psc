// Gonzalez Zayas, Ian Gabriel (602)
// Desarrollar un algoritmo que permita ingresar 
// un lote de N datos y muestre por pantalla el 
// número que antecede al máximo encontrado.
Algoritmo parcial_ej6
	Definir N,i Como Entero
	Definir num, max,antMax Como Real
	antMax<-0
	i<-0
	Escribir 'Ingrese un valor natural: '
	Leer N
	Repetir		
		antMax<-num
		Escribir 'Ingrese un numero: '
		Leer num
		Si i=0 Entonces
			antMax<-num
			max<-num
		SiNo
			Si num>max Entonces
				max<-num
			Fin Si
		Fin Si
		i=i+1
	Hasta Que i=N	
	Escribir 'Maximo ingresado: ',max
	Escribir 'Antecesor al maximo: ',antMax
FinAlgoritmo
