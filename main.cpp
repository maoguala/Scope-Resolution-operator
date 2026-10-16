#include <iostream>

#include "test-h/test-sro.h"


int main() {
std::cout << "Using namespace access: " << test_sro::i << std::endl;

    
    test_sro::printValue(); //Using namespace access(But using method):
    using namespace test_sro;
    std::cout << "After using namespace: " << /*test_repo::*/i << std::endl;
    printValue();
    
    return 0;

}