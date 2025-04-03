#include <iostream>
#include "Foco.hpp"

class Serie
{
private:
    Foco foquitos[10];

public:
    Serie(){}
    ~Serie(){}
    void EncenderTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Encender();
        }
    }
    void ApagarTodo(){
        for (auto &&foco : foquitos)
        {
            foco.Apagar();
        }
    }
    void EncenderCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Encender();
        }
    }
    void ApagarCantidad(int cantidad){
        for (size_t i = 0; i < cantidad; i++)
        {
            foquitos[i].Apagar();
        }
    }
    void RecorrerDerecha()
    {
        Foco ultimo = foquitos[9];
        for (int i = 9; i > 0; i--)
        {
            foquitos[i] = foquitos[i - 1];
        }
        foquitos[0] = ultimo;
    }
    void RecorrerIzquierda()
    {
        Foco primero = foquitos[0];
        for (int i = 0; i < 9; i++)
        {
            foquitos[i] = foquitos[i + 1];
        }
        foquitos[9] = primero;
    }
    void AlternarEncendido()
    {
        for (auto &&foco : foquitos)
        {
            foco.Alternar();
        }
    }
    void Imprimir(){
        for (auto &&foco : foquitos)
        {
            foco.Imprimir();
        }
        std::cout<<std::endl;
    }
};