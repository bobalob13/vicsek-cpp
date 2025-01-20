#ifndef SYSTEM_H
#define SYSTEM_H

#include <vector>
#include "box.h"
//#include "particle.h"

class System {
	public:
		System(int particleNumber,double sideLength, double timeStep,double noiseStrength);
		
		int particleNumber;
		double sideLength;
		double timeStep;
		double noiseStrength;

		Box simulationBox;
		void updateRule();
};

#endif
