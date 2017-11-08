#pragma once
#include <string>

using namespace std;

const size_t COLOR_SIZE = 10;

class Car
{
	private:
	string m_make;
	string m_model;
	int m_year;
	int m_engineVolume;
	char m_color[ 10 ];

	public:
	Car();
	Car(string make, string model, size_t year, size_t volume, char color[ COLOR_SIZE ]);
	Car(const Car&);
	~Car();

	void setMake(const string &make);
	string getMake() const;

	void setModel(const string &model);
	string getModel() const;

	void setYear(size_t year);
	int getYear() const;

	void setEngineVolume(size_t volume);
	int getEngineVolume() const;

	void setColor(const char color[ COLOR_SIZE ] );
	const char* getColor() const;

	const Car& compare(const Car& other) const;

	friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

