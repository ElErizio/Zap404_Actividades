// Par o Impar.cpp : 
// Eric Isaac Rosas Vazquez
// Zap404
// 16/02/2022

#include <iostream>
using namespace std;

//jijijija
//Hog Rider

int Aña;

int main()
{
    cout << "Hola usuario este es un programa para identificar si un numero es par o impar" << endl;
    cout << "Para empezar digita el numero que deseas poner a prueba " << endl;
    cout << "POR FAVOR QUE EL NUMERO SEA ENTERO" << endl;
    cin >> Aña;

    if (Aña==0)
    {
        cout << "Un numero que no sea 0 por favor" << endl;
    }
    else
    {
        if (Aña%2==0)
        {
            cout << "Tu numero es par amigue" << endl;
        }
        else
        {
            cout << "Tu numerito es impar amigue" << endl;
        }
    }
}

