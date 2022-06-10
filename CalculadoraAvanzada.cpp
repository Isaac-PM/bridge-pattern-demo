#include "CalculadoraAvanzada.h"

CalculadoraAvanzada::CalculadoraAvanzada(InterfazCalculadora* intc)
    :Calculadora("Avanzado", intc) {
    //ctor
}

void CalculadoraAvanzada::control() {
    system("cls");
    this->interfaz->definirEstilo();
    this->interfaz->definirVentana();
    cout << endl;
    cout << "\n>>> " << this->modelo;
    int opc = 0;
    double x = 0;
    double y = 0;
    cout << "\n>>> Indique los numeros a operar: ";
    cout << "\n\t> N1 = ";
    cin >> x;
    cout << "\t> N2 = ";
    cin >> y;
    cout << "\n>>> Seleccione la operacion a realizar: ";
    cout << "\n\t>(1) Sumar";
    cout << "\n\t>(2) Restar";
    cout << "\n\t>(3) Multiplicar";
    cout << "\n\t>(4) Dividir";
    cout << "\n\t>(5) Exponente (N1^N2)";
    cout << "\n\t>(6) Raiz cuadrada (N1)";
    cout << "\n\t>(-) Indique la opcion: ";
    cin >> opc;
    switch(opc) {
    case 1: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::sumar(x, y);
    }
    break;
    case 2: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::restar(x, y);
    }
    break;
    case 3: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::multiplicar(x, y);
    }
    break;
    case 4: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::dividir(x, y);
    }
    break;
    case 5: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::exponenciar(x, y);
    }
    break;
    case 6: {
        cout << "\n>>> El resultado es: " << CalculadoraAvanzada::raizCuadrada(x);
    }
    break;
    default:
        cout << "\n>>> TERMINADO <<<";
    }
    cout << endl;
    system("pause");
}

CalculadoraAvanzada::~CalculadoraAvanzada()
{
    //dtor
}
