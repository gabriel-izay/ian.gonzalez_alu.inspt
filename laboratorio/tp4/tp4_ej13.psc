Algoritmo tp4_ej13
	Definir i,num,fact Como Entero
	Escribir 'Ingrese un numero entero positivo: '
	Leer num
	fact<-1
	Si num=0 o num=1 Entonces
		fact=num
	SiNo
		Para i<-1 Hasta num
			fact<-fact*i
		Fin Para
	Fin Si
	Escribir 'El factorial del valor ingresado es: ',fact	
FinAlgoritmo
