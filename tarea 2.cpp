#include <iostream>
#include <cmath> 
using namespace std;

int main() 
{
 
    int op1, op2, op3, op4, op5;

    // Primer operación: 3 + 5 * 2 / 2 – 1
    op1 = 3 + 5 * 2 / 2 - 1;
    cout << "Resultado de 3 + 5 * 2 / 2 - 1: " << op1 << endl;

    // Segunda operación: 3 + 10 / 2 – 1
    op2 = 3 + 10 / 2 - 1;
    cout << "Resultado de 3 + 10 / 2 - 1: " << op2 << endl;

    // Tercera operación: 3 + 5 – 1
    op3 = 3 + 5 - 1;
    cout << "Resultado de 3 + 5 - 1: " << op3 << endl;

    // Cuarta operación: 8 – 1
    op4 = 8 - 1;
    cout << "Resultado de 8 - 1: " << op4 << endl;

    // Quinta operación: 1/3*3
    op5 = 1 / 3 * 3;
    cout << "Resultado de 1 / 3 * 3: " << op5 << endl;

    int numero, potencia

    // Solicitar al usuario que ingrese un número
    cout << "Ingrese un número: ";
    cin >> numero;

    // Calcular la potencia (cuadrado) del número
    potencia = numero * numero;

    // Mostrar el resultado
    cout << "La potencia de " << numero << " es " << potencia << endl;

    double yardas, metros;
    const double conversion = 0.9144; 

    // Solicitar al usuario que ingrese el número de yardas
    cout << "Ingrese las yardas: ";
    cin >> yardas;

    // Convertir las yardas a metros
    metros = yardas * conversion;

    // Mostrar el resultado
    cout << "Número en metros: " << metros << endl;

    double valor_original = 200000;   
    double porcentaje_depreciacion = 0.80; 
    double valor_depreciable = valor_original * porcentaje_depreciacion;
    double depreciacion_anual = valor_depreciable / 5; 

    // Imprimir el valor de la depreciación por cada uno de los cinco años
    for (int i = 1; i <= 5; i++) {
        cout << "Año " << i << ": La deducción por depreciación es de " << depreciacion_anual << " pesos." << endl;

        double salario_mensual = 25000; 
        double impuesto_fijo = 900; 
        double porcentaje_adicional = 0.015;

        double deduccion_adicional = (salario_mensual - impuesto_fijo) * porcentaje_adicional;
        double impuesto_total = impuesto_fijo + deduccion_adicional;
        double sueldo_neto = salario_mensual - impuesto_total;
        cout << "El impuesto total a deducir es: " << impuesto_total << " pesos." << endl;
        cout << "El sueldo neto que recibirá el empleado es: " << sueldo_neto << " pesos." << endl;

        // Operación 1: 3 * 4
        int resultado1 = 3 * 4;
        cout << "Resultado de 3 * 4: " << resultado1 << endl;

        // Operación 2: 12 / 3
        int resultado2 = 12 / 3;
        cout << "Resultado de 12 / 3: " << resultado2 << endl;

        // Operación 3: 12 % 3 
        int resultado3 = 12 % 3;
        cout << "Resultado de 12 % 3: " << resultado3 << endl;

        // Operación 4: 12 % 7 
        int resultado4 = 12 % 7;
        cout << "Resultado de 12 % 7: " << resultado4 << endl;

        // Operación 5: 3 + 3.0 
        double resultado5 = 3 + 3.0;
        cout << "Resultado de 3 + 3.0: " << resultado5 << endl;

        // Operación 6: 10 / 100 
        double resultado6 = 10.0 / 100;
        cout << "Resultado de 10 / 100: " << resultado6 << endl;

        // Operación 7: Potencia de 3 a la 2 usando pow
        double resultado7 = pow(3, 2);
        cout << "Resultado de 3^2 usando pow: " << resultado7 << endl;

        int a = 10;
        int b = 20;

        // 1. (a > b)
        cout << "(a > b): " << (a > b) << endl;

        // 2. (a < b)
        cout << "(a < b): " << (a < b) << endl;

        // 3. (a == b)
        cout << "(a == b): " << (a == b) << endl;

        // 4. (a != b)
        cout << "(a != b): " << (a != b) << endl;

        // 5. (a + b) > 100
        cout << "((a + b) > 100): " << ((a + b) > 100) << endl;

        // 6. (a - b) == 0
        cout << "((a - b) == 0): " << ((a - b) == 0) << endl;

        // 7. (a * b) > 500
        cout << "((a * b) > 500): " << ((a * b) > 500) << endl;

        // 8. (a * b) < 100
        cout << "((a * b) < 100): " << ((a * b) < 100) << endl;

        // 9. (a - b) < 0
        cout << "((a - b) < 0): " << ((a - b) < 0) << endl;

        // 10. a < 20
        cout << "(a < 20): " << (a < 20) << endl;
    }

    return 0;
}
