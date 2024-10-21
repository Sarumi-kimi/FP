#include <iostream>
using namespace std; 
//```C++ 

int main()
{
    //1.
    int n1, n2;
    cout << "n1 : ";
    cin >> n1;
    cout << endl;
    cout << "n2 : ";
    cin >> n2;
    cout << endl;
    if (n1 > n2)
    {
        cout << "n1 :" <<
            n1 << endl;
    }
    else
    {
        cout << "n2 :" <<
            n2 << endl;
    }
    //2.
    int edad; 
    cout << "dame tu edad: ";
    cin >> edad;
    cout << endl; 
    if (edad >= 18)
    {
        cout << "mayor de edad " << endl; 
    }
    else
    {
        cout << "menor de edad" << endl; 
          //3.
    int temp;
    cout << "dame la temperatura: ";
    cin >> temp;
    cout << endl; 
    if (temp < 10)
    {
        cout << "Hace mucho frio" << endl;
    }
    if (temp >= 10 and temp <= 17)
    {
        cout << "frio" << endl;
   }
    if (temp > 17)
    {
        cout << "templado" << endl; 
   }
      //4.
char voto = ' ';
cout << "A favor s/n : ";
cin >> voto; 
if (voto == 's' or voto == 'n' or voto == 'S' or voto == 'N')
{
    cout << "Voto valido" << endl; 
}
else
{
    cout << "Voto invalido" << endl;
}
       //5.
 int horasTrabajadas = 0;
 cout << "Horas trabajadas : ";
 cin >> horasTrabajadas;
 cout << endl; 
 int horasBono = horasTrabajadas - 40;
 if (horasBono > 0)
 {
     horasBono = horasBono * 75; 
     cout << "Bono " << horasBono;
 }
} 
