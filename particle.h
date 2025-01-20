#ifndef PARTICLE_H
#define PARTICLE_H

#include <vector>
class Particle
{

public:
    Particle();
    Particle(double x, double y, double theta, double v, double r);

    double x;
    double y;
    double theta;
    double v;
    double r;
};


#endif

