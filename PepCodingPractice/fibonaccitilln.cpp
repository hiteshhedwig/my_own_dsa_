#include <iostream>

//  Print all Fibonacci Numbers till N - Question | Java Foundation Course | Lecture 14 


int 
main() {
    //  0, 1, 1, 2, 3, 5, 8, 13, 21 ....
    auto fibo_num = 10;
    int fib = 0;
    int onenum = 0;
    int twonum = 1;
    for (int i = 0; i <fibo_num ; i++) {
        std::cout << "adding " << onenum << " " << twonum << std::endl;
        fib    = onenum + twonum;
        std::cout << fib << std::endl;
        onenum = twonum;
        twonum = fib;
    }

    return 0;
}