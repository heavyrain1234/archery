#include "header.hpp"
int zabrat(luchnik *mas_zabrat, luchnik *cmas_zabrat){
    for (int i=0; i<20; i++){
        mas_zabrat[i].target=cmas_zabrat[i].target;
    }
    return 0;
}
