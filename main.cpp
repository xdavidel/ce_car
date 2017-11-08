#include <iostream>
#include "Car.h"

using namespace std;


int main()
{
	Car peguet("Peguet", "207", 2007, 1200, "Grey");
	Car ford("Ford", "Focus", 1999, 3000, "Black");

	Car anotherPeguet(peguet);

	cout << peguet;
	cout << peguet.compare(ford);
	cout << peguet.compare(anotherPeguet);

	system("pause");
	return 0;
}