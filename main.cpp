#include <iostream>
#include "test-h/test-sro.h"

int main() {
    std::cout << "Using namespace access: " << test_sro::i << std::endl;

    using namespace test_sro;
    std::cout << "After using namespace: " << i << std::endl;

    printValue();

    return 0;
}