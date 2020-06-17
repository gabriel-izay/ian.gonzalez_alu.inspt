Algoritmo Tarea_13_05_entregar
	//ejercicio 3 tp 2
		
	// variables
	definir Precio_lista,desc, Precio_descuento Como Real
	//factor de descuento
	por18=0.18;
	//Ingreso de precio de lista
	Escribir "  ***** Ingrese Precio de Lista *****"
	Leer  Precio_lista
	//calculos
	desc=Precio_lista*por18;
	Precio_descuento=Precio_lista-desc;
	Escribir""
	Escribir""
	Escribir "Precio de lista:_________$",Precio_lista
	Escribir""
	Escribir "Descuento:_______________$",desc
	Escribir""
	Escribir "Precio con descuento:____$",Precio_descuento
	
FinAlgoritmo
