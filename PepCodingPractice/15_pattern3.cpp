#include<iostream>
#include<algorithm>
#include<math.h>

//  Pattern-3 | Question | Java Foundation Course 

int
main() 
{
    int stars = 5;

    int sp = stars - 1 ;
    int st = 1;
    for (int i = 1; i <= stars ; i++) {
        for (int j = 1; j <= sp ; j++) {
            std::cout << " " ;
        }
        for (int j = 1; j <= st ; j++) { 
            std::cout << "*";
        }
        sp--;
        st++;
        std::cout << std::endl;
    }


    return 0;

}