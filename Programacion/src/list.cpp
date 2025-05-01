#include <iostream>
#include <fstream>
#include <string>
#include <list>
using namespace std;

class Persona{
    private:
    string nombre;
    string edad;
    public:
    Persona(string nombre, int edad){
        this -> nombre = nombre;
        this -> edad = edad;

    }
};
 int main(int argc, char const *argv[])
{
    list<string> nombres;
     nombres.push_back("pedrito");
     nombres.push_back("pedrito");
     nombres.push_back("pedrito");
     nombres.push_back("pedrito");


     list<string> edades;
     nombres.push_back("15");
     nombres.push_back("23");
     nombres.push_back("45");
     nombres.push_back("12");


     list<Persona> personas;
     
     for (auto it = nombres.begin(); it != nombres.end(); it++)
     {
     personas.push_back(Persona(
     *it,
     5
     ));

 
     }
    return 0;
}
  