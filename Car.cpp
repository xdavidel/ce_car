#include "Car.h"

Car::Car()
{
}

Car::Car(string make, string model, size_t year, size_t volume, char color[COLOR_SIZE])
	:m_make(make), m_model(model), m_year(year), m_engineVolume(volume)
{
	strcpy_s(this->m_color, COLOR_SIZE, color);
}

Car::Car(const Car& other) :
	m_make(other.GetMake()),
	m_model(other.GetModel()),
	m_year(other.GetYear()),
	m_engineVolume(other.GetEngineVolume())
{
	strcpy_s(this->m_color, COLOR_SIZE, other.GetColor());
}


Car::~Car()
{
}

void Car::SetMake(const string &make)
{
	this->m_make = make;
}
string Car::GetMake() const
{
	return this->m_make;
}

void Car::SetModel(const string &model)
{
	this->m_model = model;
}

string Car::GetModel() const
{
	return this->m_model;
}

void Car::SetYear(size_t year)
{
	this->m_year = year;
}

int Car::GetYear() const
{
	return this->m_year;
}

void Car::SetEngineVolume(size_t volume)
{
	this->m_engineVolume = volume;
}

int Car::GetEngineVolume() const
{
	return this->m_engineVolume;
}

void Car::SetColor(const char color[COLOR_SIZE])
{
	strcpy_s(this->m_color, COLOR_SIZE, color);
}

const char* Car::GetColor() const
{
	return this->m_color;
}

const Car& Car::Compare(const Car& other) const
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

const Car & Car::CompareSize(const Car & car1, const Car &car2)
{
	return car1.GetEngineVolume() > car2.GetEngineVolume() ? car1 : car2;
}


std::ostream &operator<<(std::ostream &os, Car const &car)
{
	os << car.m_color << " " << car.m_make << ", " << car.m_model << endl;
	return os;
}
