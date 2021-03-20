//
//  NoiseSource.hpp
//  gradient
//
//  Created by menangen on 20.03.2021.
//

#ifndef NoiseSource_hpp
#define NoiseSource_hpp

#include <stdio.h>
#include "Perlin.hpp"

#endif /* NoiseSource_hpp */

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
