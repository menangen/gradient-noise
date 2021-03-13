//
//  Gradient.hpp
//  gradient
//
//  Created by menangen on 13.03.2021.
//

#ifndef Gradient_hpp
#define Gradient_hpp

#include <iostream>

#endif

struct Color {
    float position = 0.0;
    float color = 0.5;
    
    static
    float mix(float x, float y, float alpha) {
        return x * ( 1 - alpha ) + y * alpha;
    };
};
