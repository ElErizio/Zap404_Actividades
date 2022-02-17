// Factoriales.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Eric Isaac Rosas Vazquez
// Zap404
// 16/02/2022

#include <iostream>
using namespace std;

int Factorial=1;
int derivados;
int main()
{
	cout << "Hola usuario este es un programa para mostrarte el factorial del numero que nos des" << endl;
	cout << "Por favor teclea el numero del que quieres saber su factorial" << endl;
	//que introduzca el numero nuestro usuario
	cin >> derivados;

	//Ciclamos el numero al que le vamos a sacar sus sucesion y lo vamos multiplicando 
	for (int i = 1; i <= derivados; i++)
	{
		Factorial = Factorial * i;
	}
	//Le mostramos su resultado
	cout << "El factorial del numero que escribiste es " << Factorial << endl;
	return 0;
}


