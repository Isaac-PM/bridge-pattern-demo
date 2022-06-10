#include "InterfazCalculadora.h"
#ifndef INTERFAZCONTRASTE_H
#define INTERFAZCONTRASTE_H

class InterfazContraste : public InterfazCalculadora {
  public:
    InterfazContraste();
    virtual void definirEstilo();
    virtual void definirVentana();
    virtual ~InterfazContraste();

  protected:

  private:
};

#endif // INTERFAZCONTRASTE_H
