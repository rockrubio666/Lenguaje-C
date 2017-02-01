//Monroy Rubio Cristian Alexis

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[]){
	
	char * p1 = strchr(argv[1], '.'); //Si recibe un argumento con ., manda error
	char * p2 = strchr(argv[2], '.'); 
	int num1 = atoi(argv[1]); //Convierte el argumento en integer
	int num2 = atoi (argv[2]);
	int op = num1 + num2; //Hace la suma :v
	
	if(argc != 3){ //Si recibe más o menos de 3 argumentos
		printf("Solo dos números >:v\n"); //Manda este mensaje
	}
	else if(p1 || p2){ //Si recibe numeros con .
		printf("solo enteros >:v\n");
	}
	else if(!isdigit(*argv[1])){ //Si recibe caracteres
			printf("Solo números >:v\n");
	}
	else if(!isdigit(*argv[2])){
		printf("Solo números >:v\n");
	}
	else{
		printf("La suma es: %d\n",op); //Suma :v 
	}
}
