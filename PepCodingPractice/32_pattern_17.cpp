#include <iostream>

int 
main() {
    int num = 7;

    int spaces = num/2;
    int str    = 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < spaces; j++) {
            std::cout << "\t" ;
        }
        for (int j = 0; j < str; j++) {
            std::cout << "*\t" ;
        }

        if (i == (num/2)) {
            spaces = 0;
            str    = num;
        } else if (i < (num/2)) {
            str+=1;
        } else {
            str    = num-i;
            spaces = num/2;
        }

        std::cout << std::endl;

    }


    return 0;

}