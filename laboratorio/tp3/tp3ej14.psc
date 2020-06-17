Algoritmo tp3ej14
	Definir A,B,C,Aux Como Entero
	Escribir 'Ingrese un valor a guardarse en A:'
	Leer A
	Escribir 'Ingrese un valor a guardarse en B:'
	Leer B
	Escribir 'Ingrese un valor a guardarse en C:'
	Leer C
	Escribir 'Se ingresaron los valores A:',A,',B:',B,',C:',C
	Si A<B Entonces
		Si B<C
			Aux<-A
			A<-C
			C<-Aux
			Escribir 'Se tiene a la salida:'
			Escribir 'A:',A,',B:',B,',C:',C
		SiNo
			Si A<C Entonces
				Aux<-A
				A<-B
				B<-C
				C<-Aux
				Escribir 'Se tiene a la salida:'
				Escribir 'A:',A,',B:',B,',C:',C
			SiNo
				Aux<-A
				A<-B
				B<-Aux
				Escribir 'Se tiene a la salida:'
				Escribir 'A:',A,',B:',B,',C:',C
			Fin Si
		Fin Si
	SiNo
		Si A<C Entonces
			Aux<-A
			A<-C
			C<-B
			B<-Aux
			Escribir 'Se tiene a la salida:'
			Escribir 'A:',A,',B:',B,',C:',C
			Escribir cif2,cif1,cif3
		SiNo
			Si B<C Entonces
				Aux<-B
				B<-C
				C<-Aux
				Escribir 'Se tiene a la salida:'
				Escribir 'A:',A,',B:',B,',C:',C
			SiNo
				Escribir 'Se tiene a la salida:'
				Escribir 'A:',A,',B:',B,',C:',C
			Fin Si
		Fin Si
	Fin Si	
FinAlgoritmo
