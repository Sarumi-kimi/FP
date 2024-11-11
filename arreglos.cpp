#include <iostream>
using namespace std;
//ARREGLOS DE UNA DIMENSION 
int main()
{
    const int TAMANO = 10;
    int naturales[TAMANO] {0,1,2,3,4,5,6,7,8,9};
    for (int i = 0; i < TAMANO; i++) //primera forma de imprimir
    {
        cout << naturales[i] << endl; 
    }

    for (int elemento : naturales) //segunda forma de imprimir 
    {
        cout << elemento << endl; 
    }



    /*cout << naturales[0] << endl;
    naturales[0] = -1000;
    cout << naturales[0] << endl;*/
    //[] operador de indice (va el indice)
    //{} conjunto de datos separados por comas, sirve para inicializar arreglos
    
}
