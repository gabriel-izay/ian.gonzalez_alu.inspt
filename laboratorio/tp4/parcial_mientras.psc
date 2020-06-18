Algoritmo testparcial
	definir i, c Como Entero
	i<-10
	c<-0
	Mientras i<40 Hacer
		Si (i mod 2=0) o (i mod 3=0) Entonces
			c<-c+1
		Fin Si
		Escribir i
		i<-i+1
	Fin Mientras
	Escribir c
FinAlgoritmo
