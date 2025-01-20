#include <iostream>

class System {
public:
    System() {
        std::cout << "System object created!" << std::endl;
    }
};

int main() {
    System system;
    return 0;
}