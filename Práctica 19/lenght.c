//Monroy Rubio Cristian Alexis

#include <stdio.h>
#include <fcntl.h> //Para usar O_RDONLY

int main(int argc, char*argv[]){
		int fd, bytes;
		
		if(argc!=2){ //Si recibe más o menos de dos argumentos
			printf("Ño >:,v, ¿Acaso eres un milenial? :v\n"); //Te ofende :v
		}
		
		else{	
		fd = open(argv[1],O_RDONLY); //Abre el archivo recibido, de solo lectura
		bytes = lseek(fd,0,SEEK_END); //Recorre todo el archivo hasta llegar al final del mismo
		int bits = (bytes*8); //MUltiplica los bytes *8 para hacer el calculo de bits
		float kb = (bytes/1024.0); // Y entre 1024, para KB
		
		printf("Tamaño del archivo: %s, bits: %d, bytes: %d, Kb: %.3f\n",argv[1],bits,bytes,kb); //Imprime todo 
		
		}
		return 0;
}
