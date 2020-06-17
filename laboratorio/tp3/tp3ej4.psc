Algoritmo tp3ej4_ver1
	Definir a,b Como Real
	Escribir 'Ingrese un valor: '
	Leer a
	Escribir 'Ingrese otro valor: '
	Leer b
	Si a=b Entonces
		Escribir 'Ingrese un valor diferente: '
		Leer b
		Si a<b Entonces
			Escribir 'El primer valor es menor'
		SiNo
			Escribir 'El primer valor es mayor'
		Fin Si
	SiNo
		Si a<b Entonces
			Escribir 'El primer valor es menor'
		SiNo
			Escribir 'El primer valor es mayor'
		Fin Si
	Fin Si
FinAlgoritmo