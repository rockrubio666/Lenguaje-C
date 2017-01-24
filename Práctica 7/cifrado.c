//MOnroy Rubio Cristian Alexis

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main()
{
	
	//int i[] = {'a','b','c','d','e','f','g','h','i','j','k'};
	char i[] = "lalas";
	//int clave = 10;
	
	
	
	//for (int a=0;a<sizeof(i)/sizeof(int);a++)
	for (int a=0;a<sizeof(i)/sizeof(char);a++)
	{
		int clave = 10;
		printf("%c",i[a]^clave);
		//printf("\n");
	}
	
	
}
