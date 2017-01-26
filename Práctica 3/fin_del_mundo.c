//Monroy Rubio Cristian Alexis

#include <stdio.h>
#include <time.h> //Se agrega la librería time, para usar ctime
#include <limits.h> //Se agrega la librería limits, para usar INT_MAX

int main(){
	long int t = INT_MAX; //Se crea la variable t y se le da el valor de INT_MAX
	printf("%s\n",ctime(&t));//Se convierte el valor de INT_MAX en segundos con ctime
}