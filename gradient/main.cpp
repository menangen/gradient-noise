#include <iostream>

#include "Noise.hpp"
#include "Gradient.hpp"

#define numberOfColors(name) sizeof(name) / sizeof(Color)

int main() {
    /*
    Perlin perlin1;
    // Perlin n1;

    Noise noise (perlin1);
    // Noise noise2 (&n1);
    // noise.addNoise(&noise2);

    float result = noise.getValue();
    
    
    std::cout << "Result = " << result << std::endl;
    std::cout << "Hello, Noise! " << std::endl;
    */
    
    
    Color palette[] = {
        Color { -1.0, 0.5 },
        Color {  1.0, 1.0 }
    };
    
    /*
    Gradient g = {
        .colors = { Color { -1.0, 0.5 }, Color { 0.5, 1.0 } }
    };
    */
    
    // Gradient g = { { Color { -1.0, 0.5 }, Color { 0.5, 1.0 } } };
    
    Gradient g = Gradient(palette, numberOfColors(palette) );
    
    g.printColors();

 
    return 0;
}
