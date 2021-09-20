//
//  Gradient.hpp
//  gradient
//
//  Created by menangen on 13.03.2021.
//

#ifndef Gradient_hpp
#define Gradient_hpp

#include <iostream>
#include "Color.hpp"

#endif

struct Gradient {
    
    Color colors[16] = {
        Color { -1.0, 0.0 },
        Color {  1.0, 1.0 }
    };
    
    Gradient() { printf("Default Gradient init..." );};
    
    Gradient(Color palette[], size_t size) {
        printf("Gradient from array of %lu Color's... \n", size );
    };
    
    void
    printColors();
    
    float
    process(float value, Color first, Color second);
    
    float
    getColorAt(float value);
};
