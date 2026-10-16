#pragma once

#include <iostream>

namespace test_sro {
    inline int i = 18; // For testing scope resolution operator.

    inline void printValue() {
        std::cout << "i = " << i << std::endl;
    }
}