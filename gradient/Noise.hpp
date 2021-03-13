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
        
        struct
        Perlin noise = Perlin {};
        
        explicit
        NoiseSource(struct Perlin noise) {
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
        Module(struct NoiseSource source) {
            this -> noiseSource = source;
            this -> type        = perlinModule;
        };
        
        Type type = empty;
        
        struct
        NoiseSource noiseSource = NoiseSource {};
        
        void  printModuleType();
        float getValue() const;
    };
    
    struct Module modules[16];
    int modulesCount = 0;
    
    explicit
    Noise(struct Perlin p) {
        auto noiseSource = NoiseSource(p);
        auto m = Module(noiseSource);
        this -> modules[0] = m;
    }
    
    float getValue() const;
};
