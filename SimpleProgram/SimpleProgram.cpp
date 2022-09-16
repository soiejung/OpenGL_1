#include <windows.h>
#include <iostream>
#include <stdlib.h>
#include <GL/glut.h>

/* Display callback function */
void mydisplay()
{
	glClear(GL_COLOR_BUFFER_BIT);

	glBegin(GL_QUADS);
		glVertex2f(-0.5f, -0.5f);
		glVertex2f(-0.5f, 0.5f);
		glVertex2f(0.5f, 0.5f);
		glVertex2f(0.5f, -0.5f);
	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);

	glutCreateWindow("simple");
	glutDisplayFunc(mydisplay);

	/*Run the GLUT event loop */
	glutMainLoop();

	return EXIT_SUCCESS;
}
