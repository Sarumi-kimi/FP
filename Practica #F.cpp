#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	//0.
	for (int i = 0; i <= 9; i++)
	{
		cout << i << ","; 
    }
	cout << endl;

	//1.
	for (int i = 9; i >= 0; i--)
	{
		cout << i << ",";
	}
	cout << endl;

	//2.
	for (int i = 0; i <= 99; i++)
	{
		cout << i << ",";
	}
	cout << endl;

	//3.
	cout << "Dame un numero: " << numero; 
	for (int i = 2; i <= 100; i++)
	{
		cout << endl;
		if (i % 2 == 0)
		{
			cout << i << ",";
		}
		cout >> endl;
	}

	//4.
	int minimo, maximo;
	cout << "Dame el minimo: ";
	cin >> minimo;
	cout << "Dame el maximo:";
	cin >> maximo;
	for (int i = minimo; i <= maximo; i++)
	{
		cout << i << ",";
	}
	cout << endl;

	//5.
	int minimo, maximo;
	cout << "Dame el minimo: ";
	cin >> minimo;
	cout << "Dame el maximo:";
	cin >> maximo;
	for (int i = maximo; i >= minimo; i--)
	{
		cout << i << ",";
	}
	cout << endl;
}
