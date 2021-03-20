//
//  Noise.cpp
//  gradient
//
//  Created by menangen on 09.03.2021.
//

#include "Noise.hpp"

void Noise::Module::printModuleType() const {
    switch (this -> type) {
        
        case perlinModule:
            std::cout << "\t Perlin::noiseModule" << std::endl;
            break;
        case invertModule:
            std::cout << "\t Invert::noiseModule" << std::endl;
            break;
    
        default:
            std::cout << "\t ERROR::noiseModule" << std::endl;
    }
}

float Noise::getValue() const {
    std::cout << "Noise::getValue return " << std::endl;
    
    std::cout << "Noise::has " << 1 + this -> modulesCount << " modules:" << std::endl;
    
    auto m = this -> modules[this -> modulesCount];
    return m.getValue();
}

float Noise::Module::getValue() const {
    
    this->printModuleType();
    
    std::cout << "Noise:Module:getValue return " << std::endl;
    return this -> noiseSource.noise.getValue();
}
