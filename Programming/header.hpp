#pragma once
#ifndef HEADER_HPP
#define HEADER_HPP

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
extern float a_radius_globe[20], b_radius_globe[20];
int cop(luchnik *, luchnik *, luchnik *);
int zabrat(luchnik *, luchnik *);
int game (luchnik *, luchnik *, float &, float &);
int gen (luchnik *);
int radius(luchnik *, luchnik *);
int draw ();

#endif
