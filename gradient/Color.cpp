//
//  Color.cpp
//  gradient
//
//  Created by menangen on 20.09.2021.
//

#include "Color.hpp"

float Color::mix(float x, float y, float alpha) {
    printf("Mixing...");
    return x * ( 1 - alpha ) + y * alpha;
};
