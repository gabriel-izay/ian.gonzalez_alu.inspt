Algoritmo tp3_ej20
	Definir nroDia Como Entero
	Definir strDia Como Caracter
	Escribir 'Ingrese un nro de día de la semana(ej:1/Lunes): '
	Leer nroDia
	Segun nroDia Hacer
		1:
			strDia<-'Lunes'
		2:
			strDia<-'Martes'
		3:
			strDia<-'Miercoles'
		4:
			strDia<-'Jueves'
		5:
			strDia<-'Viernes'
		6:
			strDia<-'Sabado'
		7:
			strdia<-'Domingo'
		De Otro Modo:
			strdia<-'No válido'
	Fin Segun
	Escribir 'Valor ingresado: ',nroDia
	Escribir 'Dia de la semana: ',strdia
FinAlgoritmo
