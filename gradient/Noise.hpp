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
#include "Perlin.hpp"

#endif /* Noise_hpp */

struct Noise {
    struct NoiseSource {
        enum Type { empty, perlin };

        Type noiseType = empty;
        
        PerlinNoise noise = Perlin {};
        
        explicit
        NoiseSource(PerlinNoise noise) {
            this -> noiseType = perlin;
            this -> noise     = noise;
        }
        
        explicit
        NoiseSource() {};
    };
    
    struct Module {
        enum Type { empty, perlinModule, invertModule };
        
        explicit
        Module() {};
        
        explicit
        Module(Noise::NoiseSource source) {
            this -> noiseSource = source;
            this -> type        = perlinModule;
        };
        
        Type type = empty;
        
        Noise::NoiseSource
        noiseSource = NoiseSource {};
        
        void  printModuleType();
        float getValue() const;
    };
    
    Module modules[16];
    char   modulesCount = 0;
    
    explicit
    Noise(PerlinNoise p) {
        auto noiseSource   = NoiseSource(p);
        this -> modules[0] = Module(noiseSource);
    }
    
    float getValue() const;
};
