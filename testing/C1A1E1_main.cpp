//
//  C1A1E1_main.cpp
//  testing
//
//  Created by Paul de Fusco on 1/17/22.
//

#include "C1A1E1_main.hpp"
#include <iostream>

int main(int argc, const char * argv[]) {
    int var;
    
    std::cout << "Please enter any decimal integer numeric value\n";
    std::cin >> var;
    std::cout << std::dec << var << " decimal = " << std::oct << var << " octal = " << std::hex << var << " hexadeximal\n";
    
    
    return 0;
}
