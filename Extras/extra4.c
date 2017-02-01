//Monroy Rubio Cristian Alexis
//#mipasion :v

#include <stdio.h>
#include <math.h> //Biblioteca usada para pow :v

int main()
{
	float num, a= 10;
	
	printf("Dame un numero entre 0 y 9\n"); //Pide un número
	scanf("%f",&num);
	
	if(num >=1  && num <= 8) //Si se encuentra en el rango
	{
		printf("%.f\n",  (pow(a,num)-1)); //Eleva 10 a la potencia del número dado por el usuario y le resta 1 :v
	}
	else 
	{
			printf("Ño >:v\n");
	}
	
}
