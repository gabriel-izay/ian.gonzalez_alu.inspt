Algoritmo tp3ej13
	Definir A,B, Aux Como Entero
	Escribir 'Ingrese valor a guardarse en A:'
	Leer A
	Escribir 'Ingrese valor a guardarse en B: '
	Leer B
	Escribir 'Los valores ingresados son A:',A,', B:',B
	Si A>B Entonces
		Escribir 'Los valores de salida son A:',A,', B:',B
	SiNo
		Aux<-A
		A<-B
		B<-Aux
		Escribir 'Los valores de salida son A:',A,', B:',B
	Fin Si
FinAlgoritmo