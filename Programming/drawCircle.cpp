#include "include_GLUT.hpp"
#include "functions.hpp"
#include "header.hpp"

int drawCircle() {
    
    glBegin(GL_LINE_LOOP);
    float x=30, y=30;
    int amountSegments=300;//Кол-во сторон у круга
    float r;
    for(int i=0; i<20; i++){
        
        r=a_radius_globe[i];
        y=30;
        for(int i = 0; i < amountSegments; i++){ //Прорисовка кажого круга
            double angle = 2.0 * 3.1415926 * double(i) / double(amountSegments);
            
            float dx = r * cosf(angle);
            float dy = r * sinf(angle);
            
            glVertex2f(x + dx, y + dy);
        }
        r=b_radius_globe[i];
        y=120;
        for(int i = 0; i < amountSegments; i++){ //Прорисовка кажого круга
            double angle = 2.0 * 3.1415926 * double(i) / double(amountSegments);
            
            float dx = r * cosf(angle);
            float dy = r * sinf(angle);
            
            glVertex2f(x + dx, y + dy);
        }
        
        x+=60;
        
    }
    
    glEnd();
    return 0;
}
