#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include "box.h"
#include "particle.h"
#include <random>

class System {
	public:
		System(int particleNumber,double sideLength, double timeStep,double noiseStrength, int seed);
		
		int particleNumber;
		double sideLength;
		double timeStep;
		double noiseStrength;
		int seed;
		Box simulationBox;
		std::vector<Particle> particles;

		
		std::mt19937 gen = std::mt19937(seed); 
		std::uniform_real_distribution<double> uniformDist; 
		
		void updateRule();
		double uniform(double min, double max);
};

#endif
