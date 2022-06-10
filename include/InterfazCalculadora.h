#include<bits/stdc++.h>
#include <sstream>
using namespace std;

#ifndef INTERFAZCALCULADORA_H
#define INTERFAZCALCULADORA_H

class InterfazCalculadora {
  public:
    InterfazCalculadora();
    virtual void definirEstilo() = 0;
    virtual void definirVentana() = 0;
    virtual ~InterfazCalculadora();

  protected:

  private:
};

#endif // INTERFAZCALCULADORA_H
