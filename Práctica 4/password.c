//Monroy Rubio Cristian Alexis
#include <stdio.h>
#include <string.h>

int main()
{
	char pass[100];//Se crea un arreglo

	printf("Usuario: Pepe \n");
	printf("Introduce la contrasena: \n"); //Se pide el valor al usuario
	fgets(pass,5,stdin);//Use fgets, porque con scanf, solamente tomaba el primer caracter. fgets recibe: la variable, el no. de caracteres que queremos que tome y que sean los valores de entrada de usuario

	
	
if(strcmp(pass, "hola") == 0) //strcmp, permite comparar caracteres, si son iguales regresa 0
		printf("OK!\n");
	else
		printf("GTFOH\n");
	

}
