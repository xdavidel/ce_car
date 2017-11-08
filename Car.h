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
	char m_color[10];

public:
	Car();
	Car(string, string, size_t, size_t, char[COLOR_SIZE]);
	Car(const Car&);
	~Car();

	void SetMake(const string &);
	string GetMake() const;

	void SetModel(const string&);
	string GetModel() const;

	void SetYear(size_t);
	int GetYear() const;

	void SetEngineVolume(size_t);
	int GetEngineVolume() const;

	void SetColor(const char[COLOR_SIZE]);
	const char* GetColor() const;

	const Car& Compare(const Car&) const;
	static const Car& CompareSize(const Car&, const Car&);

	friend std::ostream& operator<<(std::ostream& os, const Car& car);
};

