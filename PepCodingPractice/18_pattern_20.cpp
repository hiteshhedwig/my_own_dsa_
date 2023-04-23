#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-20 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    /**
     
     *       *
     *       *
     *   *   *
     * *   * *
     *       *
     
     * -- 4 \t --
     **/

    // print W
    // sp = 4 , str = 2 
    // sp = 4 , str = 2
    // sp = 2 , str = 3
    // sp = 1 , str = 4
    // sp = 4 , str = 2

    // till stars/2 spaces are same and stars are same
    // at mid of stars/2 + 1,
    // spaces go less by 2 and star go more by 1
    // after mid of stars/2 + 1, 
    // spaces go one less AND star go one more
    // and after reaching max stars. we'll go 
    // same as step one


    int spaces = stars-1;
    int str    = 2;
    auto mid = stars/2 + 1;
    
    for (int i=1; i<=stars ; i++) {
        std::cout << i << " " << str << " " << spaces << std::endl ;
        for (int j=0; j<str ; j++) {
            std::cout <<"*";
            for (int k=1; k<=spaces ; k++) {
                if ((k == spaces) && (str == stars-1)){
                    // k--;
                    // std::cout << "\t" ;/
                    k--;
                    continue;   
                }
                std::cout << "\t" ;
            }
        }
        
        if (i == (stars/2)) {
            str += 1;
            spaces-=2;
        } 

        if (i > (stars/2)) {
            spaces-=1;
            str += 1;
        }

        // if (str == 4) {
        //     spaces = stars-1;
        //     str    = 2;
        // }

        std::cout << std::endl;
    }



    return 0;

}