#include <iostream>
#include <string>
#include <fstream>
using namespace std;

#include <fstream> // Asegúrate de incluir la librería

int main(int argc, const char** argv) {
    std::ifstream archivoLectura("nombre_del_archivo.txt"); // Declara y abre el archivo

    if (!archivoLectura.is_open()) {
        std::cerr << "No se pudo abrir el archivo!" << std::endl;
        return 1;
    }

    std::string linea;
    while (getline(archivoLectura, linea)) {
        std::cout << linea << std::endl;
    }

    archivoLectura.close(); // Cierra el archivo
    return 0;
}
