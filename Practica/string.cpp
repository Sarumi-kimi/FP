#include <iomanip>
#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

using namespace std;

int main() 
{
    // EJERCICIO 4
   //introducir una linea completa de texto (string)
   //cin.ignore(); // ignora la instruccion cin, cuando hay "cin >>" anteriores a esta linea de codigo 
    string nombreCompleto;
    cout << "introduce tu nombre completo: ";
    getline(cin, nombreCompleto); //obtiene una linea completa de texto
    cout << "tu  nombre completo: " << nombreCompleto << endl;

    //EJERCICIO 5
    // de que tamaño es un string
    cout << "la longitud del texto es : " << nombreCompleto.length() << endl;

    //EJERCICIO 6
    //Como acceder un  caracter especifico de un texto (string)
    // [] = Operador indice 
    cout << "el primer caracter de nombre completo es: " << nombreCompleto[0] << endl;

    //EJERCICIO 7
    // cambiar un caracter especifico de un texto (string)
    string cambio = "hola";
    cambio[0] = 'h';
    cout << "cambiar H por h: " << cambio << endl;

    //EJERCICIO 8 
    // convertir un string a MAYUSCULAS
    string textoMinusculas = "texto a convertir";
    transform(textoMinusculas.begin(), textoMinusculas.end(), textoMinusculas.begin(), ::toupper);
    cout << "Texto en MAYUSCULAS: " << textoMinusculas << endl; 

    //EJERCICIO 9
    //Convertit un string a minisculas
    string textoMayusculas = "TEXTO A CONVERTIR";
    transform(textoMayusculas.begin(), textoMayusculas.end(), textoMayusculas.begin(), ::tolower);
    cout << "texto en  minisculas: " << textoMayusculas << endl;

    //EJERCICIO 10
    //insertar un texto dentro de otro texto
    string textoPrincipal = "Jose, ";
    textoPrincipal.insert(6, "Luis");
    cout << "Insertar texto dentro de otro: " << textoPrincipal <<  endl;

    //EJERCICIO 11
    // revertir un texto
    string textoRevertir = "Hola, mundo";
    reverse(textoRevertir.begin(), textoRevertir.end());
    cout << "texto revertido: " << textoRevertir << endl;

    //EJERCICIO 12
    // convertir un numero a un string
    int n1 = 123;
    string numeroAtexto = to_string(n1);
    cout << "Numero como string: " << numeroAtexto << endl;

    //EJERCICIO 13
    // convertir un string a numero
    string textoAnumero = "123";
    int n2 = stoi(textoAnumero);
    cout << "string como numero: " << n2 << endl;
   
    return 0;
}
 
