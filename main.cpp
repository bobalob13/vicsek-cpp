#include <iostream>
#include "system.h"


int main() {
    System system(100, 20, 0.5, 0.1);
    system.updateRule();
    std::cout<<"The system has a simulation box of side "<<system.simulationBox.getSidex()<<std::endl;
    return 0;
}