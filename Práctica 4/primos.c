//Monroy Rubio Cristian Alexis

#include <stdio.h>
int main()
{
	int num; //Se crea la variable

	printf("Dame el número: "); //Se pide el numero al usuario
	scanf("%d",&num); //Se recibe el numero por parte del usuario

	for(int i=2;i<=num;i++) //Se recorre todos los numeros desde i hasta el nummero introducido por el usuario
		if (i%2 !=0 &&  i%3 !=0 && i%5 !=0 && i%7 !=0 || i==2 	|| i==3 || i==5 || i==7) //Si no entra en ninguna de las operaciones o es igual a 2,3,5,7 es primo
			printf ("%d\n",i);
		
}
