#pragma once
#include "Object.h"
class Vector
{
protected:
	Object** begin;
	int size;
	int current;
public:
	Vector();
	Vector(int size);
	~Vector();
	void add();
	void del();
	void show();
	void HendleEvent(TEvent& event);
	int operator()();
};

