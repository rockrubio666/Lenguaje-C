//Monroy Rubio Cristian Alexis

#include <stdio.h>

int main()
{
	int num, a, b,suma;

	printf("Dame un numero de 2 digitos \n"); //Pide un numero
	scanf("%d",&num);
	

	if(num >=10  && num <= 99) //Si esta dentro del rango
	{
			a = num%10; //Toma el segundo digito
			b = num/10 %10; //Toma el primer digito
			suma = a + b;
			printf("%d\n",suma);
	}
	else 
	{
			printf("Ño >:v, lastimas mi pasión :,v\n");
	}
}
