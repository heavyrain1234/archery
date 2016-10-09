
#include "header.hpp"


int hp_summ_a=2000, hp_summ_b=2000;
int const N=20;

int main(){
    luchnik a[N], b[N], ca[N], cb[N], cca[N], ccb[N];
    while ( (hp_summ_a>0) && (hp_summ_b>0) ){
        cop (a, ca, cca);
        cop (b, cb, ccb);
        //dumay1;
        //dumay2;
        zabrat(b, ccb);
        zabrat(a, ca);
        game (a, b);
        hp_summ_a--;
        
        
        
        
        
    }
    
    return 0;
}
