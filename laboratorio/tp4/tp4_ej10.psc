//Se leen dos enteros N y  M, y se emite la tabla de 
//multiplicar de N entre 1 y M. 
Algoritmo tp4_ej10
	Definir N,M Como Entero
	Escribir 'Ingrese un valor N: '
	Leer N
	Escribir 'Ingrese un valor M: '
	Leer M
	Escribir 'Tabla de multiplicar de N:',N,',entre 1 y M:',M
	Para i<-1 Hasta M Hacer
		Escribir N,'*',i,'=',N*i
	Fin Para
FinAlgoritmo