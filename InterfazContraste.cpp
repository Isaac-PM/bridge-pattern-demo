#include "InterfazContraste.h"

InterfazContraste::InterfazContraste() {
    //ctor
}

void InterfazContraste::definirEstilo() {
    system("color E4"); // Fondo, texto.
}

void InterfazContraste::definirVentana() {
    cout << "\n  _                        ";
    cout << "\n / `_  /_     /_   _/_  __ ";
    cout << "\n/_,/_|//_ /_///_|/_//_///_|\n";
    cout << "\n(Interfaz tipo contraste)";
}

InterfazContraste::~InterfazContraste() {
    //dtor
}

// Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0): Isaac Fabi-n Palma Medina
