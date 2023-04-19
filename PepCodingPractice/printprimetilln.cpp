#include <iostream>

// Print all Prime Numbers till N - Question | Java Foundation Course | Lecture 12 

bool
is_prime(int value) {

    auto count = 0; 
    for (int val = 2 ; val*val <= value ; val++) {
        if (value%val == 0) {
            count++;
            break; 
        }   
    }

    if (count == 0) {
        // std::cout << "Num : " << value <<  " is a prime "  << std::endl;
        return true;
    } else {
        // std::cout << "Num : " << value <<  " is not prime "  << std::endl;
        return false;
    }
}

int
main() 
{

    int start = 6;
    int end   = 24;

    for (int i = start; i < end; i++) {
            if (is_prime(i)) {
                std::cout << "Prime : " << i << std::endl;
            }
    }
}