#include <iostream>

//  GCD and LCM - Question | Java Foundation Course | Lecture 26 


int
main() 
{

    int num1 = 36;
    int num2 = 24;

    // print GCD and LCM of num1 and num2
    auto res = 0;
    auto ori_n1 = num1 ;
    auto ori_n2 = num2 ;
    // GCD:
    while (num1%num2 != 0)
    {
        /* code */
        res = num1%num2;
        num1 = num2;
        num2 = res;
    }
    
    std::cout << "GCD  " << num2 << std::endl;

    int lcm = (ori_n1 * ori_n2) / num2 ;

    std::cout << "LCM " << lcm << std::endl;



    return 0;

}