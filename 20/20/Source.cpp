#include <iostream>
#include "GL/freeglut.h"
#include <string>
#include <vector>
#include "Tree.h"


using namespace std;


extern int WINDOW_WIDTH = 1000;
extern int WINDOW_HEIGHT = 600;

Tree tree;

void initGL() {
	glLoadIdentity();
	glShadeModel(GL_SMOOTH);
	glEnable(GL_LINE_SMOOTH);
	glMatrixMode(GL_PROJECTION);
	glClearColor(1, 1, 1, 1);
	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	gluOrtho2D(0, WINDOW_WIDTH, 0, WINDOW_HEIGHT);
}

void onReshape(int w, int h)
{
	WINDOW_WIDTH = w;
	WINDOW_HEIGHT = h;
	glViewport(0, 0, WINDOW_WIDTH, WINDOW_HEIGHT);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(0, WINDOW_WIDTH, 0, WINDOW_HEIGHT);
	tree.update();
	glutPostRedisplay();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	tree.draw();
	glutSwapBuffers();
}


int count_1 = 0;
int count_2 = 0;
int count_3 = 1;
int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Ru");
	vector<char> arr = { 'q', 'w', 'e', 'r', 't', 'y', 'u'};
	char tmp;
	cout << "Искомый символ: ";
	cin >> tmp;
	for (const auto &x : arr) 
	{
		if (tmp == x)
		{
			count_1++;
		}
		tree.insertBalanced(x);
		count_2++;
	}
	while (count_2 != 1)
	{
		count_2 = count_2 / 2;
		count_3++;
	}
	cout << "Количество искомых символов в дереве: " << count_1 << "\n\n\n";
	count_2 = count_2 / 2;
	cout << "Глубина дерева: " << count_3 << "\n\n\n";
	count_1 = 0;

	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
	glutInitWindowSize(WINDOW_WIDTH, WINDOW_HEIGHT);
	glutCreateWindow("Бинарное дерево");
	initGL();
	glutReshapeFunc(onReshape);
	glutDisplayFunc(display);
	glutMainLoop();
	return 0;
}