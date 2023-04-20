#include <iostream>

//  Inverse of a number - Question | Java Foundation Course | Lecture 22 

int
get_hunderth_digit(int n)
{
    int count=1;
    for (int i=0; i<n; i++) {
        count = count * 10;
    }
    return count/10;

}


int
main() 
{
    int number = 21453;
    //  1  5  2  3  4
    // [5][4][3][2][1]
    // answer : 41235


    // 1) find total number of digits
    // 2) if you find 4 on the first digit it means, 
    //    there will be one on fourth digit
    //    means, you have 1000 number 
    //    now you have 3 on the second digit. means 
    //    there will be 2 on third digit
    //    again means, you have 200 number. where you get 200 from 2 * 100 


    int inverse = 0;
    int idx_from_back = 1;
    while (number!=0) {
        auto digit = number % 10;
        std::cout << digit << " " << get_hunderth_digit(digit)  << std::endl;
        inverse += idx_from_back * get_hunderth_digit(digit);
        idx_from_back+=1;
        number = number/10;
    }

    std::cout << "inverse " << inverse << std::endl;
    
    return 0;

}