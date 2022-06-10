#include "InterfazCalculadora.h"
#ifndef INTERFAZCLARA_H
#define INTERFAZCLARA_H

class InterfazClara : public InterfazCalculadora {
  public:
    InterfazClara();
    virtual void definirEstilo();
    virtual void definirVentana();
    virtual ~InterfazClara();

  protected:

  private:
};

#endif // INTERFAZCLARA_H
