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

#endif /* Noise_hpp */

struct Perlin {
    float freq;
    
    explicit
    Perlin(float f = 1.0) {
        this -> freq = f;
    }
    
    float getValue() const;
};
