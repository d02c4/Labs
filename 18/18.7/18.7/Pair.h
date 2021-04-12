#pragma once
#include <iostream>
using namespace std;


class Pair
{
private:
	int first;
	double second;
public:
    Pair();

    Pair(int first, double second);

    int GetFirst();

    double GetSecond();

    void SetFirst(int first);

    void SetSecond(double second);

    ~Pair();

	Pair operator+(const int other)
	{

			Pair result;
			result.first = this->GetFirst() + this->GetSecond();
			result.second = this->second;
			return result;
		
	}
	Pair operator+(const double other)
	{
		Pair result;
		result.first = this->first;
		result.second = this->first + this->second;
		return result;
	}

    Pair operator=(int rightOperand);
    Pair operator=(double rightOperand);


    bool operator!=(Pair secondOperand);

    friend istream& operator>>(istream& in, Pair& other);
    friend ostream& operator<<(ostream& out, Pair other);
};
