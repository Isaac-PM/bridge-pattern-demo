#include "Calculadora.h"

Calculadora::Calculadora(string mod, InterfazCalculadora* intc) {
    this->modelo = mod;
    this->interfaz = intc;
}

string Calculadora::getModelo() {
    return this->modelo;
}

double Calculadora::sumar(double x, double y) {
    return (x + y);
}

double Calculadora::restar(double x, double y) {
    return (x - y);
}

double Calculadora::multiplicar(double x, double y) {
    return (x * y);
}

double Calculadora::dividir(double x, double y) {
    if (y != 0) {
        return (x / y);
    }
    return -1;
}

double Calculadora::exponenciar(double x, double y) {
    if (x >= 0) {
        return (pow(x, y));
    }
    return -1;
}

double Calculadora::raizCuadrada(double x) {
    return sqrt(x);
}

Calculadora::~Calculadora() {
    //dtor
}
