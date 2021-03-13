#include <iostream>
#include "Noise.hpp"

int main() {

    
    Perlin perlin1;
    //Perlin n1;

    Noise noise (perlin1);
    /*
    Noise noise2 (&n1);

    noise.addNoise(&noise2);

    float result = noise.getValue();

    std::cout << "Result = " << result << std::endl;
    std::cout << "Hello, Noise! " << std::endl;
 */
    return 0;
}
