#include <iostream>

int 
main() {
    int num = 4;
    int count = 1;

    // 1
    // 23
    // 456
    // 78910

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << count ;
            count++;
        }
        std::cout << std::endl;
    }

    return 0;

}