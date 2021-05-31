#pragma once
class Node
{

public:
	char value;
	Node* parent = nullptr;
	Node* left = nullptr;
	Node* right = nullptr;
	Node(char value);
	Node(Node* parent, char value);
	~Node();
	int level = 1;
	int radius = 80;
	double x;
	double y;
	void draw();
};

