#include <iostream>

// Count Digits in a Number - Question | Java Foundation Course | Lecture 16 

int
main() 
{

    int number = 78349123;
    int count = 0;
    int n = number;
    while (n!= 0)
    {
        /* code */
        count += 1;
        std::cout << "modulo " << n/10 <<  std::endl;

        // if (number%division == number) {
        //     break;
        // }

        n = n/10;

    }
    std::cout << "Number of Digits " << count << std::endl;
    return 0;

}