#include <iomanip>

int main() {
    // Manejo de punto decimal y separador de miles
    locale loc("");
    cout.imbue(loc);

    //Declaracion e impresion de stringe
    string texto0 = "Hola Mundo";
    cout << texto0 << endl;

    //Unir dos textos en uno
    string primerTexto = "hola";
    string segundoTexto = "Mundo";
    string textoUnido = primerTexto + segundoTexto;
    cout << textoUnido << endl; 
    // Introducir un valor en una variable de texto(string) usando teclado
    string nombre;
    cout << "introduce tu nombre: ";
    cin >> nombre;
    cout << "Hola" << nombre << "!" << endl; 
    return 0;
}
