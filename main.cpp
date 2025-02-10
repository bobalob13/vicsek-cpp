#include <iostream>
#include "system.h"
#include <cstdlib>

int main(int argc, char* argv[]) {
    int N = 1000;
    double L = 40.0;
    double dt = 0.5;
    double noise = std::stof(argv[1]);
    int seed = 12345;
    long int iterations = 500;
    System system(N, L, dt, noise,seed);    
    
    std::cout<<"The system has a simulation box of side "<<system.simulationBox.getSidex()<<std::endl;
    //std::cout<<"A random number between 10 and 20 is "<<system.uniform(10,20)<<std::endl;
        std::cout<<"System initialised with "<<system.particles.size()<<" particles"<<std::endl;
    system.randomStart();

    std::string root = "frames/frame";
    
    for (int iteration = 0; iteration <iterations;iteration++)
    {   std::cout<<"iteration"<<iteration<<std::endl;
        if (iteration%5==0) system.saveConfig( root+std::to_string(iteration));
        system.updateRule();
    }
    
    return 0;
}