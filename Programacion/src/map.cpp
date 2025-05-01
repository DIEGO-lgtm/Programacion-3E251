#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

enum class TipoPokemon {
    PLANTA,
    FUEGO,
    AGUA,
    ELECTRICO,
    HIELO,
    ROCA,
    VOLADOR,
    VENENO,
    PSIQUICO,
    NORMAL
};


class Pokemon{
    private:
    string nombre;
    int ataque;
    TipoPokemon tipo;
    public:
    Pokemon(string nombre, int ataque, TipoPokemon tipo){
        this -> nombre = nombre;
        this -> ataque = ataque;
        this -> tipo = tipo;

    }
};

int main(int argc, char const *argv[])
{
    map<int, Pokemon > pokedex;
    pokedex[1] = Pokemon("Bulbasaur", 1, TipoPokemon::PLANTA);
    pokedex[2] = Pokemon("Charmander", 2, TipoPokemon::FUEGO);
    pokedex[3] = Pokemon("Squirtle", 3, TipoPokemon::AGUA);
    pokedex[4] = Pokemon("Pikachu", 4, TipoPokemon::ELECTRICO);
    pokedex[5] = Pokemon("Glaceon", 5, TipoPokemon::HIELO);
    pokedex[6] = Pokemon("Onix", 6, TipoPokemon::ROCA);
    pokedex[7] = Pokemon("Pidgey", 7, TipoPokemon::VOLADOR);
    pokedex[8] = Pokemon("Ekans", 8, TipoPokemon::VENENO);
    pokedex[9] = Pokemon("Alakazam", 9, TipoPokemon::PSIQUICO);
    pokedex[10] = Pokemon("Snorlax", 10, TipoPokemon::NORMAL);
    

    map<string, string> diccionario;
    diccionario["Programa"]="Serie de elementos organizados blablabla";
    diccionario["aleatorio"]="Que depende del azar o de la casualidad";
  
   
}