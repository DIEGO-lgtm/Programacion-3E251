#include "Serie.hpp"
#include <ftxui/screen/screen.hpp>
#include <ftxui/dom/elements.hpp>
#include <iostream>
using namespace std;
using namespace ftxui;

int main(int argc, char const *argv[])
{
  auto pantalla = Screen::Create(
    ftxui::Dimension::Full(),
    Dimension::Full()

  );

  auto documento = vbox(
    spinner(21,1)
  );

  Render(pantalla, documento);
  pantalla.Print();


}

//g++ main.cpp -o programa && ./programa
//c++ main.cpp -o programa -lftxui-component -lftxui-dom -lftxui-screen -std=c++17
