#include <iostream>
using namespace std;

int main()
{
    //1.
    srand(time(NULL)); //semi
    int castigo = 0, i = 0;
    while (i <= 10) {
        castigo = rand() % 2;
        cout << castigo << endl;
        i++;
    }
  //2.
srand(time(NULL));
int castigo = 0;
int vida = 12;
int premio = 0;
cout << "Vida inicial" << vida << endl;
while (vida > 0)
{
    //duducir una vida
    vida--;
    cout << "Costo de ciclo" << vida << endl;
    //castigo?
    castigo = rand() % 2;
    if (castigo == 1)
    {
        vida = vida - 3;
        cout << "castigo" << vida << endl;
    }
    premio = rand() % 2;
    if (premio == 1)
    {
        vida = vida + 3;
        cout << "premio" << vida << endl;
    }
    cout << "vida despues de ciclo" << vida << endl;
}
}
