#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-9 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    // *   *
    //  * * 
    //   *  
    //  * * 
    // *   *
          
    for (int i = 1; i <= stars; i++) {
        for (int j = 1; j <= stars; j++) {
            if ((i == j) || ((i+j) == stars+1)) {
                std::cout << "*";
            } else {
                std::cout << " " ;
            }
        }

        std::cout << std::endl;
    }
            
    

    return 0;

}