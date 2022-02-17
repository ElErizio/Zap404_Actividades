//Codigo para sucesion de fibonacci 
// Eric Isaac Rosas Vázquez

#include <iostream>
#include <string> 

using namespace std;

int fibo1 = 1;
int fibo2 = 1;
int fibo3;
int limite;

int main()
{
    cout << "Hola este programa simula la sucesion de fibonacci, por favor introduce el numero que quieres que sea de limite" << endl;
    cin >> limite;

    if (limite > 1)
    {
        cout << "Okay empezamos..." << endl;
        while (fibo1 || fibo2 || fibo3 > limite)
        {
            fibo1 + fibo2 = fibo3;
            cout << fibo1 << " + " << fibo2 << " = " << fibo3 << endl;
            fibo2 + fibo3 = fibo1;
            cout << fibo2 << " + " << fibo3 << " = " << fibo1 << endl;
            fibo3 + fibo1 = fibo2;
            cout << fibo3 << " + " << fibo1 << " = " << fibo2 << endl;
        }
    }
    else
    {
        cout << "Tiene que ser mayor a uno jajaja" << endl;
    }

    cout << "Hemos alcanzado el limite de nuestra sucesion de fibonacci jijiji " << endl;
}