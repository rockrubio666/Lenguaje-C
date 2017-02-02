//Monroy Rubio Cristian Alexis
#include <sys/file.h>
#include <stdio.h>
#include <string.h>
#include <linux/input.h>

int main(int agrc, char *argv[]){
	
	struct input_event ev; //struct que recibe la entrada del teclado
	int fd,rd;
	char *caracteres = "  1234567890'   qwertyuiop +  asdfghjklñ{} zxcvbnm,.-	"; //Caracteres que se comparan con los codigos
	printf("Escribe :v\n");
	
	if((fd = open("/dev/input/event0",O_RDONLY|O_NONBLOCK)) == -1){ //Si no puede abrir el archivo, envia un error
		printf("Te he fallado :,v\n");
		return -1;
	}

	while(1){
		memset((void*)&ev,0,sizeof(ev)); //Recibe la posicion en memoria del puntero
		rd = read(fd,(void*)&ev,sizeof(ev)); //Lee el codigo
		
		if(rd >0 && ev.value==0 && ev.type==1){
			printf("\nCaracter: %c, Código: %d\n",caracteres[ev.code],ev.code); //Imprime el codigo y el caracter del teclado
		}
		
	}
	return 0;
}
	
