#include <iostream>

int 
main() {
    int num = 4;
    int count = 0;

    // 0
    // 1       1
    // 2       3       5
    // 8       13      21      34
    int one=0;
    int two=1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            if (i == 1 && j ==1) {
                std::cout << count << "\t" ;
            } else if (i == 2 && j == 1) {
                std::cout << count + 1 << "\t" ;
            } else {
                count = one + two;
                std::cout << count << "\t" ;
                one = two;
                two = count;
            }
            
        }
        // count++;
        std::cout << std::endl;
    }

    return 0;

}