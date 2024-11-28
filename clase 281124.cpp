#include <iostream>
using namespace std; 

//Funciones
void hola()
{
    cout << "Hola mundo";
}
void suma()
{
    int n1, n2;
    cout << "No. 1:";
    cin >> n1;
    cout << "No. 2:";
    cin >> n2;
    cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion
int main() //punto de entrada
{
    //hola(); // Esto es Invocar o llamar la funcion
    suma();
}

#include <iostream>
using namespace std; 

//Variables globales: fuera de la funcion main
int n1, n2;
//Funciones
void hola()
{
    cout << "Hola mundo";
}
void suma(int n1, int n2) 
{
  //suma con parametros
    cout << n1 + n2 << endl; //variable local
}
//No puedo definir funciones dentro de otra funcion
int main() //punto de entrada
{
    //hola(); // Esto es Invocar o llamar la funcion
    suma();
}

//CALCULADORA CLASE PRACTICA K
#include <iostream>
using namespace std; 

//Variables globales: fuera de la funcion main
int n1, n2;
//Funciones
void pedirNumeros()
{
    cout << "Dame el numero 1:";
    cin >> n1;
    cout << "Dame el numero 2:";
    cin >> n2;
}
void suma(int n1, int n2) 
{
  //suma con parametros
    cout << n1 + n2 << endl;
}
//No puedo definir funciones dentro de otra funcion
int main() //punto de entrada
{
    pedirNumeros();
    suma(n1, n2); //Argumentos
}
