#include <iostream>

int 
main() {
    int num = 5;

    for (int i = 1; i <= num; i++){
        for (int j = 1; j <= num; j++) {
            if (i==1) {
                if (j == num || j <= num/2 +1) {
                    std::cout<<"*\t";
                } else {
                    std::cout<<"\t";
                }
            } else if (i <= num/2) {
                if (j == num || j == num/2 +1) {
                    std::cout<<"*\t";
                } else {
                    std::cout<<"\t";
                }
            } else if (i == num/2 +1) {
                std::cout<<"*\t";
            } else if (i < num) {
                if (j == 1 || j == num/2 +1) {
                    std::cout<<"*\t";
                } else {
                    std::cout<<"\t";
                }
            } else {
                if (j == 1 || j >= num/2 +1) {
                    std::cout<<"*\t";
                } else {
                    std::cout<<"\t";
                }
            }
        }

        std::cout << "\n";
    }

    return 0;

}