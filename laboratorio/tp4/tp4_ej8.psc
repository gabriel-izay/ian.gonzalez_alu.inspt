Algoritmo tp4_ej8
	//Se ingresa un número no determinado de valores enteros. 
	//El último es -1. La computadora indica cuál fue el máximo número ingresado.
	Mientras num<>-1 Hacer
		Escribir 'Ingresar un valor: '
		Leer num
		Si num>max Entonces
			max<-num
		Fin Si
	Fin Mientras
	Escribir 'El maximo valor ingresado es: ',max
FinAlgoritmo
