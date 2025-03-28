#include "Serie.hpp"


int main(int argc, char const *argv[])
{

Serie serienavidena;

serienavidena.ApagarTodo();
serienavidena.Imprimir();
serienavidena.EncenderTodo();
serienavidena.Imprimir();
serienavidena.ApagarCantidad(8);
serienavidena.Imprimir();
serienavidena.EncenderCantidad(3);
serienavidena.Imprimir();
serienavidena.AlternarEncendido();
serienavidena.Imprimir();
serienavidena.RecorrerDerecha();
serienavidena.Imprimir();
serienavidena.RecorrerIzquierda();
serienavidena.Imprimir();



  return 0;
}

//g++ main.cpp -o programa && ./programa