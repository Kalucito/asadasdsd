/*
 ============================================================================
 Name        : parcial.c
 Author      : Lucas De Nardo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================

 1. Realizar una funci�n que  reciba como par�metro el importe de un producto y un porcentaje de descuento.
 La funci�n retornar� el  importe con el descuento aplicado.
  Probar en el main.


  3. Crear una funci�n que permita invertir el orden de una cadena de caracteres,
  La funci�n recibir� dos cadenas, una con el texto a invertir,
  y otra para el texto invertido. Probar desde el main.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float hacerDescuento(float importe, float descuento);
void invertirCadena(char cadena[], char cadenaInvertida[]);


int main(void) {

	char cadena[10] = "holaluc";
	char cadenaGuardar[10];

	invertirCadena(cadena, cadenaGuardar);

	printf("%s", cadenaGuardar);


	return 0;
}

void invertirCadena(char cadena[], char cadenaInvertida[])
{

	char aux;
	int len = strlen(cadena);
	int lenaux = len;

	for(int i = 0; i < strlen(cadena); i++)
	{
//		for()
//		{
//
//		}
		aux = cadena[i];
		cadena[i] = cadenaInvertida[lenaux];
		cadenaInvertida[lenaux] = aux;
		lenaux--;

	}

}



float hacerDescuento(float importe, float descuento)
{
	float numeroConDescuento;
	float descuentoHecho;

	descuentoHecho = importe * descuento / 100;
	numeroConDescuento = importe - descuentoHecho;

	return numeroConDescuento;
}
