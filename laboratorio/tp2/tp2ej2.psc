Algoritmo tp2ej2
	//Ingresar nro de tres cifras e 
	// imprimir valor central
	definir a, divisor como entero
	Escribir ('Ingrese valor de tres cifras: ')
	leer a
	Mientras (a<100 o a>999) Hacer
		Escribir ('Ingrese valor de tres cifras: ')
		leer a
	Fin Mientras
	res1=a mod 100
	cifMed=trunc(res1/10)
	Escribir 'La cifra del medio es: ',cifMed
FinAlgoritmo
