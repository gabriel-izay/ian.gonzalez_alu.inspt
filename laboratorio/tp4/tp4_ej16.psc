//Se ingresa un número entero y, la computadora indica si es primo o no.  
Algoritmo tp4_ej16
	Definir num,cantdiv Como Entero
	Escribir 'Ingrese un numero: '
	cantdiv<-0
	Leer num
	Para i<-1 Hasta num Hacer
		resto<-num mod i
		Si resto=0 Entonces
			cantdiv=cantdiv+1
		Fin Si
	Fin Para
	Si cantdiv=2 Entonces
		Escribir 'El numero ingresado',num,',es primo'
	SiNo
		Escribir 'El numero ingresado',num,',NO es primo'
	Fin Si
FinAlgoritmo
