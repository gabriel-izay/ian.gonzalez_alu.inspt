Algoritmo tp2ej10
	//Se ingresa un valor entero de 3 dígitos, 
	//realizar un programa que devuelva las 
	//cifras por separado.
	definir a como entero
	Escribir ('Ingrese valor de tres cifras: ')
	leer a
	Mientras (a<100 o a>999) Hacer
		Escribir ('Ingrese valor de tres cifras: ')
		leer a
	Fin Mientras
	cent<-trunc(a/100)
	b<-a mod 100
	dec<- trunc(b/10)
	uni<- b mod 10
	Escribir 'Valor ingresado: ',a
	Escribir 'Unidades_______: ',uni
	Escribir 'Decenas________: ',dec
	Escribir 'Centenas_______: ',cent
FinAlgoritmo
