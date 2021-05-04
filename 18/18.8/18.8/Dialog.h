#pragma once
#include "Vector.h"
#include "Events.h"

class Dialog : public Vector
{
protected:
	int EndState;
public:
	Dialog();
	~Dialog();
	void GetEvent(TEvent& event);
	void Execute();
	void HandleEvent(TEvent& event);
	void ClearEvent(TEvent& event);

};

