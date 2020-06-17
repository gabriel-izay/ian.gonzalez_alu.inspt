Algoritmo tp3ej11
	Definir a,resAux,cif1,cif2,cif3 Como Entero
	Escribir 'Ingrese un valor de tres cifras: '
	Leer a
	Mientras (a<100 o a>999) Hacer
		Escribir 'Debe ingresar un valor de tres cifras: '
		Leer a
	Fin Mientras
	cif1<-trunc(a/100)
	resAux<- a mod 100
	cif2<-trunc(resAux/10)
	cif3<- resAux mod 10
	
	Si cif1<cif2 Entonces
		Si cif2<cif3
			Escribir 'Las cifras ordenadas de menor a mayor son'
			Escribir cif1,',',cif2,',',cif3
		SiNo
			Si cif1<cif3 Entonces
				Escribir 'Las cifras ordenadas de menor a mayor son'
				Escribir cif1,',',cif3,',',cif2
			SiNo
				Escribir 'Las cifras ordenadas de menor a mayor son'
				Escribir cif3,',',cif1,',',cif2
			Fin Si
		Fin Si
	SiNo
		Si cif1<cif3 Entonces
			Escribir 'Las cifras ordenadas de menor a mayor son'
			Escribir cif2,',',cif1,',',cif3
		SiNo
			Si cif2<cif3 Entonces
				
				Escribir 'Las cifras ordenadas de menor a mayor son'
				Escribir cif2,',',cif3,',',cif1
			SiNo
				Escribir 'Las cifras ordenadas de menor a mayor son'
				Escribir cif3,',',cif2,',',cif1
			Fin Si
		Fin Si
	Fin Si
FinAlgoritmo
