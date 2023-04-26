#include <iostream>

int 
main() {
    int num = 7;
    int str = 7;
    int Ospace = 0;
    int Ispace = 0;
    // int Ospace = 1;
    // int Ispace = 3 ;


    // *       *       *       *       *       *       *
    //         *               *               *
    //                 *       *       *
    //                         *
    //                 *       *       *
    //         *               *               *
    // *       *       *       *       *       *       *



    for (int i = 1; i <= num; i++) {
        for (int j = 0; j < Ospace; j++) {
            std::cout << "\t";
        }
        for (int j = 0; j < str/2; j++) {
            if (i>1 && i<num && j>0 && j < str/2) {
                std::cout<<"\t";
            } else {
                std::cout << "*\t";
            }
        }
        for (int j = 0; j < Ispace; j++) {
            std::cout << "\t";
        }
        for (int j = 0; j <= str/2; j++) {
            if (i>1 && i<num && j>0 && j < str/2) {
                std::cout<<"\t";
            } else {
                std::cout << "*\t";
            }
        }

        if (i <= num/2) {
            Ospace++;
            str-=2;
        } else {
            Ospace--;
            str+=2;
        }
        


        std::cout << std::endl;

    }

    return 0;

}