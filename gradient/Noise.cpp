//
//  Noise.cpp
//  gradient
//
//  Created by menangen on 09.03.2021.
//

#include "Noise.hpp"

float Noise::getValue() const {
    std::cout << "Noise::getValue return " << std::endl;
    
    auto m = this -> modules[0];
    return m.getValue();
}

float Noise::Module::getValue() const {
    std::cout << "Noise:Module:getValue return " << std::endl;
    return this -> noiseSource.noise.getValue();
}
