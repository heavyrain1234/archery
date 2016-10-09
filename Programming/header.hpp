#ifndef header_h
#define header_h


#include<iostream>
using namespace std;
#include<algorithm>
#include <math.h>
#include <ctime>
#include <stdio.h>

struct luchnik{
    int sila=0, target;
    float hp=100, udar=0;
};

int cop(luchnik *, luchnik *, luchnik *);
int zabrat(luchnik *, luchnik *);
int game (luchnik *, luchnik *);


#endif
