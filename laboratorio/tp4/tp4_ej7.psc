Algoritmo tp4_ej7
	Definir num,sumnum,cantNum Como Entero
	Definir promedio Como Real
	sumnum<-0
	cantNum<-0
	Repetir
		Escribir 'Ingresar un valor entero no nulo: '
		Leer num
		Si num>0 Entonces
			sumnum<-sumnum+num
			cantNum<-cantNum+1
		Fin Si
	Hasta Que num=0
	promedio<-sumnum/cantNum
	Escribir 'El promedio de los valores ingresados es: ',promedio
FinAlgoritmo
