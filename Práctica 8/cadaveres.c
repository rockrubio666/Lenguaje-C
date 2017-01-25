//Monroy Rubio Cristian Alexis

#include<stdio.h>
#include<string.h>
struct becario{  //Se crea la estructura becario
	char nombre[12]; //Variables que contiene becario
	int edad;
	float promedio;
	char procedencia[12];
	int generacion;
	unsigned int proyecto:1; 
};
int main()
{
	struct becario bec; //Se crea el tipo de variable bec
	strcpy(bec.nombre,"Gonzalo"); //Se agrega cada becario, con sus respectivos datos
	printf("%s\n",bec.nombre);
	bec.edad=25; 
	printf("%d\n",bec.edad);
	bec.promedio=9.6; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"Ciencias"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Fer"); 
	printf("%s\n",bec.nombre);
	bec.edad=22; 
	printf("%d\n",bec.edad);
	bec.promedio=9.7; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"FI"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Angel"); 
	printf("%s\n",bec.nombre);
	bec.edad=35; 
	printf("%d\n",bec.edad);
	bec.promedio=9.3; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"SB"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Omar"); 
	printf("%s\n",bec.nombre);
	bec.edad=22; 
	printf("%d\n",bec.edad);
	bec.promedio=9.4; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"Fes Cuautitlan"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Anota"); 
	printf("%s\n",bec.nombre);
	bec.edad=22; 
	printf("%d\n",bec.edad);
	bec.promedio=9.7; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"Poli"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Erik"); 
	printf("%s\n",bec.nombre);
	bec.edad=22; 
	printf("%d\n",bec.edad);
	bec.promedio=9.7; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"Poli"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=1;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Munra"); 
	printf("%s\n",bec.nombre);
	bec.edad=100; 
	printf("%d\n",bec.edad);
	bec.promedio=8.1; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"El mas alla"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=2;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
	
	strcpy(bec.nombre,"Tutankamon"); 
	printf("%s\n",bec.nombre);
	bec.edad=89; 
	printf("%d\n",bec.edad);
	bec.promedio=8.0; 
	printf("%f\n",bec.promedio);
	strcpy(bec.procedencia,"Egipto"); 
	printf("%s\n",bec.procedencia);
	bec.generacion=11; 
	printf("%d\n",bec.generacion);
	bec.proyecto=2;
	printf((bec.proyecto&1)?"CON PROYECTO\n":"SIN PROYECTO\n");
	printf("-------------------\n");
}	

	
	

