#include <iostream>
using namespace std;

float valor1 = 0;
float valor2 = 0;

// Declaraci�n de funciones
float suma();
float resta();
float multiplicacion();
float division();

int main()
{
    // Solicitar valores al usuario
    cout << "Ingrese el primer valor: ";
    cin >> valor1;

    cout << "Ingrese el segundo valor: ";
    cin >> valor2;

    // Llamar a las funciones y mostrar resultados
    cout << "Suma: " << suma() << endl;
    cout << "Resta: " << resta() << endl;
    cout << "Multiplicacion: " << multiplicacion() << endl;
    cout << "Division: " << division() << endl;

    return 0;
}

float suma()
{
    // Instrucciones de programaci�n para calcular la suma
    return valor1 + valor2;
}

float resta()
{
    // Instrucciones de programaci�n para calcular la resta
    return valor1 - valor2;
}

float multiplicacion()
{
    // Instrucciones de programaci�n para calcular la multiplicacion
    return valor1 * valor2;
}

float division()
{
    // Instrucciones de programaci�n para calcular la division
    if (valor2 != 0) {
        return valor1 / valor2;
    } else {
        cout << "Error: No se puede dividir por cero." << endl;
        return 0;
    }
}

