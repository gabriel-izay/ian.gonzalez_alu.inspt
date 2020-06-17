Algoritmo tp3ej12_ver2
	Definir strSalida,strCif1,strCif2,strCif3 Como Caracter
	Definir a,cif1,cif2,cif3,intSalida Como Entero
	Escribir 'Ingrese un valor de tres cifras: '
	Leer a
	Mientras (a<100 o a>999) Hacer
		Leer a
	Fin Mientras
	cif1<-trunc(a/100)
	resAux<- a mod 100
	cif2<-trunc(resAux/10)
	cif3<- resAux mod 10
	
	Si cif1<cif2 Entonces
		Si cif2<cif3
			Escribir 'Valor ingresado: '
			Escribir a
			Escribir 'Salida: '
			strCif1<-ConvertirATexto(cif1)
			strCif2<-ConvertirATexto(cif2)
			strCif3<-ConvertirATexto(cif3)
			strSalida<-Concatenar(strCif1,strCif2)
			strSalida<-Concatenar(strSalida,strCif3)
			intSalida<-ConvertirANumero(strSalida)
			Escribir intSalida			
		SiNo
			Si cif1<cif3 Entonces
				Escribir 'Valor ingresado: '
				Escribir a
				Escribir 'Salida: '
				strCif1<-ConvertirATexto(cif1)
				strCif2<-ConvertirATexto(cif2)
				strCif3<-ConvertirATexto(cif3)
				strSalida<-Concatenar(strCif1,strCif3)
				strSalida<-Concatenar(strSalida,strCif2)
				intSalida<-ConvertirANumero(strSalida)
				Escribir intSalida	
			SiNo
				Escribir 'Valor ingresado: '
				Escribir a
				Escribir 'Salida: '
				strCif1<-ConvertirATexto(cif1)
				strCif2<-ConvertirATexto(cif2)
				strCif3<-ConvertirATexto(cif3)
				strSalida<-Concatenar(strCif3,strCif1)
				strSalida<-Concatenar(strSalida,strCif2)
				intSalida<-ConvertirANumero(strSalida)
				Escribir intSalida	
			Fin Si
		Fin Si
	SiNo
		Si cif1<cif3 Entonces
			Escribir 'Valor ingresado: '
			Escribir a
			Escribir 'Salida: '
			strCif1<-ConvertirATexto(cif1)
			strCif2<-ConvertirATexto(cif2)
			strCif3<-ConvertirATexto(cif3)
			strSalida<-Concatenar(strCif2,strCif1)
			strSalida<-Concatenar(strSalida,strCif3)
			intSalida<-ConvertirANumero(strSalida)
			Escribir intSalida	
		SiNo
			Si cif2<cif3 Entonces
				Escribir 'Valor ingresado: '
				Escribir a
				Escribir 'Salida: '
				strCif1<-ConvertirATexto(cif1)
				strCif2<-ConvertirATexto(cif2)
				strCif3<-ConvertirATexto(cif3)
				strSalida<-Concatenar(strCif2,strCif3)
				strSalida<-Concatenar(strSalida,strCif1)
				intSalida<-ConvertirANumero(strSalida)
				Escribir intSalida	
			SiNo
				Escribir 'Valor ingresado: '
				Escribir a
				Escribir 'Salida: '
				strCif1<-ConvertirATexto(cif1)
				strCif2<-ConvertirATexto(cif2)
				strCif3<-ConvertirATexto(cif3)
				strSalida<-Concatenar(strCif3,strCif2)
				strSalida<-Concatenar(strSalida,strCif1)
				intSalida<-ConvertirANumero(strSalida)
				Escribir intSalida	
			Fin Si
		Fin Si
	Fin Si	
FinAlgoritmo
