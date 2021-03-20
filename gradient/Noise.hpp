//
//  Noise.hpp
//  gradient
//
//  Created by menangen on 09.03.2021.
//

#ifndef Noise_hpp
#define Noise_hpp

// #include <stdio.h>
#include <iostream>
#include "NoiseSource.hpp"

#endif /* Noise_hpp */

struct Noise {
    
    struct Module {
        enum Type { empty, perlinModule, invertModule };
        
        explicit
        Module() {};
        
        explicit
        Module(NoiseSource source) {
            this -> noiseSource = source;
            this -> type        = perlinModule;
        };
        
        Type type = empty;
        
        NoiseSource
        noiseSource = NoiseSource {};
        
        void  printModuleType() const;
        float getValue() const;
    };
    
    Module modules[16];
    uint   modulesCount = 0;
    
    explicit
    Noise(PerlinNoise p) {
        auto noiseSource   = NoiseSource(p);
        this -> modules[0] = Module(noiseSource);
    }
    
    float getValue() const;
};
