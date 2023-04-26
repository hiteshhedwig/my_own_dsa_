#include <iostream>

int 
main() {
    int num = 4;
    int space = num+1;
    int str   = 2;
    int counter = 0;

    for (int i = 1; i <= num; i++) {
        int temp = 1;
        for (int k = 1; k <= str/2; k++) {
            std::cout << temp << "\t" ;
            temp++;
        }
        for (int j = 1; j <= space; j++) {
            std::cout << "\t" ;
        }

        if (i == num) {
            str--;
            temp--;
        }

        for (int k = 1; k <=str/2; k++) {
            temp--;
            std::cout << temp << "\t" ;
        }
        // if (str%2 != 0) {
        //     std::cout << counter << "\t" ;
        // }

        space-=2;
        str+=2 ;

        std::cout << std::endl ;
    }


    

    return 0;

}