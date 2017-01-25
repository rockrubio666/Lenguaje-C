//Monroy Rubio Cristian Alexis

#include <stdio.h>
int main()
{
	
	char num; //Se define la variable

	printf("Dame caracter: "); //Se pide un dato al usuario
	scanf("%c",&num); //Se toma ese dato, se usa scanf, ya que solo toma el primer caracter si es una cadena
	
	printf("El Hexadecimal es: 0x%02X\n",num);//%02X, convierte en hexadecimal al caracter

}

