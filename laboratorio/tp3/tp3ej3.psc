Algoritmo tp3ej3
	Definir a,b,suma,resta,prod,coc Como Real
	Escribir 'Ingrese un valor: '
	Leer a
	Escribir 'Ingrese otro valor: '
	Leer b
	suma<-a+b
	resta<-a-b
	prod<-a*b
	Escribir 'La suma es: ',suma
	Escribir 'La resta es: ',resta
	Escribir 'El producto es: ',prod
	Si b!=0 Entonces
		coc=a/b
		Escribir 'El cociente es: ',coc
	SiNo
		Escribir 'No es posible dividir por 0'
	Fin Si
FinAlgoritmo
