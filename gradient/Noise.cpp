//
//  Noise.cpp
//  gradient
//
//  Created by menangen on 09.03.2021.
//

#include "Noise.hpp"

float Perlin::getValue() const {
    std::cout << "Perlin::getValue return " << this -> freq << std::endl;
    return this -> freq;
}
