#include <iostream>

//  Prime Factorization - Question | Java Foundation Course | Lecture 28 
bool 
is_prime(int n) {
    auto count = 0;
    for (int val = 2 ; val*val < n ; val++) {
        if (n%val == 0) {
            count++;
        }   
    }

    if (count == 0) {
        return true;
    } else {
        return false;
    }
}

int
main() 
{

    int num=1440;

    // 1440
    // to find prime factorization, what i do is keep dividing it by lowest divisible number
    int i = 2;
    while (num!=1)
    {
        /* code */
        if (is_prime(i)){
            if (num%i==0){
                std::cout << "prime factors are " << i  << " of " << num << std::endl;
                num=num/i; 
                continue;
            } 
        } 
        i++;
        // std::cout << "idx " << i << " " <<  num << std::endl;
        // std::cout << "num " << num << std::endl;
    }
    


    return 0;

}