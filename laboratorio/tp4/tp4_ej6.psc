//Se lee una serie de N números, de a uno y se emite:
//	a) la cantidad de positivos;
//	b) el valor del primer y último números leídos; 
//	c) la sumatoria; 
Algoritmo tp4_ej6
	Definir N,cantPos Como Entero
	Definir pmerValor,UltimoValor,num,sum como real
	cantPos<-0
	sum<-0
	Escribir 'Ingrese un valor natural: '
	Leer N
	Para i<-1 Hasta N Hacer
		Escribir 'Ingrese un valor: '
		Leer num
		Segun i Hacer
			1:
				pmerValor<-num
			N:
				UltimoValor<-num
		Fin Segun
		Si num>0 Entonces
			cantPos<-cantPos+1
		Fin Si
		sum<-sum+num
	Fin Para
	Escribir 'Se ingresaron: ',cantPos,' valores positivos'
	Escribir 'Primer valor ingresado: ',pmerValor
	Escribir 'Ultimo valor ingresado: ',UltimoValor
	Escribir 'La sumatoria es: ',sum
FinAlgoritmo
