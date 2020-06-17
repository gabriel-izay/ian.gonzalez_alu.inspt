Algoritmo tp3_ej18
	Definir importe, descuento,total Como Real
	Escribir 'Ingrese importe de compra: '
	Leer importe
	Si importe>=10000 Entonces
		descuento=0.2*importe
	Fin Si
	total<-(importe-descuento)
	Escribir 'Importe:_____',importe
	Escribir 'Descuento:___',descuento
	Escribir 'Total:_______',total
FinAlgoritmo
