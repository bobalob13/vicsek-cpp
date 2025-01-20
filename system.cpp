#include "system.h"
#include <iostream>

void System::updateRule() {
    std::cout << "Updating the system..." << std::endl;
}

double System::uniform(double min, double max){
    return (max-min)*this->uniformDist(gen) + min;
}

System::System(int particleNumber,double sideLength, double timeStep,double noiseStrength, int seed) {
    this->particleNumber = particleNumber;
    this->sideLength = sideLength;
    this->timeStep = timeStep;
    this->noiseStrength = noiseStrength;
    this->seed = seed;

    this->simulationBox = Box(sideLength, sideLength, 0, 0);
    this->particles.resize(particleNumber);
}