//Monroy Rubio Cristian Alexis

#include <stdio.h>

int main()
{
	int figura = 0; //Variable que se va a usar para validar en el switch
	float lado1;
	float lado2;
	float base;
	float altura;
	
	//El usuario elige una de las opciones
	printf("Elige un numero: \n"); 
	printf("1) Triangulo \n");
	printf("2) Rectangulo \n");
	printf("3) Cuadrado \n");
	scanf("%d",&figura); //Se guarda la opcion dada por el usuario
	
	
	
	switch(figura)//De acuerdo al numero dado por el usuario se realiza la operacion
	{
			case 1:
				printf("Dame la base ");
				scanf("%f",&base);
				printf("Dame la altura ");
				scanf("%f",&altura);
				float op = ((base * altura)/2);
				printf("El area del triangulo es: %f\n",op);
				break;
				
			case 2:
				printf("Dame el primer lado ");
				scanf("%f",&lado1);
				printf("Dame el segundo lado ");
				scanf("%f",&lado2);
				float op1 = (lado1 * lado2);
				printf("El area del rectangulo es: %f\n",op1);
				break;
				
			case 3:
				printf("Dame el lado ");
				scanf("%f",&lado1);
				float op2 = (lado1 * lado1);
				printf("El area del cuadrado es: %f\n",op2);
				break;
			
			default:
				printf("Numero no valido");
	}
	
}
