#pragma once

enum EVENTS
{
	evNothing = 0,
	evMessege = 100
};

enum COMMANDS
{
	cmdMake = 1,
	cmdAdd,
	cmdDel,
	cmdShow,
	cmdName,
	cmdQuit,
	cmdHelp
};

struct TEvent
{
	int what;
	union
	{
		int command;
		struct
		{
			int messege;
			int parameter;
		};
	};
};

