#include "InterfazCalculadora.h"
#ifndef INTERFAZOSCURA_H
#define INTERFAZOSCURA_H

class InterfazOscura : public InterfazCalculadora {
  public:
    InterfazOscura();
    virtual void definirEstilo();
    virtual void definirVentana();
    virtual ~InterfazOscura();

  protected:

  private:
};

#endif // INTERFAZOSCURA_H
