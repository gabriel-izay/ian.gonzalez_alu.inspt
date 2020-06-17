Algoritmo tp2ej4
	//Entra nro de dos cifras
	//sale nro con cifras permutadas
	//ej: Entra 75, sale 57
	definir a,div,dec, uni,permu Como Entero
	definir sdec,suni,spermu Como Caracter
	div<-10
	Escribir ('Ingrese valor de dos cifras: ')
	leer a
	dec<-trunc(a/div)
	uni<-a mod div
	sdec<-ConvertirATexto(dec)
	suni<-ConvertirATexto(uni)
	spermu<-Concatenar(suni,sdec)
	permu<-ConvertirANumero(spermu)
	Escribir 'Valor: ',a
	Escribir 'Valor permutado: ',permu
FinAlgoritmo