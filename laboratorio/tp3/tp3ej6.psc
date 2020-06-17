Algoritmo tp3ej6
	Definir a,b Como Real
	Escribir 'Ingrese un valor: '
	Leer a
	Escribir 'Ingrese otro valor: '
	Leer b
	
	Si a=b Entonces
		Escribir 'Los valores ingresados son iguales'
	SiNo
		Si a<b Entonces
			Escribir 'Los valores ordenados de menor a mayor son: '
			Escribir a,',',b
		SiNo
			Escribir 'Los valores ordenados de menor a mayor son: '
			Escribir b,',',a
		Fin Si
	Fin Si
FinAlgoritmo