Algoritmo tp3ej10
	Definir a,cif1,cif2 Como Entero
	Escribir 'Ingrese un numero de dos cifras: '
	Leer a
	Mientras (a<10 o a>99) Hacer
		Escribir 'Debe ingresar un valor de dos cifras:'
		Leer a
	Fin Mientras
	cif1<-trunc(a/10)
	cif2<-a mod 10
	Si cif1=cif2 Entonces
		Escribir 'Las cifras son iguales'
	SiNo
		Si cif1>cif2 Entonces
			Escribir 'Las cifras ordenadas de mayor a menor son:'
			Escribir cif1,',',cif2
		SiNo
			Escribir 'Las cifras ordenadas de mayor a menor son:'
			Escribir cif2,',',cif1
		Fin Si
	Fin Si
FinAlgoritmo
