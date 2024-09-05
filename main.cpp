#include <iostream>
#include <cstdlib>
#include <cstring> // Para strcpy y strcat

struct Articulo {
    char titulo[50];
    char fecha[50];
    char directorio[50];
};

int main(int argc, char *argv[]) {
    Articulo articulos[5]; // arreglo con espacio hasta 5 elementos

    // Asignar valores a los elementos del arreglo
    strcpy(articulos[0].titulo, "Inteligencia Artificial");
    strcpy(articulos[0].fecha, "04/09/2024");
    strcpy(articulos[0].directorio, "ia1.pdf");

    strcpy(articulos[1].titulo, "Inteligencia Artificial 2");
    strcpy(articulos[1].fecha, "05/09/2024");
    strcpy(articulos[1].directorio, "ia2.pdf");

    // Acceder a los elementos del arreglo
    for (int i = 0; i < 2; i++) {
        std::cout << "Nombre: " << articulos[i].titulo << std::endl;
        std::cout << "Fecha: " << articulos[i].fecha << std::endl;
        std::cout << "Directorio: " << articulos[i].directorio << std::endl;
    }

    // Concatenar la ruta del archivo
    char comando[100] = "start articulos/";
    strcat(comando, articulos[0].directorio);

    // Ejecutar el archivo PDF
    system(comando); // En Windows

    return 0;
}

