#include "CalculadoraBasica.h"
#include "CalculadoraAvanzada.h"
#include "InterfazOscura.h"
#include "InterfazClara.h"
#include "InterfazContraste.h"

int main()
{
    /*
    Crea caculadoras, las instancias que necesitan de otra interfaz no deben ser creadas,
    Se hace uso de una simple agregaci-n para lograr el objetivo cumplido,
    se crea un puente entre una clase funcional que act-a en conjunto con la otra (Calculadora).

    Interfaz debe ser entendido como una manera de mostrar las cosas.
    */

    CalculadoraBasica *cBasOsc = new CalculadoraBasica(new InterfazOscura());
    cBasOsc->control();
    CalculadoraBasica *cBasCla = new CalculadoraBasica(new InterfazClara());
    cBasCla->control();
    CalculadoraBasica *cBasCon = new CalculadoraBasica(new InterfazContraste());
    cBasCon->control();

    CalculadoraAvanzada *cAvaOsc = new CalculadoraAvanzada(new InterfazOscura());
    cAvaOsc->control();
    CalculadoraAvanzada *cAvaCla = new CalculadoraAvanzada(new InterfazClara());
    cAvaCla->control();
    CalculadoraAvanzada *cAvaCon = new CalculadoraAvanzada(new InterfazContraste());
    cAvaCon->control();
    cout << endl;
    // Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0): Isaac Fabi-n Palma Medina
    return 0;
}
