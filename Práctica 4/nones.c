//Monroy Rubio Cristian Alexis

#include <stdio.h>

int main()
{
	int num; //Se declara la variable de tipo entero

	printf("Dame el número: "); //Pide el numero al usuario
	scanf("%d",&num); //Recibe el dato dado por el usuario y lo almacena en la variable

	for(int i=1;i<=num;i++) //Hace un recorrido desde 1 hasta el valor de la variable
		if(i%2!=0) // Si el modulo de la variable es diferente de 0
			printf("%d\n",i); //Imprime en pantalla el numero 

}

