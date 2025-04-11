#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Persona
{
  char nombre[20];
  int edad;
};

int main(int argc, char const*argv[])
{
  //Abrir el archivo para escrotura
  ofstream archivo("binaario.bin", ios::binary);
    if(!archivo.is_open())
    {
      cout << "Error al abrir el archivo de escritura" << endl;
      return 1;
    }
    cout << "Escribiendo en el archivo binario..." << endl;
    Persona p1 = {"Juan", 30};
    Persona p2 = {"Maria", 25};
    Persona p3 = {"Pedro", 40};

    archivo.write(reinterpret_cast<char*>(&p1), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p2), sizeof(Persona));
    archivo.write(reinterpret_cast<char*>(&p3), sizeof(Persona));

    archivo.close();

    //Abrir el archivo para lectura

    ifstream archivoLectura("binaario.bin", ios::binary);
    if(!archivoLectura.is_open())
    {
      cout << "Error al abrir el archivo de lectura" << endl;
      return 1;
    }
    cout << "Leyendo del archivo binario..." << endl;
    Persona p; //Variable temproal para guardar el dato leido
    while(archivoLectura.read(reinterpret_cast<char*>(&p),sizeof(Persona)))
    {
      cout << "Nombre: " << p.nombre << ", Edad: " << p.edad << endl;
    }
    archivoLectura.close();
  return 0;
  
}