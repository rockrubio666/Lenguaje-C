//Monroy Rubio Cristian Alexis

#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>	//manejo de archivos
#include <unistd.h> //constantes numericas


int main(){
	int archivo = open("/dev/random", O_RDONLY); //O_RDONLY, lee el archivo
	unsigned int rand;  //Se define como unsigned, porque no se sabe la longitud que puede devolver el random
	int randomnum = read(archivo,&rand, sizeof(rand)); //lee el archivo, se lo asigna a la variable rand
	printf("%u\n",rand);//imprime la variable
	close(archivo);//cierra el archivo
	
	
}
