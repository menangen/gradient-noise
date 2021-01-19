//
//  main.cpp
//  gradient
//
//  Created by menangen on 26.11.2020.
//

#import <iostream>

struct Color {
    float position = 0.0;
    float color = 0.5;
    
    static
    float mix(float x, float y, float alpha) {
        return x * ( 1 - alpha ) + y * alpha;
    };
};

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

struct Noise {
    float freq;
    float diff = 0.f;
    
    Noise (float freq = 1.0) {
        this -> freq = freq;
    };
    
    float
    getValueAt (float x) {
        return 2.0 * freq + x + diff;
    };
    
    void diffuseWith(float x0) {
        this -> diff += x0;
    };
};

int main(int argc, const char * argv[]) {
    
    Noise perlin(2);
    perlin.diffuseWith(1.0);
    perlin.diffuseWith(2.0);
    
    std::cout << perlin.getValueAt(1.0) << "\n";
    return 0;
}
