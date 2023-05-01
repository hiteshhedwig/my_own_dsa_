#include <bits/stdc++.h>

int fibonacci_Nth(int n, int first_, int second_){
    if (n == 0) return first_;
    if (n == 1) return second_;
    return fibonacci_Nth(n-1, first_, second_)+fibonacci_Nth(n-2, first_, second_);

}

int
main(){

    // 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, 233, 377, 610, 987, 1597, 2584, 4181.
    // give me fibonacci number on Nth position
    // if, asked 
    // f(5) = f(4)      +       f(3)
    //      f(3), f(2)        f(2),      f(1)
    // f(2), f(1) f(1) f(0)  f(1) f(0)

    int num=12;
    auto NthNum = fibonacci_Nth(num, 0, 1);
    std::cout << "Nth number is " << NthNum << std::endl;

    return 0;
}
