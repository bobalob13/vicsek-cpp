#include "system.h"
#include <iostream>
#include <fstream>
#include <string>

void System::updateRule() {
    std::cout << "Updating the system..." << std::endl;
}

double System::uniform(double min, double max){
    return (max-min)*this->uniformDist(gen) + min;
}

void System::randomStart() {
    for (Particle &p : this->particles) {
        p.x = this->uniform(0, this->simulationBox.getSidex());
        p.y = this->uniform(0, this->simulationBox.getSidey());
        p.theta = this->uniform(-M_PI, M_PI);
    }
}

void System::saveConfig(const std::string &filename)
{   
    std::ofstream outFile(filename);
    if (!outFile.is_open()) {
        std::cerr << "Error opening file: " << filename << std::endl;
        return; // Exit if file cannot be opened
    }
    outFile << std::to_string(particles.size())+"\nParticles"<<std::endl;
    
    // Write particle properties to the file


    for (size_t i = 0; i < particles.size(); ++i) {
        outFile << i << " " << particles[i].x <<" "<<particles[i].y<<" "<<particles[i].theta << std::endl;
    }
    
    outFile.close(); // Close the file
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