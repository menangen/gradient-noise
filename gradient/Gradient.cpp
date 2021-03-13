//
//  Gradient.cpp
//  gradient
//
//  Created by menangen on 13.03.2021.
//

#include "Gradient.hpp"

struct Gradient {
    
    uint8_t size = 2;
    Color colors[16] = {
        Color { -1.0, 0.0 },
        Color {  1.0, 1.0 }
    };
    
    float process(float value, Color first, Color second) {
        std::cout <<
        "Processing: \nfirst = { " << first.position << ", " << first.color <<
        " }, second = { "         << second.position << ", " << second.color << " }\n";
        
        float d = second.position - first.position;
        
        std::cout << "d = " << d << "\n";
        
        if (d == 0) {
            return second.color;
        }
        else {
            float alpha = value - first.position;
            return Color::mix(first.color, second.color, alpha);
        }
    }
    
    float getColorAt(float value) {
        Color first = colors[0];
        Color second;
        
        for (uint8_t index = 0; index < size; index++) {
            
            Color color = colors[index];
            
            second = color;
            
            if ( value <= color.position ) { break; }
            
            first = color;
        }
        
        return process(value, first, second);
    }
};
