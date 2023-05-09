//Move all Zeros to the end of the array
#include <iostream>

void move_zeros_(int *arr, int size_arr) {
    int temp[size_arr] ;

    // first method
    // find zero and put it in temp and
    // shift all num to left and zero to back
    for (int i = 0; i < size_arr ; i++) {
        int temp = arr[i];
        std::cout << "found " << temp << std::endl;
        if (temp == 0) {
            for (int j = i; j < size_arr-1 ; j++) {
                arr[j] = arr[j + 1];
            }
            
            arr[size_arr-1] = temp;
            // for (size_t k = 0; k < size_arr; k++) {
            //     std::cout << arr[k] << " ";
            // }
            // std::cout << " \n shift " << std::endl;
        }
    }
}

int main() {
    //     Input: 1 ,0 ,2 ,3 ,0 ,4 ,0 ,1
    //     Output: 1 ,2 ,3 ,4 ,1 ,0 ,0 ,0
    int arr[8] = {1 ,0 ,2 ,3 ,0 ,4 ,0 ,1};
    int size_arr = 8;


    move_zeros_(arr, size_arr);

    for (size_t i = 0; i < size_arr; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}