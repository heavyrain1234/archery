
#include "header.hpp"
#include "functions.hpp"
int const N=20;
float hp_summ_a=20*100, hp_summ_b=20*100;
float a_radius_globe[20], b_radius_globe[20];
int main(){
    
    luchnik a[N], b[N], ca[N], cb[N], cca[N], ccb[N];
    gen (a);//Генерируем массив
    gen (ca);
    gen (cca);
    gen (b);
    gen (cb);
    gen (ccb);
    
    while ( (hp_summ_a>0) && (hp_summ_b>0) ){
        
        cop (a, ca, cca); //Копируем массивы
        cop (b, cb, ccb);
        //dumay1;
        //dumay2;
        zabrat(b, ccb); //Забираем значение target
        zabrat(a, ca);
        game (a, b, hp_summ_a, hp_summ_b);//Игра
        radius(a, b);//Забираем значение радиусов для прорисовки
        draw ();//рисуем
    }
    
    if (hp_summ_a<=0)
        cout<<"B-Wins"<<endl;
    
    else
        cout<<"A-Wins"<<endl;
    
    return 0;
}
