#include<iostream>
#include<algorithm>
#include<math.h>

// Pythagorean Triplets - Solution | Java Foundation Course 

int
main() 
{

    int x1=5;
    int x2=3;
    int x3=4;

    auto max = std::max(x1,std::max(x2,x3));
    auto hypot = max;
    auto base = 0;
    auto height = 0;
    if (x1 == hypot) {
        base   = x2;
        height = x3;
    } else if (x2 == hypot) {
        base   = x1;
        height = x3;
    } else {
        base   = x1;
        height = x2;
    }
    std::cout << "Base: " << base 
              << " Height: " << height 
              << " hypot :  " << hypot << std::endl;

    if (sqrt(base*base + height*height) == hypot) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }


    return 0;

}