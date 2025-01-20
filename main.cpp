#include <iostream>
#include "system.h"


int main() {
    System system(100, 20, 0.5, 0.1);
    system.updateRule();
    return 0;
}