#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-5 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    /**
     *         *
     *    *    *    *
     *  * *    *    * *
     *    *    *    *
     *         *
     **/

    int spaces = stars/2;
    int str    = 1 ;

    for (int i = 1; i <= stars; i++) {
        // std::cout<<spaces<<","<<str<<std::endl;
        for (int j = 1; j <= spaces ; j++) {
            std::cout << " " ;
        }
        for (int j = 1; j <= str ; j++) { 
            std::cout << "*";
        }
        if (i <= stars/2) {
            spaces --;
            str += 2;
        } else {
            spaces++;
            str -= 2;
        }
        std::cout << std::endl;
    }
    

    return 0;

}