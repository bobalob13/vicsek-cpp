#include "particle.h"
Particle::Particle(){
    this->x = 0;
    this->y = 0;
    this->theta = 0;
    this->r = 1;
    this->v = 0.5;
}
Particle::Particle(double x, double y, double theta, double v, double r){
    this->x = x;
    this->y = y;
    this->theta = theta;
    this->v = v;
    this->r = r;
}