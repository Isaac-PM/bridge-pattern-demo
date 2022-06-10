#include "InterfazOscura.h"

InterfazOscura::InterfazOscura() {
    //dtor
}

void InterfazOscura::definirEstilo() {
    system("color 8F"); // Fondo, texto.
}

void InterfazOscura::definirVentana() {
    cout << "\n +-+-+-+-+-+-+-+-+-+-+-+";
    cout << "\n |C|a|l|c|u|l|a|d|o|r|a|";
    cout << "\n +-+-+-+-+-+-+-+-+-+-+-+\n";
    cout << "\n(Interfaz tipo oscura)";
}

InterfazOscura::~InterfazOscura() {
    //dtor
}

// Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0): Isaac Fabi-n Palma Medina
