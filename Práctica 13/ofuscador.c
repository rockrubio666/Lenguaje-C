//Monroy Rubio Cristian Alexis

#include <stdio.h>
#define BEGIN  main(){
#define INTEGER int
#define IF if
#define THEN 
#define PRINT printf
#define ELSE else
#define ENDIF 
#define END }

BEGIN //Se define main(){} como BEGIN
	INTEGER x = 10; //Se define int como INTEGER
	IF(x>=10) //Se define IF como if
	THEN //THEN se define como vacio por las llaves que ocupa el if
		PRINT("TENGO DIEZ\n"); //Se define PRINT como printf
	ELSE //Se define ELSE como else
		PRINT("REPROBARE\n"); 
	ENDIF//ENDIF se define como vacio
	
END//END se define como }
