#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-8 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;
    // diagonal

    //           *
    //         *  
    //       *    
    //     *      
    //   *        
            
    for (int i = 0; i < stars; i++) {
        for (int j = 0; j < stars; j++) {
            if (i+j == stars ) {
                std::cout << "*" ;
            } else {
                std::cout << "  ";
            }
        }
        std::cout << std::endl;
    }

    return 0;

}