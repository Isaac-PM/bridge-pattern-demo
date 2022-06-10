#include "Calculadora.h"
#ifndef CALCULADORAAVANZADA_H
#define CALCULADORAAVANZADA_H

class CalculadoraAvanzada : public Calculadora {
  public:
    CalculadoraAvanzada(InterfazCalculadora* = nullptr);
    virtual void control();
    virtual ~CalculadoraAvanzada();

  protected:

  private:
};

#endif // CALCULADORAAVANZADA_H
