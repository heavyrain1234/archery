//Я не знаю GLUT, поэтому все, что здесь происходит, какая то магия.
//И кстати, если открывается несколько окон, это норма.

#include "include_GLUT.hpp"
#include "functions.hpp"
#include <csetjmp>
#include <cstdio>
static jmp_buf env;
void keyboardFunc(unsigned char key, int x, int y)
{
    if (key == 27){
        longjmp(env, 1);
    }
    
}
int draw ()
{
    char *myargv [1];
    int myargc=1;
    myargv [0]=strdup ("Myappname");
    glutInit(&myargc, myargv); //Инициализация GLUT
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGBA); //Настройка значений отображения
    
    glutInitWindowSize(1920, 1080); //Размер окна
    glutCreateWindow("Archery"); //Название окна
    
    glClearColor(0, 0, 0, 0); //Цвет фона
    glMatrixMode(GL_PROJECTION); //Выбор матрицы
    glLoadIdentity(); //Очистка матрицы
    glutKeyboardFunc(keyboardFunc);//Подключение клавиатуры
    glutReshapeFunc(reshape);
    glutDisplayFunc(display);//Отображение
    if (!setjmp(env)) //Функция выхода из MainLoop
        glutMainLoop();
    
    return 0;
}
