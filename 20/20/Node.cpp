#include "Node.h"
#include "GL/freeglut.h"
#include "math.h"
#include <string.h>

#define PI 3.14159265358979323846

struct Color {
	double red;
	double green;
	double blue;
};

static Color lineColor{ 0, 0, 0 };
static Color circleColor{ 1, 1, 1 };
static Color defTextColor{ 0, 0, 0 };
static Color strokeColor{ 0, 0, 0 }; 

Node::Node(char value) {
	this->value = value;
}


Node::Node(Node* parent, char value) {
	this->parent = parent;
	this->value = value;
}


Node::~Node() 
{

}

inline void drawLine(double x1, double y1, double x2, double y2, Color color) {
	glColor3f(color.red, color.green, color.blue);
	glBegin(GL_LINES);
	glVertex2f((GLfloat)x1, (GLfloat)y1);
	glVertex2f(x2, y2);
	glEnd();
}

inline void drawCircle(double x, double y, int radius, Color main, Color stroke) 
{
	int iterations = 1000;
	glColor3f(main.red, main.green, main.blue);
	glBegin(GL_POLYGON);
	for (int i = 0; i < iterations; i++) {
		double x1 = radius * cos(2 * PI * (i / (iterations * 1.0))) + x;
		double y1 = radius * sin(2 * PI * (i / (iterations * 1.0))) + y;
		glVertex2f(x1, y1);
	}
	glEnd();

	glColor3f(stroke.red, stroke.green, stroke.blue);
	glBegin(GL_LINE_LOOP);
	for (int i = 0; i < 1000; i++) {
		double x1 = radius * cos(2 * PI * (i / (iterations * 1.0))) + x;
		double y1 = radius * sin(2 * PI * (i / (iterations * 1.0))) + y;
		glVertex2f(x1, y1);
	}
	glEnd();
}


void Node::draw()
{
	glLineWidth(1);
	if (left) {
		drawLine(x, y, left->x, left->y, lineColor);
	}
	if (right) {
		drawLine(x, y, right->x, right->y, lineColor);
	}

	glLineWidth(1);
	drawCircle(x, y, radius, circleColor, strokeColor);
	glColor3f(0, 0, 0);
	glRasterPos2f(x - glutBitmapWidth(GLUT_BITMAP_TIMES_ROMAN_24, value) / 2, y);
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, value);

}

