//
//  Color.hpp
//  gradient
//
//  Created by menangen on 20.09.2021.
//

#ifndef Color_hpp
#define Color_hpp

#include <stdio.h>

struct Color {
    float position = 0.0;
    float color = 0.5;
    
    bool isFull;
    
    Color() { this -> isFull = false; };
    
    Color(float position, float color) {
        
        this -> position = position;
        this -> color = color;
        
        this -> isFull = true;
    }
    
    static
    float mix(float x, float y, float alpha);
};

#endif /* Color_hpp */
