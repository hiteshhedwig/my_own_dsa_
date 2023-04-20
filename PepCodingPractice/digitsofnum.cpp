#include <iostream>

// Count Digits in a Number - Question | Java Foundation Course | Lecture 16 

int
main() 
{

    int number = 100000;
    int count = 0;
    while (number!= 0)
    {
        /* code */
        count += 1;
        std::cout << "modulo " << number%10 <<  std::endl;
        number = number/10;
    }
    return 0;

}