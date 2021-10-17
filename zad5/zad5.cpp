#include <iostream>

using namespace std;

int main()
{
	cout << "ZADANIE 5" << endl << endl;

	float x, y;

	char znak;

	cout << "Podaj pierwsza liczbe: ", cin >> x;

	cout << endl;

	cout << "Podaj druga liczbe: ", cin >> y;

	cout << endl;


	cout << " + suma" << endl << " - roznica" << endl << " * iloczyn" << endl << " / iloraz" << endl;

	cin >> znak;

	switch (znak) {

	case '+':
		cout << "suma: " << x + y << endl;
		break;

	case '-':
		cout << "roznica: " << x - y << endl;
		break;

	case '*':
		cout << "iloczyn: " << x * y << endl;
		break;

	case '/':
		cout << "iloraz: " << x / y << endl;
		break;
	}
}