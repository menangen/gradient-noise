//
//  Perlin.cpp
//  gradient
//
//  Created by menangen on 13.03.2021.
//

#include "Perlin.hpp"

float Perlin::getValue() const {
    std::cout << "Perlin::getValue return " << this -> freq << std::endl;
    return this -> freq;
}
