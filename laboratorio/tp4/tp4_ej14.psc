// Se ingresa número n y a continuación n enteros 
// de 3 cifras, informar cuántos de ellos son capicúas.
Algoritmo tp4_ej14
	Definir i,N,num,cantCapi,cent,uni,b Como Entero
	Escribir 'Ingrese un valor N entero positivo: '
	cantCapi<-0
	cent<-0
	uni<-0
	b<-0
	Leer N
	Para i<-1 Hasta N Hacer
		Escribir 'Ingresar un valor de 3 cifras: '
		Leer num
		cent<-trunc(num/100)
		b<-num mod 100
		uni<- b mod 10
		Si cent=uni
			cantCapi=cantCapi+1
		Fin Si
	Fin Para
	Escribir 'Se ingresaron ',cantCapi
	Escribir 'nros capicua'
FinAlgoritmo
