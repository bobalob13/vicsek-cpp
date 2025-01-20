#include "system.h"
#include <iostream>

void System::updateRule() {
    std::cout << "Updating the system..." << std::endl;
}

System::System(int particleNumber,double sideLength, double timeStep,double noiseStrength) {
    this->particleNumber = particleNumber;
    this->sideLength = sideLength;
    this->timeStep = timeStep;
    this->noiseStrength = noiseStrength;

    this->simulationBox = Box(sideLength, sideLength, 0, 0);
}