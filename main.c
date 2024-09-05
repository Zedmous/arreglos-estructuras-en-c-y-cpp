#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Para strcpy

struct Articulo {
    char titulo[50];
    char fecha[50];
    char directorio[50];
};

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct Articulo articulos[5];//arreglo con espacio hasta 5 elementos

    // Asignar valores a los elementos del arreglo
    strcpy(articulos[0].titulo, "Inteligencia Artificial");
	strcpy(articulos[0].fecha, "04/09/2024");
	strcpy(articulos[0].directorio, "ia1.pdf");

	strcpy(articulos[1].titulo, "Inteligencia Artificial 2");
	strcpy(articulos[1].fecha, "05/09/2024");
	strcpy(articulos[1].directorio, "ia2.pdf");
	int i = 0;
    // Acceder a los elementos del arreglo
    for (i=0; i < 2; i++) {
        printf("Nombre: %s\n", articulos[i].titulo);
		printf("Fecha: %s\n", articulos[i].fecha);
		printf("Directorio: %s\n", articulos[i].directorio);
    }
    // Concatenar la ruta del archivo
    char comando[100] = "start articulos/";
    strcat(comando, articulos[0].directorio);

    // Ejecutar el archivo PDF
    system(comando); // En Windows
	return 0;
}
