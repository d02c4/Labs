#include "Pair.h"
#include <iostream>

using namespace std;

Pair::Pair()
{
	first = rand() % 1000;
	second = rand() % 1000 / 99.9;
}

Pair::Pair(int first, double second)
{
	this->first = first;
	this->second = second;
}

Pair::~Pair()
{

}

int Pair::GetFirst()
{
	return first;
}

double Pair::GetSecond()
{
	return second;
}

void Pair::SetFirst(int first)
{
	this->first = first;
}

void Pair::SetSecond(double second)
{
	this->second = second;
}




bool Pair::operator!= (Pair other)
{
	return this->first != other.first && this->second != other.second;
}



Pair Pair::operator=(int number)
{
	Pair result;
	result.first = (int)number;
	result.second = number;
	return result;
}

Pair Pair::operator=(double number)
{
	Pair result;
	result.first = (int)number;
	result.second = number;
	return result;
}


istream& operator>>(istream& in, Pair& other)
{
	in >> other.first;
	in >> other.second;
	return in;
}

ostream& operator<<(ostream& out, Pair other)
{
	out << other.first << ":" << other.second << endl;
	return out;
}




