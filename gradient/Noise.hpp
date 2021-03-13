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
    
    struct Module {
        enum Type { Perlin, Invert };
        Type type;
        
        void  printModuleType();
        float getValue() const;
    };
    
    struct Module modules[16];
    int modulesCount = 0;
    
    explicit
    Noise(Perlin p) {
        //this -> modules[0] = m;
    }
    
    float getValue() const;
};
