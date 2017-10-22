#pragma once
#include <string>

using namespace std;

#define COLOR_SIZE 10

class Car
{
	private:
	string make;
	string model;
	int year;
	int engineVolume;
	char color[ 10 ];

	public:
	Car();
	Car(string make, string model, size_t year, size_t volume, char color[ COLOR_SIZE ]);
	~Car();

	void setMake(string make);
	string getMake();

	void setModel(string model);
	string getModel();

	void setYear(size_t year);
	int getYear();

	void setEngineVolume(size_t volume);
	int getEngineVolume();

	void setColor(char color[ COLOR_SIZE ] );
	char *getColor();

	const Car& compare(const Car& other);

	friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

