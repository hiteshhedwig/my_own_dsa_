#include <iostream>

// Reverse a number - Question | Java Foundation Course | Lecture 20 

int get_digit_hunderth(int n) 
{
    int count=1;
    while (n!= 0)
    {
        /* code */
        count = count * 10;
        std::cout << "modulo " << count <<  std::endl;
        n = n/10;

    }

    return count;
}

int
main() 
{

    int number = 587128;
    // reverse a number
    int reverse = get_digit_hunderth(number);

    std::cout << "Reverse " << reverse << std::endl;
    int count =  0;
    int reverse_real = 0 ;
    while (number!= 0)
    {
        /* code */
        count += 1;
        std::cout << "modulo " << number%10 <<  std::endl;
        std::cout << "reverse " << reverse << std::endl;
        auto reverse_up = reverse * (number%10) ;
        std::cout << "add " << reverse_up << " " << reverse_real << std::endl;
        reverse_real += reverse_up;
        reverse = reverse/10;
        number = number/10;
    }

    std::cout << "reversed " << reverse_real ;

    return 0;

}