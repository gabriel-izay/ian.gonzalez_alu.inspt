Algoritmo tp4_ej1
	//Se ingresan 20 números por teclado y se indica si 
	//alguno fue negativo mediante un mensaje
	Definir num,flag Como Real
	flag<-0
	Para i=1 Hasta 20 Hacer
		Escribir 'Ingrese un valor: '
		Leer num
		Si num<0 Entonces
			flag<-1
		Fin Si
	Fin Para
	Si flag=1 Entonces
		Escribir 'Ingresó al menos un valor negativo'
	SiNo
		Escribir 'Solo ingresó valores positivos'
	Fin Si
FinAlgoritmo
