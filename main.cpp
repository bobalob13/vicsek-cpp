#include <iostream>
#include "system.h"


int main() {
    System system(100, 20, 0.5, 0.1, 42);
    system.updateRule();
    std::cout<<"The system has a simulation box of side "<<system.simulationBox.getSidex()<<std::endl;
    //std::cout<<"A random number between 10 and 20 is "<<system.uniform(10,20)<<std::endl;
    system.randomStart();
    std::cout<<"System initialised with "<<system.particles.size()<<" particles"<<std::endl;
    system.saveConfig("init.conf");
    return 0;
}