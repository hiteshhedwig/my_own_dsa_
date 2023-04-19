#include <iostream>
#include <cmath>


// Q.  Is a number Prime? - Question | Java Foundation Course | Lecture 10 
int
main() {

    int num[10] = { 3,7,11, 564, 
                    3425, 2313, 4234, 56345, 
                    2339, 5656
                    };

    for (int i = 0; i < 10; i++) {
        auto count = 0; 
        for (int val = 2 ; val < sqrt(num[i]) ; val++) {
            if (num[i]%val == 0) {
                count++;
            }   
        }

        if (count == 0) {
            std::cout << "Num : " << num[i] <<  " is a prime "  << std::endl;
        } else {
            std::cout << "Num : " << num[i] <<  " is not prime "  << std::endl;
        }

    }



}