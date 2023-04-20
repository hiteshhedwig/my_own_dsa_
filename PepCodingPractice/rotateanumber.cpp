#include <iostream>

//  Rotate a number - Question | Java Foundation Course | Lecture 24 

int
get_hunderth_digit(int n)
{
    int count=1;
    for (int i=0; i<n; i++) {
        count = count * 10;
    }
    return count/10;

}

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

    return count/10;
}


int
main() 
{
    int num       = 27391;
    int rotate_by = -4 ;

    // if rotate_by is positive then move num to left
    // if rotate_by is negative then move num to right

    // get length of the hunderds
    // 562984 : rotate number by +2
    // 84 * length of the hunderds num
    // + 5629
    int total_length = get_digit_hunderth(num);
    int updated_num = 0;
    if (rotate_by < 0 ) {
        rotate_by = rotate_by + 5;
    }
    if (rotate_by >= 0) {  
        // wrong need loop!
        auto backup_num = num;
        for (int i=1; i <= rotate_by ; i++) {
            auto last_several_digits = num%10;
            updated_num = last_several_digits * total_length + (backup_num/10) ;
            std::cout << "last_several_digits " << last_several_digits << " " << total_length << " " << num << std::endl;
            std::cout << "last_several_digits " << last_several_digits << std::endl;
            std::cout << "updated_num " << updated_num << std::endl;
            num /= 10;
            backup_num = updated_num;
        }
    }

    std::cout << "Result " << updated_num << std::endl;

    return 0;

}