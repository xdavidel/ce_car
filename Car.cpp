#include "Car.h"

Car::Car()
{
}

Car::Car(string make, string model, size_t year, size_t volume, char color[ COLOR_SIZE ])
{
	this->make = make;
	this->model = model;
	this->year = year;
	this->engineVolume = volume;
	strcpy_s(this->color, COLOR_SIZE, color);
}


Car::~Car()
{
}

void Car::setMake(string make)
{
	this->make = make;
}
string Car::getMake()
{
	return this->make;
}

void Car::setModel(string model)
{
	this->model = model;
}

string Car::getModel()
{
	return this->model;
}

void Car::setYear(size_t year)
{
	this->year = year;
}

int Car::getYear()
{
	return this->year;
}

void Car::setEngineVolume(size_t volume)
{
	this->engineVolume = volume;
}

int Car::getEngineVolume()
{
	return this->engineVolume;
}

void Car::setColor(char color[ COLOR_SIZE ])
{
	strcpy_s(this->color, COLOR_SIZE, color);
}

char* Car::getColor()
{
	return this->color;
}

const Car& Car::compare(const Car& other)
{
	if (this->year < other.year)
	{
		return *this;
	}
	else if (this->year > other.year)
	{
		return other;
	}
	else
	{
		if (this->engineVolume > other.engineVolume)
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
	os << car.color << " " << car.make << ", " << car.model << endl;
	return os;
}
