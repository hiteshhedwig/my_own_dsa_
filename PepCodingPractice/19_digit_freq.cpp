#include<iostream>
#include<algorithm>
#include<math.h>


int
main() 
{
    int num = 994543719;
    int count = 0;
    int tofind = 9;

    while (num!=0) {
        auto digit = num%10;
        if (digit == tofind) {
            count++;
        }
        num /= 10;
    }

    std::cout << count << std::endl;

    return 0;

}