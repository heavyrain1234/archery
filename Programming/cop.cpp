#include "header.hpp"
int cop (luchnik *mas_cop, luchnik *cmas_cop, luchnik *ccmas_cop){
    for (int i=0; i<20; i++){
        
        cmas_cop[i].target=mas_cop[i].target;
        ccmas_cop[i].target=mas_cop[i].target;
        
        cmas_cop[i].sila=mas_cop[i].sila;
        ccmas_cop[i].sila=mas_cop[i].sila;
        
        cmas_cop[i].hp=mas_cop[i].hp;
        ccmas_cop[i].hp=mas_cop[i].hp;
        
    }
    return 0;
}

