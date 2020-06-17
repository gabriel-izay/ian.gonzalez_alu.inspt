Algoritmo Tp2_Ej1
	// se ingresa valor de dos cifras.
	// Devolver cifra de unidades y cifra de decenas
	definir a,div,coc, res Como Entero
	div<-10
	Escribir ('Ingrese valor de dos cifras: ')
	leer a
	coc=trunc(a/div)
	res=a mod div
	escribir'La cifra de decenas es: ',coc
	Escribir'La cifra de  unidades es: ',res
FinAlgoritmo
