#include "InterfazCalculadora.h"

#ifndef CALCULADORA_H
#define CALCULADORA_H

class Calculadora {
  public:
    Calculadora(string = "Casio fx-570LA X", InterfazCalculadora* = nullptr);
    string getModelo();
    virtual void control() = 0;
    virtual ~Calculadora();

  protected:
    double sumar(double, double);
    double restar(double, double);
    double multiplicar(double, double);
    double dividir(double, double);
    double exponenciar(double, double);
    double raizCuadrada(double);
    string modelo;
    InterfazCalculadora* interfaz; // Funciona m-s como una serie de par-metros para el control.

  private:
};

// Attribution-ShareAlike 2.0 Generic (CC BY-SA 2.0): Isaac Fabi-n Palma Medina

#endif // CALCULADORA_H
