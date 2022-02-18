// Raices y Potencias Eric Isaac.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
// Eric Isaac Rosas Vázquez
// 18/02/2022


#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <stdio.h>

//Delcaramos los valores que vamos a necesitar para este programa, m, n y el resultado 
using namespace std;

float N, M, residuo, Nr, raiz, multi;
//double residuo;



int main()
{
    //tratamos bien al usuario para que tenga paciencia y le comenzamos a pedir los datos que necesitamos jijijiji
    cout << "Hola usuario este es un programa para resolver la sig ecuacion y sacar su residuo" << endl;
    cout << "(Raiz de (N/2)*M)%3" << endl;
    cout << "Para comenzar voy a necesitar que me des 2 datos, los que tu quieras, pero de preferencia que sean positivos enteros para evitar conflictos con la raiz cuadrada" << endl;
    //Pedimos valor de N
    cout << "Por favor introduce el valor de N" << endl;
    cin >> N;
    //Pedimos valor de M
    cout << "Ahora introduce el valor que desees para M" << endl;
    cin >> M;
    
    cout << "Estamos en proceso..." << endl;
    cout << "........." << endl;
    cout << "........." << endl;
    cout << "........." << endl;
    cout << "........." << endl;
    cout << "........." << endl;
    cout << "........." << endl;

    //Resolvemos la operacion
    Nr = N / 2;
    raiz = pow(Nr, (1/2));
    multi = raiz * M;
    residuo = (int)(multi) % (3);
        //Mostramos el Resultado en pantalla
        cout << "Este es el residuo de la ecuacion" << endl;
        cout << residuo << endl;


}
