#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-6 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;
    int cols = stars + 2;
    // hollow diamon
    int str = stars - 2;
    int space = 1;

    // *** ***
    // **   **
    // *     *
    // **   **
    // *** ***

    for (int i = 0; i < stars; i++) {
        for (int j = 0; j < str; j++) {
            std::cout<<"*" ;
        }
        for (int j = 0; j < space; j++) {
            std::cout<<" " ;
        }
        for (int j = 0; j < str; j++) {
            std::cout<<"*" ;
        }
        if (i < stars/2) {
            str--;
            space+=2;
        } else {
            str++;
            space-=2;
        }

        std::cout << std::endl;
    }
    

    return 0;

}