#include <iostream>
using namespace std;
//clase, se declaran fuera de cualquier funcion
class Enemigo
{
public:
	string tipo;
	int vida;
	int potencia;
	//constructor enemigo
	Enemigo(string tipo1, int vida1, int potencia1)
	{
		this->tipo = tipo1;
		this->vida = vida1;
		this->potencia = potencia1;
	}
	string getTipo()const
	{
		return tipo;
	}
	int getVida()const
	{
		return vida;
	}
	int getPotencia()const
	{
		return potencia;
	}
	//Setter
	void setTipo(string tipo1)
	{
		this->tipo = tipo1;
	}
	void setVida(int vida1)
	{
		this->vida = vida1;
	}
	void setPotencia(int potencia1)
	{
		this->potencia = potencia1;
	}
};
//Subclase 
class Orco :public Enemigo //los dos puntos indican que es una subclase de...
{
public:
	Orco(int vida1, int potencia1) : Enemigo("Orco", vida1, potencia1)
	{} 
};
class Dragon :public Enemigo
{
public:
	Dragon(int vida1, int potencia1): Enemigo("Dragon", vida1, potencia1)
	{}
};
class Goblin :public Enemigo
{
public:
	Goblin(int vida1, int potencia1) : Enemigo("Goblin", vida1, potencia1)
	{}
};

class Jugador 
{
public:
	string id; //identificador del jugador
	int vida;
	int potencia; 
	//un constructor genera un objeto o una instancia de una clase
	//un constructor se llama igual que la clase 
	Jugador(string id1, int vida1, int potencia1)
	{
		this->id = id1;
		this->vida = vida1; 
		this->potencia = potencia1;
	}
	string getId()const
	{
		return id;
	}
	int getVida()const
	{
		return vida;
	}
	int getPotencia()const
	{
		return potencia;
	}
	//Setter
	void setId(string id1)
	{
		this->id = id1;
	}
	void setVida(int vida1)
	{
		this->vida = vida1;
	}
	void setPotencia(int potencia1)
	{
		this->potencia = potencia1;
	}
	//Funcion prototipo, primera linea de la funcion terminando con ;
	void ataque(Enemigo & enemigo);
};
int main()
{
	Jugador link("Link",100,20);
	cout << "Nombre: " << link.getId() << endl;
	cout << "Vida: " << link.getVida() << endl;
	cout << "Potencia: " << link.getPotencia() << endl;
	cout << endl;
	Orco orco(80, 10);
	Dragon dragon(300, 80);
	Goblin goblin(60, 8);
	cout << "Vida orco: " << orco.getVida();

}
