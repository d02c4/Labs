#include "Tree.h"

#include "Tree.h"
#include "Node.h"
#include <math.h>
#include <algorithm>
#include <iostream>

extern int WINDOW_WIDTH;
extern int WINDOW_HEIGHT;

const int MIN_RADIUS = 10;
const int MAX_RADIUS = 30;
Tree::Tree(void)
{

}

void Tree::insertBalanced(char value) {
	if (root == nullptr) 
	{
		root = new Node(value);
	}
	else {
		int h = getHeight();
		Node* cur = getLast(root, 1, h);
		if (cur == nullptr) 
		{
			cur = root;
			while (cur->left != nullptr) 
			{
				cur = cur->left;
			}
		}

		if (cur->left == nullptr) {
			cur->left = new Node(cur, value);
		}
		else if (cur->right == nullptr) {
			cur->right = new Node(cur, value);
		}
	}
	update();
}

Node* Tree::getLast(Node* node, int level, int lastLevel) {
	if (level == lastLevel)
		return nullptr;
	if (level < lastLevel && node->left == nullptr || node->right == nullptr)
		return node;
	Node* tmp = getLast(node->left, level + 1, lastLevel);
	if (tmp != nullptr) 
		return tmp;
	return getLast(node->right, level + 1, lastLevel);
}

int Tree::getHeight() {
	return getHeight(root);
}

int Tree::getHeight(Node* node) {
	if (node == nullptr) return 0;
	return fmax(getHeight(node->left) + 1, getHeight(node->right) + 1);
}


void Tree::update() {
	// update root node
	int levels = getHeight();
	if (levels == 0)
	{
		return;
	}
	levelHeight = WINDOW_HEIGHT / getHeight();
	nodeRadius = fmin(fmin(((WINDOW_WIDTH / pow(2, levels) * 1.0) / 2) * 0.8, ((WINDOW_HEIGHT / levels) / 2) * 0.8), MAX_RADIUS);
	nodeRadius = fmax(nodeRadius, MIN_RADIUS);
	update(root, 1);
}


void Tree::update(Node* node, int col) {
	if (node == nullptr) return;
	if (node->parent == nullptr) {
		node->level = 1;
	}
	else {
		node->level = node->parent->level + 1;
	}
	node->radius = nodeRadius;

	int absCol = col - pow(2, node->level - 1) + 1;
	double ww = ((WINDOW_WIDTH) / pow(2, node->level - 1));

	node->x = ww * (absCol - 1) + ww / 2;
	node->y = WINDOW_HEIGHT - (node->level * levelHeight - levelHeight / 2);

	update(node->left, col << 1);
	update(node->right, (col << 1) | 1);
}

void Tree::draw(Node* node) {
	if (node == nullptr) return;
	node->draw();
	draw(node->left);
	draw(node->right);
}

void Tree::draw() {
	draw(root);
}


