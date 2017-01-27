//Monroy Rubio Cristian Alexis
#include <sqlite3.h>
#include <stdio.h>

int main(int argc, char*argv[]){
	sqlite3 *db; //Crea una variable de tipo sqlite3
	char*err_msg = 0; //Crea un puntero de tipo char
	int rc = sqlite3_open("becarios.db",&db); //Abre la BD becarios
	
	if(rc!= SQLITE_OK){ //Si no se inicia la BD de forma correcta, envía un error
		fprintf(stderr,"No se puede entrar a la BD %s\n",sqlite3_errmsg(db));
		sqlite3_close(db); //Y Cierra la BD
		
		return 1;
	}
	
	char *sql = "DROP TABLE IF EXISTS Becarios;" //De lo contrario, crea la tabla y llena los valores
				"CREATE TABLE Becarios(Nombre TEXT, Edad INT, Promedio FLOAT, Procedencia TEXT, Generacion INT, Proyecto TEXT);"
				"INSERT INTO Becarios VALUES('Gonzalo',25,9.5,'Ciencias',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Fer',22,9.7,'FI',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Ángel',35,9.3,'SB',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Anota',22,9.9,'Poli',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Erik',23,9.7,'Poli',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Omar',22,9.2,'FES Cuau',11,'CON PROYECTO');"
				"INSERT INTO Becarios VALUES('Tutankas',100,8.0,'Egipto',11,'SIN PROYECTO');"
				"INSERT INTO Becarios VALUES('Munra',150,8.1,'El más allá',11,'SIN PROYECTO');";
	
	rc = sqlite3_exec(db,sql,0,0,&err_msg); //Ejecuta la BD, la tabla y el mensaje
	if(rc != SQLITE_OK){
		fprintf(stderr, "SQL error: %s\n", err_msg);
		sqlite3_free(err_msg);
	}else{
		fprintf(stdout,"DB creada correctamente\n");
	}	
		sqlite3_close(db);
		return 0;
}				
