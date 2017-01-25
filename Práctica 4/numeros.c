#include <stdio.h>

int main()
{
	int inicio = 0; 
	int num; //Variable que almacenara el dato dado por el usuario

	printf("Dame el número: ");
	scanf("%d",&num);

	if(num>0) //Si el numero es mayor a 0
	while(num>=inicio) //Mientras el número sea mayor o igual a 0
		printf("%d\n", inicio++); //Se imprime el valor del numero y se incrementa inicio en 1
	else
		printf("Número no válido\n");
		return 0;

}
