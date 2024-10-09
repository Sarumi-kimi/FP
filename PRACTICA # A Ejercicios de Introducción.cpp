#include <iostream>
#include <string>
#include <cmath>

int main()
{
    //Materias que estoy cursando
        int numeroDeMaterias = 5; 
        std::cout << "Número de materias que estoy cursando: " << numeroDeMaterias << std::endl;

    // Cuatrimestre que estoy cursando
        int cuatrimestre = 7; 
        std::cout << "Cuatrimestre que estoy cursando: " << cuatrimestre << std::endl;

    //Materia
        std::string materia = "Programacion"; 
        std::cout << "Materia: " << materia << std::endl;

    //Numero de cuenta
        std::string cuenta = "335010224"; 
        std::cout << "Número de cuenta: " << cuenta << std::endl;

    //Mi nombre
        std::string nombre = "Kimi Sarumi"; 
        std::cout << "Nombre: " << nombre << std::endl;

    //Apellido Paterno
        std::string apellidoPaterno = "Rosas";
        std::cout << "Apellido Paterno: " << apellidoPaterno << std::endl;

   //Apellido Materno
        std::string apellidoMaterno = "Soto";
        std::cout << "Apellido Materno: " << apellidoMaterno << std::endl;

    //Celular
        long celular = 5610858525;
        std::cout << "Número de celular: " << celular << std::endl;

    //Numero de casa
        long casa = 76751876; 
        std::cout << "Número de casa: " << casa << std::endl;

    //Correo
        std::string correoQueMasUso = "sarumikimi1502@gmail.com";  
        std::cout << "Correo que más uso: " << correoQueMasUso << std::endl;

    //Correo UNITEC
        std::string correoMyUnitec = "kimi.rosas35@my.unitec.edu.mx";  
        std::cout << "Correo MyUnitec: " << correoMyUnitec << std::endl;

    //Carrera
        std::string carrera = "Animación Digital";  
        std::cout << "Carrera: " << carrera << std::endl;

    //Blackboard
        bool blackboard = true; 
        std::cout << "¿Has usado Blackboard?: " << (blackboard ? "Sí" : "No") << std::endl;


        // Ejercicio 1: El identificador no puede comenzar con un número
        int numero1 = 5;
        std::cout << "Ejercicio 1: " << numero1 << std::endl;

        // Ejercicio 2: Los identificadores no pueden contener caracteres especiales como '@'
        float valor = 3.14;
        std::cout << "Ejercicio 2: " << valor << std::endl;

        // Ejercicio 3: 'double' es una palabra reservada, no puede usarse como nombre de variable
        double gravedad = 9.81;
        std::cout << "Ejercicio 3: " << gravedad << std::endl;

        // Ejercicio 4: Un valor de tipo 'char' solo puede almacenar un carácter
        char letra = 'A'; 
        std::cout << "Ejercicio 4: " << letra << std::endl;

        // Ejercicio 5: Los valores booleanos son true o false, no cadenas de texto
        bool esVerdadero = true;
        std::cout << "Ejercicio 5: " << (esVerdadero ? "True" : "False") << std::endl;

        // Ejercicio 6: Un entero no puede almacenar un valor decimal
        float numero = 10.5;
        std::cout << "Ejercicio 6: " << numero << std::endl;

        // Ejercicio 7: Los valores string deben ir entre comillas dobles
        std::string nombre = "Juan";
        std::cout << "Ejercicio 7: " << nombre << std::endl;

        // Ejercicio 8: 'PI' es una constante, pero no puede ser asignada con un valor decimal como 3.14 en 'int'
        const float PI = 3.14;
        std::cout << "Ejercicio 8: " << PI << std::endl;

        // Ejercicio 9: El operador '+' no puede estar sin un número a la derecha
        int suma = 5 + 3;  
        std::cout << "Ejercicio 9: " << suma << std::endl;

        // Ejercicio 10: La asignación está bien, pero falta un punto y coma después de la asignación
        int numero;
        numero = 10;
        std::cout << "Ejercicio 10: " << numero << std::endl;

        // Ejercicio 11: El valor asignado a una variable tipo 'int' debe ser un número, no una cadena
        int numero = 10;  
        std::cout << "Ejercicio 11: " << numero << std::endl;

        // Ejercicio 12: El valor 1.75 debe asignarse correctamente en una variable float
        float altura = 1.75;
        std::cout << "Ejercicio 12: " << altura << std::endl;

        // Ejercicio 13: Un valor 'char' solo puede almacenar un carácter, no una cadena
        char inicial = 'J'; 
        std::cout << "Ejercicio 13: " << inicial << std::endl;

        // Ejercicio 14: El valor booleano puede ser 'true' o 'false', no '1'
        bool esMayor = true;
        std::cout << "Ejercicio 14: " << (esMayor ? "true" : "false") << std::endl;

        // Ejercicio 15: Las cadenas deben ir entre comillas dobles
        std::string apellido = "Juan";
        std::cout << "Ejercicio 15: " << apellido << std::endl;

        // Ejercicio 16: Falta un número después del operador '*'
        int resultado = 5 * 2; 
        std::cout << "Ejercicio 16: " << resultado << std::endl;

        // Ejercicio 17: El operador '^' no es para potenciación, se debe usar 'pow()' de la biblioteca <cmath>
        double radio = 3.0;
        double area = PI * pow(radio, 2);
        std::cout << "Ejercicio 17: " << area << std::endl;

        // Ejercicio 18: Falta el punto y coma al final
        int edad = 25;
        std::cout << "Ejercicio 18: " << edad << std::endl;

        // Ejercicio 19: Se puede usar 'f' para indicar que es un valor float
        float peso = 70.5f;
        std::cout << "Ejercicio 19: " << peso << std::endl;

        // Ejercicio 20: Solo falta el punto y coma
        int suma = 10 + 20;
        std::cout << "Ejercicio 20: " << suma << std::endl;
        return 0;
    }
