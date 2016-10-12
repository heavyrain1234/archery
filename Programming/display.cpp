#include "include_GLUT.hpp"
#include "functions.hpp"


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    
    drawCircle(); //Вывод кругов
    
    glFlush();
    glutSwapBuffers();
}
