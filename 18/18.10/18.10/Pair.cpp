#include <iostream>
#include "Pair.h"
using namespace std;

Pair::Pair()
{
    first = NULL;
    second = NULL;
    index = NULL;
}

Pair::Pair(int first, double second)
{
    this->first = first;
    this->second = second;
    this->index = NULL;
}

int Pair::GetFirst()
{
    return first;
}

double Pair::GetSecond()
{
    return second;
}

int Pair::GetIndex()
{
    return index;
}

void Pair::SetFirst(int first)
{
    this->first = first;
}

void Pair::SetSecond(double second)
{
    this->second = second;
}

void Pair::SetIndex(int index)
{
    this->index = index;
}

Pair::~Pair()
{

}

Pair Pair::operator-(Pair secondOperand)
{
    Pair res;
    res.first = this->first - secondOperand.first;
    res.second = this->second - secondOperand.second;
    return res;
}

Pair Pair::operator+(const int secondOperator)
{
    Pair res;
    res.first = this->first + secondOperator;
    res.second = this->second;
    return res;
}

Pair Pair::operator+(const double secondOperator)
{
    Pair res;
    res.first = this->first;
    res.second = this->second + secondOperator;
    return res;
}

bool Pair::operator!=(Pair secondOperand)
{
    return first != secondOperand.first && second != secondOperand.second;
}

istream& operator>>(istream& stream, Pair& element)
{
    stream >> element.first;
    stream >> element.second;
    return stream;
}

ostream& operator<<(ostream& stream, Pair element)
{
    stream << element.first << endl;
    stream << element.second << endl;
    return stream;
}