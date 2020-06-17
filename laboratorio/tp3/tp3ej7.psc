Algoritmo tp3ej7
	Definir a,b Como Real
	Escribir 'Ingrese un valor: '
	Leer a
	Escribir 'Ingrese otro valor: '
	Leer b
	
	Si a=b Entonces
		Escribir 'Los valores ingresados son iguales'
	SiNo
		Si a>b Entonces
			Escribir 'Los valores ordenados de mayor a menor son: '
			Escribir a,',',b
		SiNo
			Escribir 'Los valores ordenados de mayor a menor son: '
			Escribir b,',',a
		Fin Si
	Fin Si
FinAlgoritmo
