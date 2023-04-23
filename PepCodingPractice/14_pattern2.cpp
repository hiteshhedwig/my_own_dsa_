#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-2 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    for (int i = stars; i >= 0; i--) {
        for (int j = 0; j < i; j++) {
            std::cout<<"*" ;
        }
        std::cout << std::endl;
    }


    return 0;

}