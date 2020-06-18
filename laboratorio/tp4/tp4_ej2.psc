Algoritmo tp4_ej2
	//se leen 20 numeros y se emite un mensaje indicando cuantos fueron negativos
	Definir value,cant Como Entero
	value<-0
	cant<-0
	Para i<-1 Hasta 20
		Escribir 'Ingresar un valor entero:'
		Leer value
		Si value<0 Entonces
			cant<-cant+1
		Fin Si
	Fin Para
	Escribir 'Ingreso ',cant,' valores negativos'
FinAlgoritmo