
#if defined(linux) || defined(_WIN32)
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;

#include <GL/glut.h>
#include <GL/glu.h>
#include <GL/gl.h>   /*Для Linux и Windows*/
#else
#include <stdlib.h>
#include <iostream>
#include <fstream>
#include <cmath>
using namespace std;
#include <GLUT/glut.h>
#include <OpenGL/gl.h>
#include <OpenGL/glu.h>/*Для Mac OS*/
#endif