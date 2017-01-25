//Monroy Rubio Cristian Alexis
#include <stdio.h>

int factorial(unsigned int num) //La función recibe un valor de tipo entero, se coloco unsigned porque no se sabe hasta que valor puede tomar el factorial
{
	if (num<=1) //Si el numero es negativo o igual a 1 
		return 1; //Devuelve1
	else
		return num * factorial(num -1); //De lo contrario, toma el numero y lo multiplica metiendolo de nuevo en la funcion y restandole 1 
}

int main()
{
	int num = 1;
	printf("%d\n",factorial(num)); //Imprime la funcion del numero introducido 	
}
