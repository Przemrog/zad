#include <iostream>

using namespace std;

int main()
{
	//zad 1
	cout << "ZADANIE 1" << endl << endl;

	int x = 65566;

	cout << "Numer albumu: " << x << endl << endl;

	//zad 2
	cout << "ZADANIE 2" << endl << endl;

	int y;

	cout << "Program sprawdza, czy podana liczba jest parzysta" << endl << endl;

	cout << "Podaj liczbe: ";

	cin >> y;

	if (y % 2 == 0) {
		cout << endl << "Podana liczba jest parzysta" << endl << endl;
	}
	else {
		cout << endl << "Podana liczba jest nieparzysta" << endl << endl;
	}

	//zad3
	cout << "ZADANIE 3" << endl << endl;

	cout << "Program sprawdza, ktora z z dwoch wprowadzonych liczb zmiennoprzecinkowych jest wieksza" << endl << endl;

	float a, b;

	cout << "Podaj pierwsza liczbe: ", cin >> a; cout << endl;

	cout << "Podaj druga liczbe: ", cin >> b; cout << endl;

	if (a > b) {
		cout << "Pierwsza liczba jest wieksza" << endl << endl;
	}
	else if (a < b) {
		cout << "Druga liczba jest wieksza" << endl << endl;
	}
	else {
		cout << "Liczby sa rowne" << endl << endl;
	}


	//zad4
	cout << "ZADANIE 4" << endl << endl;

	cout << "Program wylicza srednia arytmetyczna z czterech liczb zmiennoprzecinkowych" << endl << endl;

	float c, d, e, f;

	cout << "Podaj pierwsza liczbe: ", cin >> c; cout << endl;

	cout << "Podaj pierwsza liczbe: ", cin >> d; cout << endl;

	cout << "Podaj trzecia liczbe: ", cin >> e; cout << endl;

	cout << "Podaj czwarta liczbe: ", cin >> f; cout << endl;

	cout << "Srednia arytmetyczna podanych liczb: " << (c + d + e + f) / 4 << endl << endl;


}
