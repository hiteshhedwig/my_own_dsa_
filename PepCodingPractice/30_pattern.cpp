#include <iostream>

int 
main() {
    int num = 5;
    int space = 2;
    int str   = 1;
    int counter = 1;

    //                 1
    //         2       3       2
    // 3       4       5       4       3
    //         2       3       2
    //                 1

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= space; j++) {
            std::cout << "\t" ;
        }
        int cval = counter;
        for (int k = 1; k <= str; k++) {
            std::cout << cval << "\t" ;
            if (k <= str/2) {
                cval++;
            } else {
                cval--;
            }
        }

        if (i <= (num/2)) {
            space--;
            str+=2;
            counter++;
        } else {
            counter--;
            space++;
            str-=2;
        }
        std::cout << std::endl;
    }
    

    return 0;

}