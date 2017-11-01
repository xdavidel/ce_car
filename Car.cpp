#include "Car.h"

Car::Car()
{
}

Car::Car(string make, string model, size_t year, size_t volume, char color[ COLOR_SIZE ])
	:m_make(make),m_model(model),m_year(year),m_engineVolume(volume)
{
	strcpy_s(this->m_color, COLOR_SIZE, color);
}


Car::~Car()
{
}

void Car::setMake(const string &make)
{
	this->m_make = make;
}
string Car::getMake() const
{
	return this->m_make;
}

void Car::setModel(const string &model)
{
	this->m_model = model;
}

string Car::getModel() const
{
	return this->m_model;
}

void Car::setYear(size_t year)
{
	this->m_year = year;
}

int Car::getYear() const
{
	return this->m_year;
}

void Car::setEngineVolume(size_t volume)
{
	this->m_engineVolume = volume;
}

int Car::getEngineVolume() const
{
	return this->m_engineVolume;
}

void Car::setColor(const char color[ COLOR_SIZE ])
{
	strcpy_s(this->m_color, COLOR_SIZE, color);
}

const char* Car::getColor() const
{
	return this->m_color;
}

const Car& Car::compare(const Car& other) const
{
	if (this->m_year < other.m_year)
	{
		return *this;
	}
	else if (this->m_year > other.m_year)
	{
		return other;
	}
	else
	{
		if (this->m_engineVolume > other.m_engineVolume)
		{
			return *this;
		}
		else
		{
			return other;
		}
	}
}

std::ostream &operator<<(std::ostream &os, Car const &car)
{
	os << car.m_color << " " << car.m_make << ", " << car.m_model << endl;
	return os;
}
