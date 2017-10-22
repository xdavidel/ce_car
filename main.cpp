#include <iostream>
#include "Car.h"

using namespace std;


int main()
{
	Car peguet("Peguet", "207", 2007, 1200, "Grey");
	Car ford("Ford", "Focus", 1999, 3000, "Black");

	cout << peguet;

	cout << peguet.compare(ford);

	system("pause");
	return 0;
}