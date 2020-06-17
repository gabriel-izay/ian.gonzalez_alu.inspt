Algoritmo tp2ej9
	//Dados la hora, minutos y los segundos 
	//de dos instantes, la computadora muestra 
	//cuantos segundos contiene el 
	//intervalo que abarcan.
	
	//  *** Declaracion de variables intervinientes
	Definir Hs01,Hs02,Min01,Min02,Sec01,Sec02 Como Entero
	Definir DifSec,DifMin,DifHs,IntervaloSec Como Entero
	Definir strInstante01,strInstante02 Como Caracter
	Definir strHs01,strHs02,strMin01,strMin02,strSec01,strsec02 Como Caracter
	//  *** Ingreso de datos***
	Escribir 'Ingrese primer instante en formato hhmmss: '
	Leer strInstante01
	Escribir 'Ingrese segundo instante en formato hhmmss: '
	Leer strInstante02
	// *** Descomposición del valor de entrada en HH, MM, SS
	//Instante 01
	strHs01<-Subcadena(strInstante01,1,2)
	strMin01<-Subcadena(strInstante01,3,4)
	strSec01<-Subcadena(strInstante01,5,6)
	//Instante 02
	strHs02<-Subcadena(strInstante02,1,2)
	strMin02<-Subcadena(strInstante02,3,4)
	strSec02<-Subcadena(strInstante02,5,6)
	//*** Conversión a INT para el calculo
	Hs01<-ConvertirANumero(strHs01)
	Min01<-ConvertirANumero(strMin01)
	Sec01<-ConvertirANumero(strSec01)
	Hs02<-ConvertirANumero(strHs02)
	Min02<-ConvertirANumero(strMin02)
	Sec02<-ConvertirANumero(strSec02)
	//***Calculos***
	DifHs<-((Hs02-Hs01)*3600)
	DifMin<-((Min02-Min01)*60)
	DifSec<-(Sec02-Sec01)
	IntervaloSec<-(DifHs+DifMin+DifSec)
	//*** Salida***
	Escribir 'El intervalo abarcado en [s] es de: ',IntervaloSec
FinAlgoritmo
