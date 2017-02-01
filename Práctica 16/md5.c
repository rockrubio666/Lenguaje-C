//Monroy Rubio Cristian Alexis

#include <openssl/md5.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char**argv){
	FILE *prueba; //Apuntador de tipo archivo
	long tamanio; 
	unsigned char *buf;
	unsigned char *md5_result = NULL;
	
	prueba = fopen(argv[1],"r"); //Se crea un descriptor de archivo de lectura
	fseek(prueba,0L,SEEK_END); //Recorre el archivo desde el inicio hasta el final
	tamanio = ftell(prueba); //Devuelve la posicion del puntero
	fseek(prueba,0L,SEEK_SET); //Posiciona el puntero en un caracter del archivo
	buf = malloc(tamanio); //Almacena en la memoria el tamaño del archivo
	fread(buf,tamanio,1,prueba); //Lee las variables
	fclose(prueba);
	md5_result = malloc(MD5_DIGEST_LENGTH);
	MD5(buf,tamanio,md5_result);
	for(int i=0; i<MD5_DIGEST_LENGTH; i++){
		printf("%02x",md5_result[i]);
		
	}
	printf("\n");
	fclose(prueba);//Cierra el archivo
	free(md5_result); //Libera el valor de la variable
	free(buf); 
	return 0;
}


