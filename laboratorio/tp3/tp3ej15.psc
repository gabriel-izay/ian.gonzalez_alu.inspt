Algoritmo tp3_ej15
	Definir a,b,c Como Real
	Escribir 'Ingrese un valor real: '
	Leer a
	Escribir 'Ingrese otro valor real: '
	Leer b
	Si a=b Entonces
		c<-1
		Escribir 'La division entre ambos es ',c
	SiNo
		Si a>b Entonces
			c<-a/b
		SiNo
			c<-b/a
		Fin Si
		Escribir 'La división del mayor por el menor resulta: ',c
	Fin Si
FinAlgoritmo
