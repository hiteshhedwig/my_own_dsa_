#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-10 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    //                 *
    //         *               *
    // *                               *
    //         *               *
    //                 *


    
    // for even star, space will be altenative:
    // 


    int Ospace = stars/2;
    int Ispace = -1;
    int str    = 1 ;

    for (int i = 1; i <= stars; i++) {
        // std::cout << Ospace <<  " " << Ispace << std::endl;
        for (int j = 1; j <= Ospace; j++) {
            std::cout << "\t" ;
        }

        std::cout << "*\t" ;

        for (int j = 1; j <= Ispace; j++) {
            std::cout << "\t" ;
        }

        if (i>1 && i<stars) {
            std::cout << "*\t" ;
        }

        if (i <= stars/2) {
            Ospace--;
            Ispace+=2 ;
        } else {
            Ospace++ ;
            Ispace-=2 ;
        }

        std::cout << std::endl;

    }

    

    return 0;

}