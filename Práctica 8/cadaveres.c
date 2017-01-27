//Monroy Rubio Cristian Alexis

#include<stdio.h>

struct becario{ 
	char nombre[12];
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; 
};

int main()
{
	struct becario bec[8]; //Se crea el arreglo de becarios.
	strcpy(bec[0].nombre,"Gonzalo"); 
	bec[0].edad=25; 
	bec[0].promedio=9.6; 
	strcpy(bec[0].procedencia,"Ciencias"); 
	bec[0].generacion=11; 
	bec[0].proyecto=1;
	
	strcpy(bec[1].nombre,"Fer"); 
	bec[1].edad=22; 
	bec[1].promedio=9.7; 
	strcpy(bec[1].procedencia,"FI"); 
	bec[1].generacion=11; 
	bec[1].proyecto=1;
	
	strcpy(bec[2].nombre,"Angel"); 
	bec[2].edad=35; 
	bec[2].promedio=9.3; 
	strcpy(bec[2].procedencia,"SB"); 
	bec[2].generacion=11; 
	bec[2].proyecto=1;
	
	strcpy(bec[3].nombre,"Omar"); 
	bec[3].edad=22; 
	bec[3].promedio=9.4; 
	strcpy(bec[3].procedencia,"Fes Cuautitlan"); 
	bec[3].generacion=11; 
	bec[3].proyecto=1;
	
	strcpy(bec[4].nombre,"Anota"); 
	bec[4].edad=22; 
	bec[4].promedio=9.7; 
	strcpy(bec[4].procedencia,"Poli"); 
	bec[4].generacion=11; 
	bec[4].proyecto=1;
	
	strcpy(bec[5].nombre,"Erik"); 
	bec[5].edad=22; 
	bec[5].promedio=9.7; 
	strcpy(bec[5].procedencia,"Poli"); 
	bec[5].generacion=11; 
	bec[5].proyecto=1;

	strcpy(bec[6].nombre,"Munra");
	bec[6].edad=100; 
	bec[6].promedio=8.1; 
	strcpy(bec[6].procedencia,"El mas alla"); 
	bec[6].generacion=11; 
	bec[6].proyecto=2;
	
	strcpy(bec[7].nombre,"Tutankamon"); 
	bec[7].edad=89; 
	bec[7].promedio=8.0; 
	strcpy(bec[7].procedencia,"Egipto"); 
	bec[7].generacion=11; 
	bec[7].proyecto=2;
	
	for (int a=0;a<8;a++) //Se recorre el arreglo e imprime cada uno de los valores de acuerdo al indice
	{
		printf("%s\n",bec[a].nombre);
		printf("%d\n",bec[a].edad);
		printf("%f\n",bec[a].promedio);
		printf("%s\n",bec[a].procedencia);
		printf("%d\n",bec[a].generacion);
		printf((bec[a].proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
		printf("-------------------\n");
	}	
	
	
	
	
}	

	
	

