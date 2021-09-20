//
//  Perlin.hpp
//  gradient
//
//  Created by menangen on 13.03.2021.
//

#ifndef Perlin_hpp
#define Perlin_hpp

#include <iostream>

struct Perlin {
    float freq;
    
    explicit
    Perlin(float f = 1.0) {
        this -> freq = f;
    }
    
    float getValue() const;
};

#endif /* Perlin_hpp */
typedef Perlin PerlinNoise;
