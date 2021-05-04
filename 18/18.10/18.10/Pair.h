#pragma once
using namespace std;

class Pair
{
private:
    int first;
    double second;
    int index;

public:
    Pair();

    Pair(int first, double second);

    int GetFirst();

    double GetSecond();

    int GetIndex();

    void SetFirst(int first);

    void SetSecond(double second);

    void SetIndex(int index);

    ~Pair();

    Pair operator-(Pair secondOperand);

    Pair operator+(const int secondOperator);

    Pair operator+(const double secondOperator);

    bool operator!=(Pair secondOperand);

    friend istream& operator>>(istream& stream, Pair& element);
    friend ostream& operator<<(ostream& stream, Pair element);
};