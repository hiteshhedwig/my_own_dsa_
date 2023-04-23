#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-1 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    for (int i = 0; i <= stars; i++) {
        for (int j = 0; j < i; j++) {
            std::cout<<"*" ;
        }
        std::cout << std::endl;
    }


    return 0;

}