#include<stdio.h>
/*	Original
	int x = 10;
	char c[x];
	c[0]='h';
	c[1]='o';
	c[2]='l';
	c[3]='a';
	c[4]='\0';
	for(int i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
		printf("%c\n",c[i]);
	}*/
	
/*	
//Reducido
	char c[]= "hola\0";
	for(int i=0;i<10;i++)
	{
		if(c[i]=='\0')
			break;
			printf("%c\n",c[i]);
	}
*/
//Reducido con apuntador 
int main()
{
	char *c = "hola\0"; //Se declara la cadena
	
	for(int i=0;i<10;i++) 
	{
		if(c[i]=='\0') //Hasta que el indice de i, sea el fin de la cadena
			break;
		printf("%c\n",c[i]); //Imprime el caracter/indice
	}

}
