#include "InterfazClara.h"

InterfazClara::InterfazClara() {
    //ctor
}

void InterfazClara::definirEstilo() {
    system("color F0"); // Fondo, texto.
}

void InterfazClara::definirVentana() {
    cout << "\n             _             _                         ";
    cout << "\n  __  __,   //  __        // __,   __/   _,_ ,_  __, ";
    cout << "\n_(_,_(_/(__(/__(_,__(_/__(/_(_/(__(_/(__(_/_/ (_(_/(_\n";
    cout << "\n(Interfaz tipo clara)";
}

InterfazClara::~InterfazClara() {
    //dtor
}

// Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0): Isaac Fabi-n Palma Medina
