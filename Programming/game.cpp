#include "header.hpp"
int game (luchnik *a_game, luchnik *b_game){
    srand (time(NULL));
    for (int i=0; i<20; i++){
        
        a_game[i].udar=1.0*(rand()% (a_game[i].sila/2+2) + (a_game[i].sila/2) )* (a_game[i].hp/100);
        b_game[i].udar=1.0*(rand()% (b_game[i].sila/2+2) + (b_game[i].sila/2) )* (b_game[i].hp/100);
        
    }
    
    for (int i=0; i<20; i++){
        
        if (a_game[i].target!=-1){
            b_game[a_game[i].target].hp-=a_game[i].udar;
        }
        
        if (b_game[i].target!=-1){
            a_game[b_game[i].target].hp-=b_game[i].udar;
        }
        
    }
    return 0;
}