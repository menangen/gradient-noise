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

int main(int argc, const char * argv[]) {
    
    float value = 4.55;
    
    Gradient gradient = Gradient();
    
    gradient.size = 2;
    
    gradient.colors[0] = Color { -1.0, 0.08 };
    gradient.colors[1] = Color {  0.0, 0.5    };
    gradient.colors[2] = Color {  1.0, 1    };
    
    float c = gradient.getColorAt(value);
    
    if (c < 0.0799) {
        std::cout << "Error, Gradient color = " << c << "!\n";
    }
    else { std::cout << "\nHello, Gradient!\n" << c << "\n"; }
    
    std::cout << "\n";
    return 0;
}
