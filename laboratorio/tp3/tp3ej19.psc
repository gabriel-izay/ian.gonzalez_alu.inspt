Algoritmo tp3_ej19
	Definir sueldo,sueldoextras,cantHoras,cantHsExtra,cantHsComunes Como Entero
	Definir horaComun,horaExtra Como Entero
	horaComun<-16
	horaExtra<-20
	Escribir 'Ingrese cantidad de horas trabajadas: '
	leer cantHoras
	Si cantHoras<=40 Entonces
		sueldo<-cantHoras*horaComun
	SiNo
		cantHsExtra<-cantHoras-40
		cantHsComunes<-cantHoras-cantHsExtra
		sueldoextras<-horaExtra*cantHsExtra
		sueldo<-horaComun*cantHsComunes+horaExtra*cantHsExtra
	Fin Si
	Escribir 'EL sueldo es:_________$',sueldo
	Escribir 'Horas trabajadas:_____',cantHoras,'Hs'
	Escribir 'Hs Extra trabajadas:__',cantHsExtra,'Hs'
FinAlgoritmo