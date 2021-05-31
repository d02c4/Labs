#pragma once
#include <iostream>
#include "Node.h"
#include <vector>


using namespace std;
class Tree
{
private:
	bool isSearch = false;
	void getArrayRecurcive(Node*, vector<char>& res);
	Node* getLast(Node*, int, int);
	Node* findRecurcive(Node* node, char value);

public:
	Tree();
	Node* root = nullptr;
	int nodeRadius = 1;
	int levelHeight = 0;
	virtual void insertBalanced(char value);
	void update();
	void update(Node* node, int col);
	void draw();
	void draw(Node* node);
	int getHeight();
	int getHeight(Node* node);
	vector<char> getArray();
	void reorder(Node* node, char tmp);
};

