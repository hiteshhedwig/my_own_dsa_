#include <iostream>

int 
main() {
    int num = 5;

    // 1
    // 1       1
    // 1       2       1
    // 1       3       3       1
    // 1       4       6       4       1
    // 1       5       10      10      5       1

    // iCj+1 = iCj (i-j) / j+1
    for (int i = 0; i <= num; i++) {
        int iCj = 1;
        for (int j = 0; j <= i; j++) {
            std::cout << iCj << "\t";
            int iCjP1 = iCj*(i-j) / (j+1);
            iCj = iCjP1 ;
        }
        std::cout << std::endl;
    }
    

    return 0;

}