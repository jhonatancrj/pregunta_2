#include <iostream>

using namespace std;

// Función para sumar dos números
void sumar(int *a, int *b, int *resultado) {
    *resultado = *a + *b;
}

// Función para restar dos números
void restar(int *a, int *b, int *resultado) {
    *resultado = *a - *b;
}

// Función para multiplicar dos números usando sumas
void multiplicar(int *a, int *b, int *resultado) {
    *resultado = 0;
    for (int i = 0; i < *b; i++) {
        *resultado += *a;
    }
}

// Función para dividir dos números usando restas
void dividir(int *a, int *b, int *resultado) {
    *resultado = 0;
    int dividendo = *a;
    int divisor = *b;
    
    while (dividendo >= divisor) {
        dividendo -= divisor;
        (*resultado)++;
    }
}

int main() {
    int num1 = 10;
    int num2 = 2;
    int resultado;

    // Suma
    sumar(&num1, &num2, &resultado);
    cout << "Suma: " << num1 << " + " << num2 << " = " << resultado << endl;

    // Resta
    restar(&num1, &num2, &resultado);
    cout << "Resta: " << num1 << " - " << num2 << " = " << resultado << endl;

    // Multiplicación
    multiplicar(&num1, &num2, &resultado);
    cout << "Multiplicación: " << num1 << " * " << num2 << " = " << resultado << endl;

    // División
    dividir(&num1, &num2, &resultado);
    cout << "División: " << num1 << " / " << num2 << " = " << resultado << endl;

    return 0;
}
