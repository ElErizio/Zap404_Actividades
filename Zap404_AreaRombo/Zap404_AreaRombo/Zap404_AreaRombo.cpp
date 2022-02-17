// Zap404_AreaRombo.cpp
// Eric Isaac Rosas Vázquez
// 16/02/2022
//

#include <iostream>
using namespace std; 

//Valores que vamos a necesitar para sacar el area
//Diagonal Mayor (D) y Diagonal menor (d)
float D;
float d;
float SArea;
float Area;

int main()
{
	cout << "Hola usuario esta es un programa para calcular el area de un rombo" << endl; 
	cout << "Solo para mencionar que el area del rombo se hace *transformando* el rombo en un rectangulo" << endl;
	cout << "y con este rectangulo sacamos 2 medidas, las multlipicamos y al resultado lo vamos a dividir entre 2" << endl; 
	//Le decimos al usuario que introduzca los datos que necesitamos para poder sacar el area
	cout << "Muy bien comencemos, Necesito que me escribas el valor de la medida mas grande" << endl;
	cin >> D;
	cout << "Muy bien ahora dame la medida mas chica" << endl;
	cin >> d;
	//Que tenga paciencia el chaval o chavala o chavale 
	cout << "Muchas gracias ahora dame un momento en lo que lo calculamos" << endl;
	cout << "........" << endl;
	cout << "........" << endl;
	cout << "........" << endl;
	cout << "........" << endl;
	//		  D*d
	//Area = -----
	//         2

	SArea=D*d;
	Area=SArea/2;
	//Le mostramos su resultado al usuario
	cout << "El area de tu rombo es " << Area << endl;
}


