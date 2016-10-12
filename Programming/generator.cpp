#include "header.hpp"
int gen(luchnik *mas_gen){
    
    for (int i=0; i<20; i++){
        mas_gen[i].udar=0;
        mas_gen[i].hp=100;
        mas_gen[i].target=0;
        mas_gen[i].sila=0;
    }
    return 0;
}
