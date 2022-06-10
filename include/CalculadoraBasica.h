#include "Calculadora.h"
#ifndef CALCULADORABASICA_H
#define CALCULADORABASICA_H

class CalculadoraBasica : Calculadora {
  public:
    CalculadoraBasica(InterfazCalculadora* = nullptr);
    virtual void control();
    virtual ~CalculadoraBasica();

  protected:

  private:
};

#endif // CALCULADORABASICA_H
