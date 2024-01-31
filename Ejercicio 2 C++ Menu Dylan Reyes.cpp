#include <iostream>
#include <cstdlib> // Para utilizar la función system

using namespace std;

// Función para verificar si un número es par
bool esPar(int num) {
    return num % 2 == 0;
}

// Función para determinar si un año es bisiesto
bool esBisiesto(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Función para determinar si dos números son iguales
bool sonIguales(int num1, int num2) {
    return num1 == num2;
}

// Función para verificar si una persona es mayor de edad
bool esMayorDeEdad(int edad) {
    return edad >= 18;
}

// Función para evaluar si un estudiante aprobó un examen
bool aproboExamen(int calificacion) {
    return calificacion >= 60;
}

// Función para limpiar la pantalla
void limpiarPantalla() {
    system("cls");
}

int main() {
    int opcion;
    do {
        cout << "--------------MENU-----------------\n";
        cout << "1. Verificar si un numero es par\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "2. Determinar si un anio es bisiesto\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "3. Determinar si dos numeros son iguales\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "4. Verificar si una persona es mayor de edad\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "5. Evaluar si un estudiante aprobo un examen\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "6. Salir\n";
        cout << ".-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.\n";
        cout << "Ingrese la opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                limpiarPantalla();
                int num;
                cout << "Ingrese un numero: ";
                cin >> num;
                if (esPar(num))
                    cout << num << " es par.\n";
                else
                    cout << num << " no es par.\n";
                break;
            case 2:
                limpiarPantalla();
                int year;
                cout << "Ingrese un anio: ";
                cin >> year;
                if (esBisiesto(year))
                    cout << year << " es un anio bisiesto.\n";
                else
                    cout << year << " no es un anio bisiesto.\n";
                break;
            case 3:
                limpiarPantalla();
                int num1, num2;
                cout << "Ingrese dos numeros: ";
                cin >> num1 >> num2;
                if (sonIguales(num1, num2))
                    cout << "Los numeros son iguales.\n";
                else
                    cout << "Los numeros no son iguales.\n";
                break;
            case 4:
                limpiarPantalla();
                int edad;
                cout << "Ingrese su edad: ";
                cin >> edad;
                if (esMayorDeEdad(edad))
                    cout << "Usted es mayor de edad.\n";
                else
                    cout << "Usted es menor de edad.\n";
                break;
            case 5:
                limpiarPantalla();
                int calificacion;
                cout << "Ingrese la calificacion del estudiante: ";
                cin >> calificacion;
                if (aproboExamen(calificacion))
                    cout << "El estudiante aprobo el examen.\n";
                else
                    cout << "El estudiante no aprobo el examen.\n";
                break;
            case 6:
                cout << "Saliendo del programa...\n";
                break;
            default:
                cout << "Opcion invalida. Intente de nuevo.\n";
        }
    } while (opcion != 6);

    return 0;
}

