Algoritmo tp4_ej8
	//Se ingresa un n�mero no determinado de valores enteros. 
	//El �ltimo es -1. La computadora indica cu�l fue el m�ximo n�mero ingresado.
	Mientras num<>-1 Hacer
		Escribir 'Ingresar un valor: '
		Leer num
		Si num>max Entonces
			max<-num
		Fin Si
	Fin Mientras
	Escribir 'El maximo valor ingresado es: ',max
FinAlgoritmo
